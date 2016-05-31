//
// Created by brok1n on 16-5-25.
//


#include <stdio.h>


/**
 * 编写一个程序,打印输入中各个字符出现频度的直方图。
 * */
void main()
{
    char ch;
    char cList[128];
    int i, j;
    for ( i = 0; i < 128; ++i ) {
        cList[i] = 0;
    }

    while( ( ch = getchar() ) != EOF )
    {
        cList[ch] += 1;
    }

    for ( i = 0;  i < 128; ++ i) {
        printf("%3c : %-6d:", i, cList[i]);
        for ( j = 0; j < cList[i]; ++j) {
            putchar('=');
        }
        putchar('\n');
    }

}