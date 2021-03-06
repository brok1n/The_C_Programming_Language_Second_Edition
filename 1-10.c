//
// Created by brok1n on 16-5-24.
//

#include <stdio.h>

/**
 * 编写一个将输入复制到输出的程序, 并将其中的制表符替换为\t, 把回退符
替换为\b,把反斜杠替按为\\。这样可以将制表符和回退符以可见的方式显示出来。
 * */
void main()
{
    char ch ;

    while( ( ch = getchar() ) != EOF )
    {
        switch( ch )
        {
            case '\t':  //制表符
                putchar('\\');
                putchar('t');
                break;
            case 8: //回退符
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(ch);
                break;
        }
        fflush(stdout);

    }

}