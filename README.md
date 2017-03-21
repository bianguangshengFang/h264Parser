# h264Parser
主要将h264 文件进行解析的方法的调用 
    simplest_h264_parser("/Users/bianguangsheng/Desktop/ffmpegStudyProject/H264Project/H264Project/sintel.h264");
    返回
    **************NALU TABLE******************** 
 NUM  |  POS|  IDC |  TYPE  |  LEN| 
      |      |      |        |     |   
info2:0    0 |         0 | HIGHEST |    SPS |      26 | 
info2:1    1 |        30 | HIGHEST |    PPS |       6 | 
info2:1    2 |        39 | DISPOABLE |    SEI |     686 | 
info2:1    3 |       728 | HIGHEST |    IDR |   14711 | 
info2:1    4 |     15442 |    HIGH |  SLICE |    6576 | 
info2:1    5 |     22021 | DISPOABLE |  SLICE |    2085 | 
info2:1    6 |     24109 |    HIGH |  SLICE |    6623 | 
info2:1    7 |     30735 | DISPOABLE |  SLICE |    2217 | 
info2:1    8 |     32955 |    HIGH |  SLICE |    6491 | 
info2:1    9 |     39449 | DISPOABLE |  SLICE |    2125 | 
info2:1   10 |     41577 |    HIGH |  SLICE |    6663 | 
info2:1   11 |     48243 | DISPOABLE |  SLICE |    2222 | 
info2:1   12 |     50468 |    HIGH |  SLICE |    5895 | 
info2:1   13 |     56366 | DISPOABLE |  SLICE |    2050 | 
info2:1   14 |     58419 |    HIGH |  SLICE |    5086 | 
info2:1   15 |     63508 |    HIGH |  SLICE |    7190 | 
info2:1   16 |     70701 | DISPOABLE |  SLICE |    2423 | 
info2:1   17 |     73127 |    HIGH |  SLICE |    6954 | 
info2:1   18 |     80084 | DISPOABLE |  SLICE |    2562 | 
info2:1   19 |     82649 |    HIGH |  SLICE |    6690 | 
info2:1   20 |     89342 | DISPOABLE |  SLICE |    2198 | 
info2:1   21 |     91543 |    HIGH |  SLICE |    6308 | 
info2:1   22 |     97854 | DISPOABLE |  SLICE |    1973 | 
info2:1   23 |     99830 |    HIGH |  SLICE |    6842 | 
info2:1   24 |    106675 | DISPOABLE |  SLICE |    1987 | 
info2:1   25 |    108665 |    HIGH |  SLICE |    5436 | 
info2:1   26 |    114104 |    HIGH |  SLICE |     355 | 
info2:1   27 |    114462 |    HIGH |  SLICE |    6184 | 
info2:1   28 |    120649 | DISPOABLE |  SLICE |    2382 | 
info2:1   29 |    123034 |    HIGH |  SLICE |    5874 | 
info2:1   30 |    128911 | DISPOABLE |  SLICE |    1837 | 
info2:1   31 |    130751 |    HIGH |  SLICE |    5912 | 
info2:1   32 |    136666 | DISPOABLE |  SLICE |    1893 | 
info2:1   33 |    138562 |    HIGH |  SLICE |    6125 | 
info2:1   34 |    144690 | DISPOABLE |  SLICE |    1997 | 
info2:1   35 |    146690 |    HIGH |  SLICE |    6197 | 
info2:1   36 |    152890 | DISPOABLE |  SLICE |    2071 | 
info2:1   37 |    154964 |    HIGH |  SLICE |    6132 | 
info2:1   38 |    161099 | DISPOABLE |  SLICE |    1917 | 
info2:1   39 |    163019 |    HIGH |  SLICE |    5651 | 
info2:1   40 |    168673 | DISPOABLE |  SLICE |    1667 | 
info2:1   41 |    170343 |    HIGH |  SLICE |    5838 | 
info2:1   42 |    176184 | DISPOABLE |  SLICE |    1577 | 
info2:1   43 |    177764 |    HIGH |  SLICE |    5929 | 
info2:1   44 |    183696 | DISPOABLE |  SLICE |    1623 | 
info2:1   45 |    185322 |    HIGH |  SLICE |    6072 | 
info2:1   46 |    191397 | DISPOABLE |  SLICE |    1918 | 
info2:1   47 |    193318 |    HIGH |  SLICE |    5974 | 
info2:1   48 |    199295 | DISPOABLE |  SLICE |    1629 | 
info2:1   49 |    200927 |    HIGH |  SLICE |    6162 | 
info2:1   50 |    207092 | DISPOABLE |  SLICE |    1635 | 
info2:1   51 |    208730 |    HIGH |  SLICE |     385 | 
info2:1   52 |    209118 |    HIGH |  SLICE |    5995 | 
info2:1   53 |    215116 | DISPOABLE |  SLICE |    1854 | 
info2:1   54 |    216973 |    HIGH |  SLICE |    5871 | 
info2:1   55 |    222847 | DISPOABLE |  SLICE |    1676 | 
info2:1   56 |    224526 |    HIGH |  SLICE |    5565 | 
info2:1   57 |    230094 | DISPOABLE |  SLICE |    1624 | 
info2:1   58 |    231721 |    HIGH |  SLICE |    5449 | 
info2:1   59 |    237173 | DISPOABLE |  SLICE |    1536 | 
info2:1   60 |    238712 |    HIGH |  SLICE |    5667 | 
info2:1   61 |    244382 | DISPOABLE |  SLICE |    1444 | 
info2:1   62 |    245829 |    HIGH |  SLICE |    5293 | 
info2:1   63 |    251125 | DISPOABLE |  SLICE |    1731 | 
info2:1   64 |    252859 |    HIGH |  SLICE |    5227 | 
info2:1   65 |    258089 | DISPOABLE |  SLICE |    1485 | 
info2:1   66 |    259577 |    HIGH |  SLICE |    5176 | 
info2:1   67 |    264756 | DISPOABLE |  SLICE |    1749 | 
info2:1   68 |    266508 |    HIGH |  SLICE |    5501 | 
info2:1   69 |    272012 | DISPOABLE |  SLICE |    2008 | 
info2:1   70 |    274023 |    HIGH |  SLICE |    5221 | 
info2:1   71 |    279247 | DISPOABLE |  SLICE |    1942 | 
info2:1   72 |    281192 |    HIGH |  SLICE |    3990 | 
info2:1   73 |    285185 |    HIGH |  SLICE |    3914 | 
info2:1   74 |    289102 |    HIGH |  SLICE |    6038 | 
info2:1   75 |    295143 | DISPOABLE |  SLICE |    2010 | 
info2:1   76 |    297156 |    HIGH |  SLICE |     267 | 
info2:1   77 |    297426 |    HIGH |  SLICE |    3676 | 
info2:1   78 |    301105 | DISPOABLE |  SLICE |    2069 | 
info2:1   79 |    303177 | HIGHEST |    SPS |      26 | 
info2:1   80 |    303206 | HIGHEST |    PPS |       6 | 
info2:1   81 |    303215 | HIGHEST |    IDR |   17927 | 
info2:1   82 |    321145 |    HIGH |  SLICE |    4501 | 
info2:1   83 |    325649 | DISPOABLE |  SLICE |    2007 | 
info2:1   84 |    327659 |    HIGH |  SLICE |    4545 | 
info2:1   85 |    332207 | DISPOABLE |  SLICE |    1850 | 
info2:1   86 |    334060 |    HIGH |  SLICE |    5203 | 
info2:1   87 |    339266 | DISPOABLE |  SLICE |    2031 | 
info2:1   88 |    341300 |    HIGH |  SLICE |    4918 | 
info2:1   89 |    346221 | DISPOABLE |  SLICE |    1961 | 
info2:1   90 |    348185 |    HIGH |  SLICE |    4900 | 
info2:1   91 |    353088 | DISPOABLE |  SLICE |    1875 | 
info2:1   92 |    354966 |    HIGH |  SLICE |    7113 | 
info2:1   93 |    362082 | DISPOABLE |  SLICE |    3143 | 
info2:1   94 |    365228 |    HIGH |  SLICE |    6322 | 
info2:1   95 |    371553 | DISPOABLE |  SLICE |    2461 | 
info2:1   96 |    374017 |    HIGH |  SLICE |    5509 | 
info2:1   97 |    379529 | DISPOABLE |  SLICE |    1885 | 
info2:1   98 |    381417 |    HIGH |  SLICE |    4535 | 
info2:1   99 |    385955 |    HIGH |  SLICE |    8050 | 
info2:1  100 |    394008 | DISPOABLE |  SLICE |    3660 | 
info2:1  101 |    397671 |    HIGH |  SLICE |    6295 | 
info2:1  102 |    403969 | DISPOABLE |  SLICE |    1827 | 
info2:1  103 |    405799 |    HIGH |  SLICE |    4853 | 
info2:1  104 |    410655 | DISPOABLE |  SLICE |     131 | 
info2:1  105 |    410789 |    HIGH |  SLICE |    4432 | 
info2:1  106 |    415224 |    HIGH |  SLICE |    5469 | 
info2:1  107 |    420696 | DISPOABLE |  SLICE |    1887 | 
info2:1  108 |    422586 |    HIGH |  SLICE |    5201 | 
info2:1  109 |    427790 | DISPOABLE |  SLICE |    1997 | 
info2:1  110 |    429790 |    HIGH |  SLICE |    5139 | 
info2:1  111 |    434932 | DISPOABLE |  SLICE |    1999 | 
info2:1  112 |    436934 |    HIGH |  SLICE |    6961 | 
info2:1  113 |    443898 | DISPOABLE |  SLICE |    2857 | 
info2:1  114 |    446758 |    HIGH |  SLICE |    6796 | 
info2:1  115 |    453557 | DISPOABLE |  SLICE |    2606 | 
info2:1  116 |    456166 |    HIGH |  SLICE |    5862 | 
info2:1  117 |    462031 | DISPOABLE |  SLICE |    2125 | 
info2:1  118 |    464159 |    HIGH |  SLICE |    5363 | 
info2:1  119 |    469525 | DISPOABLE |  SLICE |    1982 | 
info2:1  120 |    471510 |    HIGH |  SLICE |    3958 | 
info2:1  121 |    475471 | DISPOABLE |  SLICE |    2109 | 
info2:1  122 |    477583 |    HIGH |  SLICE |    3717 | 
info2:1  123 |    481303 | DISPOABLE |  SLICE |    2123 | 
info2:1  124 |    483429 |    HIGH |  SLICE |    3540 | 
info2:1  125 |    486972 | DISPOABLE |  SLICE |    2024 | 
info2:1  126 |    488999 | HIGHEST |    SPS |      26 | 
info2:1  127 |    489028 | HIGHEST |    PPS |       6 | 
info2:1  128 |    489037 | HIGHEST |    IDR |   19606 | 
info2:1  129 |    508646 |    HIGH |  SLICE |    2984 | 
info2:1  130 |    511633 | DISPOABLE |  SLICE |     146 | 
info2:1  131 |    511782 |    HIGH |  SLICE |    5299 | 
info2:1  132 |    517084 | DISPOABLE |  SLICE |    1930 | 
info2:1  133 |    519017 |    HIGH |  SLICE |    4143 | 
info2:1  134 |    523163 |    HIGH |  SLICE |    5946 | 
info2:1  135 |    529112 | DISPOABLE |  SLICE |    2055 | 
info2:1  136 |    531170 |    HIGH |  SLICE |    6187 | 
info2:1  137 |    537360 | DISPOABLE |  SLICE |    2143 | 
info2:1  138 |    539506 |    HIGH |  SLICE |    6601 | 
info2:1  139 |    546110 | DISPOABLE |  SLICE |    2169 | 
info2:1  140 |    548282 |    HIGH |  SLICE |    6647 | 
info2:1  141 |    554932 | DISPOABLE |  SLICE |    2211 | 
info2:1  142 |    557146 |    HIGH |  SLICE |    6815 | 
info2:1  143 |    563964 | DISPOABLE |  SLICE |    2181 | 
info2:1  144 |    566148 |    HIGH |  SLICE |    7055 | 
info2:1  145 |    573206 | DISPOABLE |  SLICE |    2252 | 
info2:1  146 |    575461 |    HIGH |  SLICE |    5249 | 
info2:1  147 |    580713 |    HIGH |  SLICE |    7068 | 
info2:1  148 |    587784 | DISPOABLE |  SLICE |    2351 | 
info2:1  149 |    590138 |    HIGH |  SLICE |    6899 | 
info2:1  150 |    597040 | DISPOABLE |  SLICE |    2362 | 
info2:1  151 |    599405 |    HIGH |  SLICE |    6574 | 
info2:1  152 |    605982 | DISPOABLE |  SLICE |    2346 | 
info2:1  153 |    608331 |    HIGH |  SLICE |    5572 | 
info2:1  154 |    613906 |    HIGH |  SLICE |    7034 | 
info2:1  155 |    620943 |    HIGH |  SLICE |     419 | 
info2:1  156 |    621365 |    HIGH |  SLICE |    7693 | 
info2:1  157 |    629061 | DISPOABLE |  SLICE |    3028 | 
info2:1  158 |    632092 |    HIGH |  SLICE |    7160 | 
info2:1  159 |    639255 | DISPOABLE |  SLICE |    2696 | 
info2:1  160 |    641954 |    HIGH |  SLICE |    7229 | 
info2:1  161 |    649186 | DISPOABLE |  SLICE |    2436 | 
info2:1  162 |    651625 |    HIGH |  SLICE |    5445 | 
info2:1  163 |    657073 |    HIGH |  SLICE |    5408 | 
info2:1  164 |    662484 |    HIGH |  SLICE |    6673 | 
info2:1  165 |    669160 | DISPOABLE |  SLICE |    2217 | 
info2:1  166 |    671380 |    HIGH |  SLICE |    6272 | 
info2:1  167 |    677655 | DISPOABLE |  SLICE |    2105 | 
info2:1  168 |    679763 |    HIGH |  SLICE |    6229 | 
info2:1  169 |    685995 | DISPOABLE |  SLICE |    2002 | 
info2:1  170 |    688000 |    HIGH |  SLICE |    6320 | 
info2:1  171 |    694323 | DISPOABLE |  SLICE |    2141 | 
info2:1  172 |    696467 |    HIGH |  SLICE |    6123 | 
info2:1  173 |    702593 | DISPOABLE |  SLICE |    2180 | 
info2:1  174 |    704776 |    HIGH |  SLICE |    4494 | 
info2:1  175 |    709273 |    HIGH |  SLICE |    4832 | 
info2:1  176 |    714108 |    HIGH |  SLICE |    6263 | 
info2:1  177 |    720374 | DISPOABLE |  SLICE |    2253 | 
info2:1  178 |    722630 |    HIGH |  SLICE |    6856 | 
info2:1  179 |    729489 | DISPOABLE |  SLICE |    2267 | 
info2:1  180 |    731759 |    HIGH |  SLICE |     368 | 
info2:1  181 |    732130 |    HIGH |  SLICE |    5652 | 
info2:1  182 |    737785 | DISPOABLE |  SLICE |    2198 | 
info2:1  183 |    739986 |    HIGH |  SLICE |    6847 | 
info2:1  184 |    746836 |    HIGH |  SLICE |    5388 | 
info2:1  185 |    752227 | DISPOABLE |  SLICE |    1952 | 
info2:1  186 |    754182 |    HIGH |  SLICE |    5614 | 
info2:1  187 |    759799 | DISPOABLE |  SLICE |    2070 | 
info2:1  188 |    761872 |    HIGH |  SLICE |    5702 | 
info2:1  189 |    767577 | DISPOABLE |  SLICE |    1949 | 
info2:1  190 |    769529 |    HIGH |  SLICE |    5862 | 
info2:1  191 |    775394 | DISPOABLE |  SLICE |    2118 | 
info2:1  192 |    777515 |    HIGH |  SLICE |    6307 | 
info2:1  193 |    783825 | DISPOABLE |  SLICE |    2267 | 
info2:1  194 |    786095 |    HIGH |  SLICE |    6099 | 
info2:1  195 |    792197 | DISPOABLE |  SLICE |    2271 | 
info2:1  196 |    794471 |    HIGH |  SLICE |    6084 | 
info2:1  197 |    800558 | DISPOABLE |  SLICE |    2303 | 
info2:1  198 |    802864 |    HIGH |  SLICE |    6553 | 
info2:1  199 |    809420 | DISPOABLE |  SLICE |    2985 | 
info2:1  200 |    812408 |    HIGH |  SLICE |    5830 | 
info2:1  201 |    818241 | DISPOABLE |  SLICE |    2089 | 
info2:1  202 |    820333 |    HIGH |  SLICE |    6050 | 
info2:1  203 |    826386 | DISPOABLE |  SLICE |    2190 | 
info2:1  204 |    828579 |    HIGH |  SLICE |    5206 | 
info2:1  205 |    833788 |    HIGH |  SLICE |     373 | 
info2:1  206 |    834164 |    HIGH |  SLICE |    6534 | 
info2:1  207 |    840701 | DISPOABLE |  SLICE |    2544 | 
info2:1  208 |    843248 |    HIGH |  SLICE |    6038 | 
info2:1  209 |    849289 | DISPOABLE |  SLICE |    2967 | 
info2:1  210 |    852259 |    HIGH |  SLICE |    6015 | 
info2:1  211 |    858277 | DISPOABLE |  SLICE |    2751 | 
info2:1  212 |    861031 |    HIGH |  SLICE |    6484 | 
info2:1  213 |    867518 |    HIGH |  SLICE |    5417 | 
info2:1  214 |    872938 | DISPOABLE |  SLICE |    1825 | 
info2:1  215 |    874766 |    HIGH |  SLICE |    5332 | 
info2:1  216 |    880101 | DISPOABLE |  SLICE |    1839 | 
info2:1  217 |    881943 |    HIGH |  SLICE |    5522 | 
info2:1  218 |    887468 | DISPOABLE |  SLICE |    2071 | 
info2:1  219 |    889542 |    HIGH |  SLICE |    5514 | 
info2:1  220 |    895059 | DISPOABLE |  SLICE |    2277 | 
info2:1  221 |    897339 |    HIGH |  SLICE |    5110 | 
info2:1  222 |    902452 | DISPOABLE |  SLICE |    1665 | 
info2:1  223 |    904120 |    HIGH |  SLICE |    5347 | 
info2:1  224 |    909470 | DISPOABLE |  SLICE |    1992 | 
info2:1  225 |    911465 |    HIGH |  SLICE |    6077 | 
info2:1  226 |    917545 | DISPOABLE |  SLICE |    2243 | 
info2:1  227 |    919791 |    HIGH |  SLICE |    6259 | 
info2:1  228 |    926053 | DISPOABLE |  SLICE |    2624 | 
info2:1  229 |    928680 |    HIGH |  SLICE |    5028 | 
info2:1  230 |    933711 |    HIGH |  SLICE |     433 | 
info2:1  231 |    934147 |    HIGH |  SLICE |    4330 | 
info2:1  232 |    938480 |    HIGH |  SLICE |    3367 | 
info2:1  233 |    941850 |    HIGH |  SLICE |    4163 | 
info2:1  234 |    946016 |    HIGH |  SLICE |    4256 | 
info2:1  235 |    950275 |    HIGH |  SLICE |    4465 | 
info2:1  236 |    954743 |    HIGH |  SLICE |    4615 | 
info2:1  237 |    959361 |    HIGH |  SLICE |    6248 | 
info2:1  238 |    965612 | DISPOABLE |  SLICE |    2412 | 
info2:1  239 |    968027 |    HIGH |  SLICE |    4323 | 
info2:1  240 |    972353 |    HIGH |  SLICE |    5669 | 
info2:1  241 |    978025 | DISPOABLE |  SLICE |    1781 | 
info2:1  242 |    979809 |    HIGH |  SLICE |    5844 | 
info2:1  243 |    985656 | DISPOABLE |  SLICE |    1882 | 
info2:1  244 |    987541 |    HIGH |  SLICE |    6210 | 
info2:1  245 |    993754 | DISPOABLE |  SLICE |    2012 | 
info2:1  246 |    995769 |    HIGH |  SLICE |    5893 | 
info2:1  247 |   1001665 | DISPOABLE |  SLICE |    2045 | 
info2:1  248 |   1003713 |    HIGH |  SLICE |    4614 | 
info2:1  249 |   1008330 |    HIGH |  SLICE |    6393 | 
info2:1  250 |   1014726 | DISPOABLE |  SLICE |    1928 | 
info2:1  251 |   1016657 |    HIGH |  SLICE |    6748 | 
info2:1  252 |   1023408 | DISPOABLE |  SLICE |    2053 | 
info2:1  253 |   1025464 |    HIGH |  SLICE |    7080 | 
info2:1  254 |   1032547 | DISPOABLE |  SLICE |    2105 | 
info2:1  255 |   1034655 |    HIGH |  SLICE |     341 | 
info2:1  256 |   1034999 |    HIGH |  SLICE |    5179 | 
info2:1  257 |   1040181 |    HIGH |  SLICE |    4510 | 
info2:1  258 |   1044694 |    HIGH |  SLICE |    4363 | 
info2:1  259 |   1049060 |    HIGH |  SLICE |    6446 | 
info2:1  260 |   1055509 | DISPOABLE |  SLICE |    2537 | 
info2:1  261 |   1058049 |    HIGH |  SLICE |    5030 | 
info2:1  262 |   1063082 |    HIGH |  SLICE |    5447 | 
info2:1  263 |   1068532 |    HIGH |  SLICE |    4167 | 
info2:1  264 |   1072702 |    HIGH |  SLICE |    4762 | 
info2:1  265 |   1077467 |    HIGH |  SLICE |    5190 | 
info2:1  266 |   1082660 |    HIGH |  SLICE |    5415 | 
info2:1  267 |   1088078 |    HIGH |  SLICE |    6039 | 
info2:1  268 |   1094120 |    HIGH |  SLICE |    5800 | 
info2:1  269 |   1099923 |    HIGH |  SLICE |    5656 | 
info2:1  270 |   1105582 |    HIGH |  SLICE |    5924 | 
info2:1  271 |   1111509 |    HIGH |  SLICE |    6316 | 
info2:1  272 |   1117828 |    HIGH |  SLICE |    5709 | 
info2:1  273 |   1123540 |    HIGH |  SLICE |    6869 | 
info2:1  274 |   1130412 | DISPOABLE |  SLICE |    1755 | 
info2:1  275 |   1132170 |    HIGH |  SLICE |    6223 | 
info2:1  276 |   1138396 | DISPOABLE |  SLICE |    1675 | 
info2:1  277 |   1140074 |    HIGH |  SLICE |    6146 | 
info2:1  278 |   1146223 | DISPOABLE |  SLICE |    1813 | 
info2:1  279 |   1148039 |    HIGH |  SLICE |    4441 | 
info2:1  280 |   1152483 | DISPOABLE |  SLICE |     166 | 
info2:1  281 |   1152652 |    HIGH |  SLICE |    5335 | 
info2:1  282 |   1157990 | DISPOABLE |  SLICE |    1430 | 
info2:1  283 |   1159423 |    HIGH |  SLICE |    8171 | 
info2:1  284 |   1167597 |    HIGH |  SLICE |    4786 | 
info2:1  285 |   1172386 | DISPOABLE |  SLICE |    1192 | 
info2:1  286 |   1173581 |    HIGH |  SLICE |    5317 | 
info2:1  287 |   1178901 | DISPOABLE |  SLICE |    1146 | 
info2:1  288 |   1180050 |    HIGH |  SLICE |    5454 | 
info2:1  289 |   1185507 | DISPOABLE |  SLICE |    1253 | 
info2:1  290 |   1186763 |    HIGH |  SLICE |    5518 | 
info2:1  291 |   1192284 | DISPOABLE |  SLICE |    1325 | 
info2:1  292 |   1193612 |    HIGH |  SLICE |    5523 | 
info2:1  293 |   1199138 | DISPOABLE |  SLICE |    1277 | 
info2:1  294 |   1200418 |    HIGH |  SLICE |    5270 | 
info2:1  295 |   1205691 | DISPOABLE |  SLICE |    1385 | 
info2:1  296 |   1207079 |    HIGH |  SLICE |    7241 | 
info2:1  297 |   1214323 | DISPOABLE |  SLICE |    1639 | 
info2:1  298 |   1215965 |    HIGH |  SLICE |    5505 | 
info2:1  299 |   1221473 | DISPOABLE |  SLICE |    1251 | 
info2:1  300 |   1222727 |    HIGH |  SLICE |    5769 | 
info2:1  301 |   1228499 | DISPOABLE |  SLICE |    1262 | 
info2:1  302 |   1229764 |    HIGH |  SLICE |    5900 | 
info2:1  303 |   1235667 | DISPOABLE |  SLICE |    1148 | 
info2:1  304 |   1236818 |    HIGH |  SLICE |    6248 | 
info2:1  305 |   1243069 |    HIGH |  SLICE |    1309 | 
info2:1  306 |   1244381 | DISPOABLE |  SLICE |     284 | 
info2:1  307 |   1244668 |    HIGH |  SLICE |    5212 | 
info2:1  308 |   1249883 | DISPOABLE |  SLICE |    1099 | 
info2:1  309 |   1250985 |    HIGH |  SLICE |    5124 | 
info2:1  310 |   1256112 | DISPOABLE |  SLICE |    1129 | 
info2:1  311 |   1257244 |    HIGH |  SLICE |    5364 | 
info2:1  312 |   1262611 | DISPOABLE |  SLICE |    1109 | 
info2:1  313 |   1263723 |    HIGH |  SLICE |    5346 | 
info2:1  314 |   1269072 | DISPOABLE |  SLICE |    1139 | 
info2:1  315 |   1270214 |    HIGH |  SLICE |    5517 | 
info2:1  316 |   1275734 | DISPOABLE |  SLICE |    1142 | 
info2:1  317 |   1276879 |    HIGH |  SLICE |    5122 | 
info2:1  318 |   1282004 | DISPOABLE |  SLICE |    1115 | 
info2:1  319 |   1283122 |    HIGH |  SLICE |    4682 | 
info2:1  320 |   1287807 | DISPOABLE |  SLICE |     962 | 
info2:1  321 |   1288772 |    HIGH |  SLICE |    4622 | 
info2:1  322 |   1293397 | DISPOABLE |  SLICE |    1162 | 
info2:1  323 |   1294562 |    HIGH |  SLICE |    3080 | 
info2:1  324 |   1297645 |    HIGH |  SLICE |    1321 | 
info2:1  325 |   1298969 | DISPOABLE |  SLICE |    1079 | 
info2:1  326 |   1300051 | HIGHEST |    SPS |      26 | 
info2:1  327 |   1300080 | HIGHEST |    PPS |       6 | 
info2:1  328 |   1300089 | HIGHEST |    IDR |   20084 | 
info2:1  329 |   1320176 |    HIGH |  SLICE |    3336 | 
info2:1  330 |   1323515 |    HIGH |  SLICE |     620 | 
info2:1  331 |   1324138 | DISPOABLE |  SLICE |     444 | 
info2:1  332 |   1324585 | DISPOABLE |  SLICE |     118 | 
info2:1  333 |   1324706 |    HIGH |  SLICE |    4945 | 
info2:1  334 |   1329654 |    HIGH |  SLICE |    1213 | 
info2:1  335 |   1330870 | DISPOABLE |  SLICE |     616 | 
info2:1  336 |   1331489 | DISPOABLE |  SLICE |     606 | 
info2:1  337 |   1332098 |    HIGH |  SLICE |    4281 | 
info2:1  338 |   1336382 |    HIGH |  SLICE |    1184 | 
info2:1  339 |   1337569 | DISPOABLE |  SLICE |     619 | 
info2:1  340 |   1338191 | DISPOABLE |  SLICE |     732 | 
info2:1  341 |   1338926 |    HIGH |  SLICE |    4409 | 
info2:1  342 |   1343338 |    HIGH |  SLICE |     807 | 
info2:1  343 |   1344148 | DISPOABLE |  SLICE |     692 | 
info2:1  344 |   1344843 |    HIGH |  SLICE |    4712 | 
info2:1  345 |   1349558 |    HIGH |  SLICE |    1344 | 
info2:1  346 |   1350905 | DISPOABLE |  SLICE |     660 | 
info2:1  347 |   1351568 | DISPOABLE |  SLICE |     691 | 
info2:1  348 |   1352262 |    HIGH |  SLICE |    4478 | 
info2:1  349 |   1356743 |    HIGH |  SLICE |     732 | 
info2:1  350 |   1357478 | DISPOABLE |  SLICE |     781 | 
info2:1  351 |   1358262 |    HIGH |  SLICE |    5079 | 
info2:1  352 |   1363344 |    HIGH |  SLICE |    1167 | 
info2:1  353 |   1364514 | DISPOABLE |  SLICE |     650 | 
info2:1  354 |   1365167 | DISPOABLE |  SLICE |     589 | 
info2:1  355 |   1365759 |    HIGH |  SLICE |    4632 | 
info2:1  356 |   1370394 |    HIGH |  SLICE |    1022 | 
info2:1  357 |   1371419 | DISPOABLE |  SLICE |     671 | 
info2:1  358 |   1372093 | DISPOABLE |  SLICE |     131 | 
info2:1  359 |   1372227 |    HIGH |  SLICE |    4357 | 
info2:1  360 |   1376587 |    HIGH |  SLICE |     994 | 
info2:1  361 |   1377584 | DISPOABLE |  SLICE |     597 | 
info2:1  362 |   1378184 | DISPOABLE |  SLICE |     554 | 
info2:1  363 |   1378741 |    HIGH |  SLICE |    4406 | 
info2:1  364 |   1383150 |    HIGH |  SLICE |    1029 | 
info2:1  365 |   1384182 | DISPOABLE |  SLICE |     605 | 
info2:1  366 |   1384790 | DISPOABLE |  SLICE |     647 | 
info2:1  367 |   1385440 |    HIGH |  SLICE |    4586 | 
info2:1  368 |   1390029 |    HIGH |  SLICE |    1196 | 
info2:1  369 |   1391228 | DISPOABLE |  SLICE |     719 | 
info2:1  370 |   1391950 | DISPOABLE |  SLICE |     648 | 
info2:1  371 |   1392601 |    HIGH |  SLICE |    4564 | 
info2:1  372 |   1397168 |    HIGH |  SLICE |     854 | 
info2:1  373 |   1398025 | DISPOABLE |  SLICE |     759 | 
info2:1  374 |   1398787 |    HIGH |  SLICE |    4733 | 
info2:1  375 |   1403523 |    HIGH |  SLICE |    1036 | 
info2:1  376 |   1404562 | DISPOABLE |  SLICE |     858 | 
info2:1  377 |   1405423 |    HIGH |  SLICE |    4702 | 
info2:1  378 |   1410128 |    HIGH |  SLICE |     846 | 
info2:1  379 |   1410977 | DISPOABLE |  SLICE |     907 | 
info2:1  380 |   1411887 |    HIGH |  SLICE |    4367 | 
info2:1  381 |   1416257 |    HIGH |  SLICE |     114 | 
info2:1  382 |   1416374 | DISPOABLE |  SLICE |     987 | 
info2:1  383 |   1417364 |    HIGH |  SLICE |    6956 | 
info2:1  384 |   1424323 |    HIGH |  SLICE |    1066 | 
info2:1  385 |   1425392 | DISPOABLE |  SLICE |     774 | 
info2:1  386 |   1426169 |    HIGH |  SLICE |    4928 | 
info2:1  387 |   1431100 |    HIGH |  SLICE |    1433 | 
info2:1  388 |   1432536 | DISPOABLE |  SLICE |     727 | 
info2:1  389 |   1433266 | DISPOABLE |  SLICE |     732 | 
info2:1  390 |   1434001 |    HIGH |  SLICE |    3872 | 
info2:1  391 |   1437876 |    HIGH |  SLICE |     763 | 
info2:1  392 |   1438642 | DISPOABLE |  SLICE |     794 | 
info2:1  393 |   1439439 |    HIGH |  SLICE |    4269 | 
info2:1  394 |   1443711 |    HIGH |  SLICE |     644 | 
info2:1  395 |   1444358 | DISPOABLE |  SLICE |     724 | 
info2:1  396 |   1445085 |    HIGH |  SLICE |    4610 | 
info2:1  397 |   1449698 |    HIGH |  SLICE |    1064 | 
info2:1  398 |   1450765 | DISPOABLE |  SLICE |     967 | 
info2:1  399 |   1451735 |    HIGH |  SLICE |    4483 | 
info2:1  400 |   1456221 |    HIGH |  SLICE |    1094 | 
info2:1  401 |   1457318 | DISPOABLE |  SLICE |     974 | 
info2:1  402 |   1458295 |    HIGH |  SLICE |    4337 | 
info2:1  403 |   1462635 |    HIGH |  SLICE |    1086 | 
info2:1  404 |   1463724 | DISPOABLE |  SLICE |    1045 | 
info2:1  405 |   1464772 |    HIGH |  SLICE |    3818 | 
info2:1  406 |   1468593 |    HIGH |  SLICE |     110 | 
info2:1  407 |   1468706 | DISPOABLE |  SLICE |    1109 | 
info2:1  408 |   1469818 |    HIGH |  SLICE |    4273 | 
info2:1  409 |   1474094 |    HIGH |  SLICE |    1087 | 
info2:1  410 |   1475184 | DISPOABLE |  SLICE |    1010 | 
info2:1  411 |   1476197 |    HIGH |  SLICE |    3722 | 
info2:1  412 |   1479922 | DISPOABLE |  SLICE |    1321 | 
info2:1  413 |   1481246 |    HIGH |  SLICE |    4417 | 
info2:1  414 |   1485666 | DISPOABLE |  SLICE |    1443 | 
info2:1  415 |   1487112 |    HIGH |  SLICE |    4313 | 
info2:1  416 |   1491428 | DISPOABLE |  SLICE |    1643 | 
info2:1  417 |   1493074 |    HIGH |  SLICE |    4569 | 
info2:1  418 |   1497646 | DISPOABLE |  SLICE |    1791 | 
info2:1  419 |   1499440 |    HIGH |  SLICE |    4681 | 
info2:1  420 |   1504124 | DISPOABLE |  SLICE |    1792 | 
info2:1  421 |   1505919 |    HIGH |  SLICE |    5212 | 
info2:1  422 |   1511134 | DISPOABLE |  SLICE |    1715 | 
info2:1  423 |   1512852 |    HIGH |  SLICE |    4948 | 
info2:1  424 |   1517803 | DISPOABLE |  SLICE |    1767 | 
info2:1  425 |   1519573 |    HIGH |  SLICE |    5041 | 
info2:1  426 |   1524617 | DISPOABLE |  SLICE |    1933 | 
info2:1  427 |   1526553 |    HIGH |  SLICE |    5134 | 
info2:1  428 |   1531690 | DISPOABLE |  SLICE |    1763 | 
info2:1  429 |   1533456 |    HIGH |  SLICE |    5428 | 
info2:1  430 |   1538887 | DISPOABLE |  SLICE |    1790 | 
info2:1  431 |   1540680 |    HIGH |  SLICE |    4018 | 
info2:1  432 |   1544701 | DISPOABLE |  SLICE |     154 | 
info2:1  433 |   1544858 |    HIGH |  SLICE |    5710 | 
info2:1  434 |   1550571 | DISPOABLE |  SLICE |    1484 | 
info2:1  435 |   1552058 |    HIGH |  SLICE |    5508 | 
info2:1  436 |   1557569 | DISPOABLE |  SLICE |    1453 | 
info2:1  437 |   1559025 |    HIGH |  SLICE |    5846 | 
info2:1  438 |   1564874 |    HIGH |  SLICE |    1241 | 
info2:1  439 |   1566118 | DISPOABLE |  SLICE |    1204 | 
info2:1  440 |   1567325 |    HIGH |  SLICE |    5627 | 
info2:1  441 |   1572955 |    HIGH |  SLICE |     941 | 
info2:1  442 |   1573899 | DISPOABLE |  SLICE |     903 | 
info2:1  443 |   1574805 |    HIGH |  SLICE |    5272 | 
info2:1  444 |   1580080 |    HIGH |  SLICE |     686 | 
info2:1  445 |   1580769 | DISPOABLE |  SLICE |     740 | 
info2:1  446 |   1581512 |    HIGH |  SLICE |    4829 | 
info2:1  447 |   1586344 |    HIGH |  SLICE |     995 | 
info2:1  448 |   1587342 | DISPOABLE |  SLICE |     592 | 
info2:1  449 |   1587937 | DISPOABLE |  SLICE |     433 | 
info2:1  450 |   1588373 |    HIGH |  SLICE |    4191 | 
info2:1  451 |   1592567 |    HIGH |  SLICE |     825 | 
info2:1  452 |   1593395 | DISPOABLE |  SLICE |     484 | 
info2:1  453 |   1593882 | DISPOABLE |  SLICE |     381 | 
info2:1  454 |   1594266 |    HIGH |  SLICE |    3053 | 
info2:1  455 |   1597322 |    HIGH |  SLICE |     466 | 
info2:1  456 |   1597791 | DISPOABLE |  SLICE |     385 | 
info2:1  457 |   1598179 | DISPOABLE |  SLICE |     133 | 
info2:1  458 |   1598315 |    HIGH |  SLICE |    2781 | 
info2:1  459 |   1601099 |    HIGH |  SLICE |     679 | 
info2:1  460 |   1601781 | DISPOABLE |  SLICE |     332 | 
info2:1  461 |   1602116 | DISPOABLE |  SLICE |     326 | 
info2:1  462 |   1602445 |    HIGH |  SLICE |    1239 | 
info2:1  463 |   1603687 |    HIGH |  SLICE |     706 | 
info2:1  464 |   1604396 | DISPOABLE |  SLICE |     333 | 
info2:1  465 |   1604732 | DISPOABLE |  SLICE |     514 | 
info2:1  466 |   1605249 | HIGHEST |    SPS |      26 | 
info2:1  467 |   1605278 | HIGHEST |    PPS |       6 | 
info2:1  468 |   1605287 | HIGHEST |    IDR |   13716 | 
info2:1  469 |   1619006 |    HIGH |  SLICE |    3800 | 
info2:1  470 |   1622809 | DISPOABLE |  SLICE |     864 | 
info2:1  471 |   1623676 |    HIGH |  SLICE |    3765 | 
info2:1  472 |   1627444 | DISPOABLE |  SLICE |    1040 | 
info2:1  473 |   1628487 |    HIGH |  SLICE |    3854 | 
info2:1  474 |   1632344 | DISPOABLE |  SLICE |     966 | 
info2:1  475 |   1633313 |    HIGH |  SLICE |    3927 | 
info2:1  476 |   1637243 | DISPOABLE |  SLICE |    1131 | 
info2:1  477 |   1638377 |    HIGH |  SLICE |    3724 | 
info2:1  478 |   1642104 | DISPOABLE |  SLICE |    1083 | 
info2:1  479 |   1643190 |    HIGH |  SLICE |    3920 | 
info2:1  480 |   1647113 | DISPOABLE |  SLICE |    1160 | 
info2:1  481 |   1648276 |    HIGH |  SLICE |    4270 | 
info2:1  482 |   1652549 | DISPOABLE |  SLICE |    1405 | 
info2:1  483 |   1653957 |    HIGH |  SLICE |    3058 | 
info2:1  484 |   1657018 | DISPOABLE |  SLICE |     145 | 
info2:1  485 |   1657166 |    HIGH |  SLICE |    3865 | 
info2:1  486 |   1661034 | DISPOABLE |  SLICE |    1568 | 
info2:1  487 |   1662605 |    HIGH |  SLICE |    3928 | 
info2:1  488 |   1666536 |    HIGH |  SLICE |    3047 | 
info2:1  489 |   1669586 |    HIGH |  SLICE |    3388 | 
info2:1  490 |   1672977 |    HIGH |  SLICE |    3487 | 
info2:1  491 |   1676467 |    HIGH |  SLICE |    3386 | 
info2:1  492 |   1679856 |    HIGH |  SLICE |    3279 | 
info2:1  493 |   1683138 |    HIGH |  SLICE |    3607 | 
info2:1  494 |   1686748 |    HIGH |  SLICE |    3378 | 
info2:1  495 |   1690129 |    HIGH |  SLICE |    3492 | 
info2:1  496 |   1693624 |    HIGH |  SLICE |    3338 | 
info2:1  497 |   1696965 |    HIGH |  SLICE |    3421 | 
info2:1  498 |   1700389 |    HIGH |  SLICE |    3544 | 
info2:1  499 |   1703936 |    HIGH |  SLICE |    3837 | 
info2:1  500 |   1707776 |    HIGH |  SLICE |    3468 | 
info2:1  501 |   1711247 |    HIGH |  SLICE |    3569 | 
info2:1  502 |   1714819 |    HIGH |  SLICE |    3624 | 
info2:1  503 |   1718446 |    HIGH |  SLICE |    3725 | 
info2:1  504 |   1722174 |    HIGH |  SLICE |    3561 | 
info2:1  505 |   1725738 |    HIGH |  SLICE |    3581 | 
info2:1  506 |   1729322 |    HIGH |  SLICE |    3669 | 
info2:1  507 |   1732994 |    HIGH |  SLICE |    4163 | 
info2:1  508 |   1737160 |    HIGH |  SLICE |    4679 | 
info2:1  509 |   1741842 |    HIGH |  SLICE |     256 | 
info2:1  510 |   1742101 |    HIGH |  SLICE |    3708 | 
info2:1  511 |   1745812 |    HIGH |  SLICE |    3726 | 
info2:1  512 |   1749541 |    HIGH |  SLICE |    4016 | 
info2:1  513 |   1753560 |    HIGH |  SLICE |    4087 | 
info2:1  514 |   1757650 |    HIGH |  SLICE |    4035 | 
info2:1  515 |   1761688 |    HIGH |  SLICE |    4067 | 
info2:1  516 |   1765758 |    HIGH |  SLICE |    3969 | 
info2:1  517 |   1769730 |    HIGH |  SLICE |    3849 | 
info2:1  518 |   1773582 |    HIGH |  SLICE |    3961 | 
info2:1  519 |   1777546 |    HIGH |  SLICE |    3664 | 
info2:1  520 |   1781213 |    HIGH |  SLICE |    3718 | 
info2:1  521 |   1784934 |    HIGH |  SLICE |    3701 | 
info2:1  522 |   1788638 |    HIGH |  SLICE |    3607 | 
info2:1  523 |   1792248 |    HIGH |  SLICE |    3402 | 
info2:1  524 |   1795653 |    HIGH |  SLICE |    3621 | 
info2:1  525 |   1799277 |    HIGH |  SLICE |    3652 | 
info2:1  526 |   1802932 |    HIGH |  SLICE |    3617 | 
info2:1  527 |   1806552 |    HIGH |  SLICE |    3639 | 
info2:1  528 |   1810194 |    HIGH |  SLICE |    3444 | 
info2:1  529 |   1813641 |    HIGH |  SLICE |    3379 | 
info2:1  530 |   1817023 |    HIGH |  SLICE |    3650 | 
info2:1  531 |   1820676 |    HIGH |  SLICE |    4489 | 
info2:1  532 |   1825168 |    HIGH |  SLICE |    4416 | 
info2:1  533 |   1829587 |    HIGH |  SLICE |    5223 | 
info2:1  534 |   1834813 |    HIGH |  SLICE |     226 | 
info2:1  535 |   1835042 |    HIGH |  SLICE |    4336 | 
info2:1  536 |   1839381 |    HIGH |  SLICE |    4426 | 
info2:1  537 |   1843810 |    HIGH |  SLICE |    4347 | 
info2:1  538 |   1848160 |    HIGH |  SLICE |    4055 | 
info2:1  539 |   1852218 |    HIGH |  SLICE |    3990 | 
info2:1  540 |   1856211 |    HIGH |  SLICE |    3950 | 
info2:1  541 |   1860164 |    HIGH |  SLICE |    3822 | 
info2:1  542 |   1863989 |    HIGH |  SLICE |    3878 | 
info2:1  543 |   1867870 |    HIGH |  SLICE |    3760 | 
info2:1  544 |   1871633 |    HIGH |  SLICE |    3827 | 
info2:1  545 |   1875463 |    HIGH |  SLICE |    3867 | 
info2:1  546 |   1879333 |    HIGH |  SLICE |    3818 | 
info2:1  547 |   1883154 |    HIGH |  SLICE |    3731 | 
info2:1  548 |   1886888 |    HIGH |  SLICE |    3396 | 
info2:1  549 |   1890287 |    HIGH |  SLICE |    3559 | 
info2:1  550 |   1893849 |    HIGH |  SLICE |    3498 | 
info2:1  551 |   1897350 |    HIGH |  SLICE |    3543 | 
info2:1  552 |   1900896 |    HIGH |  SLICE |    3443 | 
info2:1  553 |   1904342 |    HIGH |  SLICE |    3602 | 
info2:1  554 |   1907947 |    HIGH |  SLICE |    3511 | 
info2:1  555 |   1911461 |    HIGH |  SLICE |    3454 | 
info2:1  556 |   1914918 | HIGHEST |    SPS |      26 | 
info2:1  557 |   1914947 | HIGHEST |    PPS |       6 | 
info2:1  558 |   1914956 | HIGHEST |    IDR |    9013 | 
info2:1  559 |   1923972 |    HIGH |  SLICE |    3847 | 
info2:1  560 |   1927822 | DISPOABLE |  SLICE |    1349 | 
info2:1  561 |   1929174 |    HIGH |  SLICE |     351 | 
info2:1  562 |   1929528 |    HIGH |  SLICE |    2889 | 
info2:1  563 |   1932420 |    HIGH |  SLICE |    2940 | 
info2:1  564 |   1935363 |    HIGH |  SLICE |    2990 | 
info2:1  565 |   1938356 |    HIGH |  SLICE |    3128 | 
info2:1  566 |   1941487 |    HIGH |  SLICE |    3312 | 
info2:1  567 |   1944802 |    HIGH |  SLICE |    3660 | 
info2:1  568 |   1948465 |    HIGH |  SLICE |    3484 | 
info2:1  569 |   1951952 |    HIGH |  SLICE |    3137 | 
info2:1  570 |   1955092 |    HIGH |  SLICE |    2853 | 
info2:1  571 |   1957948 |    HIGH |  SLICE |    3199 | 
info2:1  572 |   1961150 |    HIGH |  SLICE |    3650 | 
info2:1  573 |   1964803 |    HIGH |  SLICE |    3939 | 
info2:1  574 |   1968745 |    HIGH |  SLICE |    3490 | 
info2:1  575 |   1972238 |    HIGH |  SLICE |    3287 | 
info2:1  576 |   1975528 |    HIGH |  SLICE |    3228 | 
info2:1  577 |   1978759 |    HIGH |  SLICE |    3190 | 
info2:1  578 |   1981952 |    HIGH |  SLICE |    3365 | 
info2:1  579 |   1985320 |    HIGH |  SLICE |    3525 | 
info2:1  580 |   1988848 |    HIGH |  SLICE |    3671 | 
info2:1  581 |   1992522 |    HIGH |  SLICE |    3787 | 
info2:1  582 |   1996312 |    HIGH |  SLICE |    4203 | 
info2:1  583 |   2000518 |    HIGH |  SLICE |    4531 | 
info2:1  584 |   2005052 |    HIGH |  SLICE |    4510 | 
info2:1  585 |   2009565 |    HIGH |  SLICE |    4914 | 
info2:1  586 |   2014482 |    HIGH |  SLICE |     298 | 
info2:1  587 |   2014783 |    HIGH |  SLICE |    4066 | 
info2:1  588 |   2018852 |    HIGH |  SLICE |    3746 | 
info2:1  589 |   2022601 |    HIGH |  SLICE |    4721 | 
info2:1  590 |   2027325 |    HIGH |  SLICE |    4066 | 
info2:1  591 |   2031394 |    HIGH |  SLICE |    4182 | 
info2:1  592 |   2035579 |    HIGH |  SLICE |    4322 | 
info2:1  593 |   2039904 |    HIGH |  SLICE |    4359 | 
info2:1  594 |   2044266 |    HIGH |  SLICE |    5291 | 
info2:1  595 |   2049560 | DISPOABLE |  SLICE |    2076 | 
info2:1  596 |   2051639 |    HIGH |  SLICE |    5170 | 
info2:1  597 |   2056812 | DISPOABLE |  SLICE |    2272 | 
info2:1  598 |   2059087 |    HIGH |  SLICE |    3636 | 
info2:1  599 |   2062726 |    HIGH |  SLICE |    3562 | 
info2:1  600 |   2066291 |    HIGH |  SLICE |    3745 | 
info2:1  601 |   2070039 |    HIGH |  SLICE |    3859 | 
info2:1  602 |   2073901 |    HIGH |  SLICE |    4260 | 
info2:1  603 |   2078164 |    HIGH |  SLICE |    3888 | 
info2:1  604 |   2082055 |    HIGH |  SLICE |    4008 | 
info2:1  605 |   2086066 |    HIGH |  SLICE |    4135 | 
info2:1  606 |   2090204 |    HIGH |  SLICE |    3920 | 
info2:1  607 |   2094127 |    HIGH |  SLICE |    3888 | 
info2:1  608 |   2098018 |    HIGH |  SLICE |    5997 | 
info2:1  609 |   2104018 | DISPOABLE |  SLICE |    1768 | 
info2:1  610 |   2105789 |    HIGH |  SLICE |    4506 | 
info2:1  611 |   2110298 |    HIGH |  SLICE |     406 | 
info2:1  612 |   2110707 |    HIGH |  SLICE |    5134 | 
info2:1  613 |   2115844 | DISPOABLE |  SLICE |    1491 | 
info2:1  614 |   2117338 |    HIGH |  SLICE |    4670 | 
info2:1  615 |   2122011 | DISPOABLE |  SLICE |    1573 | 
info2:1  616 |   2123587 |    HIGH |  SLICE |    3414 | 
info2:1  617 |   2127004 |    HIGH |  SLICE |    3398 | 
info2:1  618 |   2130405 |    HIGH |  SLICE |    3176 | 
info2:1  619 |   2133584 |    HIGH |  SLICE |    3143 | 
info2:1  620 |   2136730 |    HIGH |  SLICE |    3736 | 
info2:1  621 |   2140469 | DISPOABLE |  SLICE |    1567 | 
info2:1  622 |   2142039 |    HIGH |  SLICE |    2717 | 
info2:1  623 |   2144759 |    HIGH |  SLICE |    2400 | 
info2:1  624 |   2147162 | HIGHEST |    SPS |      26 | 
info2:1  625 |   2147191 | HIGHEST |    PPS |       6 | 
info2:1  626 |   2147200 | HIGHEST |    IDR |   10090 | 
info2:1  627 |   2157293 |    HIGH |  SLICE |    1527 | 
info2:1  628 |   2158823 |    HIGH |  SLICE |    2251 | 
info2:1  629 |   2161077 |    HIGH |  SLICE |    2468 | 
info2:1  630 |   2163548 |    HIGH |  SLICE |    3415 | 
info2:1  631 |   2166966 | DISPOABLE |  SLICE |    1254 | 
info2:1  632 |   2168223 |    HIGH |  SLICE |    3683 | 
info2:1  633 |   2171909 | DISPOABLE |  SLICE |    1361 | 
info2:1  634 |   2173273 |    HIGH |  SLICE |    3730 | 
info2:1  635 |   2177006 | DISPOABLE |  SLICE |    1394 | 
info2:1  636 |   2178403 |    HIGH |  SLICE |    2751 | 
info2:1  637 |   2181157 |    HIGH |  SLICE |    2705 | 
info2:1  638 |   2183865 | DISPOABLE |  SLICE |     234 | 
info2:1  639 |   2184102 |    HIGH |  SLICE |    2651 | 
info2:1  640 |   2186756 |    HIGH |  SLICE |    2573 | 
info2:1  641 |   2189332 |    HIGH |  SLICE |    2777 | 
info2:1  642 |   2192112 |    HIGH |  SLICE |    2834 | 
info2:1  643 |   2194949 |    HIGH |  SLICE |    2794 | 
info2:1  644 |   2197746 |    HIGH |  SLICE |    3103 | 
info2:1  645 |   2200852 |    HIGH |  SLICE |    2897 | 
info2:1  646 |   2203752 |    HIGH |  SLICE |    2981 | 
info2:1  647 |   2206736 |    HIGH |  SLICE |    3069 | 
info2:1  648 |   2209808 |    HIGH |  SLICE |    2874 | 
info2:1  649 |   2212685 |    HIGH |  SLICE |    3141 | 
info2:1  650 |   2215829 |    HIGH |  SLICE |    3091 | 
info2:1  651 |   2218923 |    HIGH |  SLICE |    2949 | 
info2:1  652 |   2221875 |    HIGH |  SLICE |    3109 | 
info2:1  653 |   2224987 |    HIGH |  SLICE |    2981 | 
info2:1  654 |   2227971 |    HIGH |  SLICE |    3069 | 
info2:1  655 |   2231043 |    HIGH |  SLICE |    3132 | 
info2:1  656 |   2234178 |    HIGH |  SLICE |    3016 | 
info2:1  657 |   2237197 |    HIGH |  SLICE |    3025 | 
info2:1  658 |   2240225 |    HIGH |  SLICE |    2984 | 
info2:1  659 |   2243212 |    HIGH |  SLICE |    2945 | 
info2:1  660 |   2246160 |    HIGH |  SLICE |    3017 | 
info2:1  661 |   2249180 |    HIGH |  SLICE |    3045 | 
info2:1  662 |   2252228 |    HIGH |  SLICE |    3231 | 
info2:1  663 |   2255462 |    HIGH |  SLICE |     254 | 
info2:1  664 |   2255719 |    HIGH |  SLICE |    2834 | 
info2:1  665 |   2258556 |    HIGH |  SLICE |    2735 | 
info2:1  666 |   2261294 |    HIGH |  SLICE |    2382 | 
    
