//
//  main.c
//  H264Project
//
//  Created by bianguangsheng on 2017/3/21.
//  Copyright © 2017年 soufunnet. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum {
    NALU_TYPE_SLICE =1,
    NALU_TYPE_DPA   =2,
    NALU_TYPE_DPB   =3,
    NALU_TYPE_DPC   =4,
    NALU_TYPE_IDR   =5,
    NALU_TYPE_SEI   =6,
    NALU_TYPE_SPS   =7,
    NALU_TYPE_PPS   =8,
    NALU_TYPE_AUD   =9,
    NALU_TYPE_EOSEQ =10,
    NALU_TYPE_EOSTREAM=11,
    NALU_TYPE_FILL   =12,
} NaluType;

typedef enum {
    NALU_PRIORITY_DISPOABLE=0,//LOWEST
    NALU_PRIORITY_LOW      =1,
    NALU_PRIORITY_HIGH     =2,
    NSLU_PRIORITY_HIGHEST  =3,


} NaluPriority;
typedef struct {
    int startcodePrefix_len;//first slice set 4,everything else set 3;
    unsigned len; //length of nalu unit ,
    unsigned max_size;//NALU unit buffer size
    int forbidden_bit;//should be always false
    int nal_reference_idc;//NALU_PRIORITY_XXX 优先级
    int nal_unit_type;//nalu type
    char *buf;//contains the first byte followed by the EBSP
}NALU_t;
FILE *h264stream=NULL;
int info2=0,info3=0;

static int FindStartCode2 (unsigned char *buf) {
    if (buf[0]!=0||buf[1]!=0||buf[2]!=1) {
        return 0;
        
    }else{
        return 1;
    }
}
static  int FindStartCode3 (unsigned char *buf){
    if (buf[0]!=0||buf[1]!=0 ||buf[2]!=0||buf[3] !=1){
        return 0 ;
        
    }else{
        return 1;
    }
}
//解析h264 文件
int simplest_h264_parser(char *url);


int main(int argc, const char * argv[]) {
    // insert code here...
    
    simplest_h264_parser("/Users/bianguangsheng/Desktop/ffmpegStudyProject/H264Project/H264Project/ ");
    
    
    printf("Hello, World!\n");
    return 0;
}
int GetAnnexbNALU(NALU_t *nalu) {
    int pos=0;
    int startCodeFound,rewind;
    unsigned char *Buf;
    if ((Buf=(unsigned char *)calloc(nalu->max_size, sizeof(char)))==NULL)
    
        printf("getAnnexbNalu: could not allocate Buf memory\n");
        nalu->startcodePrefix_len=3;
        if (3!=fread(Buf, 1, 3, h264stream))
        {
            free(Buf);
            return 0;
        }
        info2=FindStartCode2(Buf);
        printf("info2:%d",info2);
        if (info2!=1)
        {
            if (1!=fread(Buf+3, 1, 1, h264stream))
            {
                free(Buf);
                return -1;
            }
            info3=FindStartCode3(Buf);
            if (info3!=1)
            {
                free(Buf);
                return -1;
            }else{
                pos=4;
                nalu->startcodePrefix_len=4;
            }
        }else{
            nalu->startcodePrefix_len=3;
            pos=3;
        }
        startCodeFound=0;
        info2=0;
        info3=0;
        while (!startCodeFound) {
            if (feof(h264stream)) {
                //h264 结束 返回非零
                nalu->len=(pos-1)-nalu->startcodePrefix_len;
                memcpy(nalu->buf, &Buf[nalu->startcodePrefix_len], nalu->len);
                nalu->forbidden_bit=nalu->buf[0]&0x80;//1bit
                nalu->nal_reference_idc=nalu->buf[0]&0x60;//2bit
                nalu->nal_unit_type=(nalu->buf[0])&0x1f;//5bit
                free(Buf);
                return pos-1;
                
            }
            Buf[pos++]=fgetc(h264stream);
            info3=FindStartCode3(&Buf[pos-3]);
            if (info3!=1) {
                info2=FindStartCode2(&Buf[pos-3]);
                
            }
            startCodeFound=(info2==1||info3==1);//当startcodefound=1 跳出循环
        }
        //这里我们找到另一个startcode 我们读取startcode 所占字节数而不是本应该的，因此回到 文件中
        rewind=(info3==1)?(-4):(-3);
        if (fseek(h264stream, rewind, SEEK_CUR)!=0)
        {
            // 从当前位置回撤rewind 个字节 0 成功
            printf("getAnnexbnalu: cannot fseek in the streamfile");
            free(Buf);
        }
        nalu->len=(pos+rewind)-nalu->startcodePrefix_len;
        memcpy(nalu->buf, &Buf[nalu->startcodePrefix_len], nalu->len);
        nalu->forbidden_bit=nalu->buf[0]&0x80;//1bit
        nalu->nal_reference_idc=nalu->buf[0]&0x60;//2bit
        nalu->nal_unit_type=(nalu->buf[0])&0x1f;//5bit
        free(Buf);
        return (pos+rewind);
        
}
 //分析H.264的字节流， url 输入的H264 的字节流文件
int simplest_h264_parser(char *url){
    NALU_t *n;
    int buffersize=100000;
    FILE *myout=stdout;
    h264stream=fopen(url, "rb+");
    if (h264stream==NULL) {
        printf("open h264 file errror");
        return 0  ;
    }
    n=(NALU_t *)calloc(1, sizeof(NALU_t));
    if (n==NULL) {
        printf("calloc nalu error\n");
        return 0;
    }
    n->max_size=buffersize;
    n->buf=(char *)calloc(1, sizeof(char));
    if (n->buf==NULL) {
        printf("n->buf  calloc error\n");
        free(n);
        return 0;
    }
    int data_offset=0;
    int nal_num=0;
    printf("**************NALU TABLE******************** \n");
    printf(" NUM  |  POS|  IDC |  TYPE  |  LEN| \n");
    printf("      |      |      |        |     |   \n");
    while (!feof(h264stream)) {
        //h264 文件指针 没有指向文件结束符
        int data_lenth;
        data_lenth=GetAnnexbNALU(n);
        char type_str[20]={0};
        switch (n->nal_unit_type) {
            case NALU_TYPE_SLICE:{
                //把格式化的数据写入type——str
                sprintf(type_str, "SLICE");
                break;
            }
            case NALU_TYPE_EOSEQ:{
                sprintf(type_str, "EOSEQ");
                break;
            }
            case NALU_TYPE_DPA :{
                sprintf(type_str, "DPA");
                break;
            }
            case NALU_TYPE_DPB:{
                sprintf(type_str, "DPB");
                break;
            }
            case NALU_TYPE_DPC:{
                sprintf(type_str, "DPC");
                break;
            }
            case NALU_TYPE_IDR:{
                sprintf(type_str, "IDR");
                break;
            }
            case NALU_TYPE_SEI:{
                sprintf(type_str, "SEI");
                break;
            }
            case NALU_TYPE_SPS: {
                sprintf(type_str, "SPS");
                break;
            }
            case NALU_TYPE_PPS:{
                sprintf(type_str, "PPS");
                break;
            }
            case NALU_TYPE_AUD:{
                sprintf(type_str, "AUD");
                break;
            }
            case NALU_TYPE_EOSTREAM:{
                sprintf(type_str, "EOSTREAM");
                break;
            }
            case NALU_TYPE_FILL:{
                sprintf(type_str, "FILL");
                break;
            }
          }
        char idc_str[20]={0};
        switch (n->nal_reference_idc>>5) {
            case NALU_PRIORITY_DISPOABLE:{
                sprintf(idc_str, "DISPOABLE");
                break;
            }
            case NALU_PRIORITY_LOW:{
                sprintf(idc_str, "LOW");
                break;
            }
            case NALU_PRIORITY_HIGH:{
                sprintf(idc_str, "HIGH");
                break;
            }
                case NSLU_PRIORITY_HIGHEST:
            {
                sprintf(idc_str, "HIGHEST");
                break;
            }
            
        }
        
        fprintf(myout, "%5d |  %8d | %7s | %6s |%8d | \n",nal_num,data_offset,idc_str,type_str,n->len);
        data_offset=data_offset+data_lenth;
        nal_num++;
        
    }
    //free
    if (n) {
        if (n->buf) {
            free(n->buf);
            n->buf=NULL;
        }
        free(n);
    }
    
  
    return 0;
}
    


