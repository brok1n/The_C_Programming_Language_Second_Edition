//
// Created by brok1n on 16-5-24.
//

#include <stdio.h>

/**
 * 验证表达式 getchar() != EOF 的值是 0 还是 1。
 * */
void main()
{
    char ch;

    while( 1 )
    {
        ch = getchar();
        if( ( ch != EOF ) == 1 )
        {
            printf(" ch != eof == 1");
            break;
        }
        else if( ( ch != EOF ) == 0 )
        {
            printf(" ch != eof == 0");
        }
    }

    printf( " while ended" );

}