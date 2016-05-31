//
// Created by brok1n on 16-4-28.
//


#include "stdio.h"

#define STR_MAX_LEN 1024

int main( void )
{
    int i;
    char c;
    char inp[STR_MAX_LEN];
    char out[STR_MAX_LEN];

    for( i = 0; i < STR_MAX_LEN - 1 && (c = getchar()) != '\n'; ++i )
    {
        inp[i] = c;
    }
    inp[i] = '\0';
    printf("输入的数据是\n %s", inp );
    printf("开始将输入数据复制到输出数据");

    for( i = 0; i < STR_MAX_LEN -1;  )
    {
        if( c == ' ' )
        {
            c = inp[i];
            if( c == ' ')
            {
                printf("合并了一个空格");
                continue;
            }
        }
        c = inp[i];

        out[i] = c;
        ++i;
    }
    out[i] = '\0';
    printf( "输出数据\n %s", out);



    getchar();

    return 0;
}