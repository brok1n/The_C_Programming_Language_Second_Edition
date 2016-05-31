//
// Created by brok1n on 16-5-24.
//

#include <stdio.h>
#include <ctype.h>


/**
 * 编写一个程序,打印输入中单词长度的直方图。水平方向的直方图比较容易
绘制,垂直方向的直方图则要困难些。
 * */
void main()
{
    char ch, preCh;
    int len = 0;

    while( ( ch = getchar() ) != EOF )
    {
        if( isblank(ch) || ch == '\n' || ch == '\r' )
        {
            putchar('\n');
            continue;
        }
        putchar('=');
        fflush(stdout);
    }

}