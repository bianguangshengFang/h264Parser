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
#include "H264Parser.h"
//解析h264 文件
int simplest_h264_parser(char *url);


int main(int argc, const char * argv[]) {
    // insert code here...
    
    simplest_h264_parser("/Users/bianguangsheng/Desktop/ffmpegStudyProject/H264Project/H264Project/ ");
    
    
    printf("Hello, World!\n");
    return 0;
}


