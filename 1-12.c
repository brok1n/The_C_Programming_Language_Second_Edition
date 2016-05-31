//
// Created by brok1n on 16-5-24.
//



#include <stdio.h>


/**
 * 编写一个程序,以每行一个单词的形式打印其输入。
 * */
void main()
{

    char ch, preCh;
    while( ( ch = getchar() ) != EOF )
    {
        if( ch == ' ' && preCh == ' ' ) continue;
        if( ch == ' ' )
        {
            putchar('\n');
            preCh = ch;
            continue;
        }
        putchar(ch);
        preCh = ch;
        fflush(stdout);
    }

}