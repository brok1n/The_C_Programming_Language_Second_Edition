//
// Created by brok1n on 16-4-28.
//

#include "stdio.h"

#define MAX_STR_LEN 1024

main()
{
    int i, spaceNum, tabNum, lfNUm;
    char c;
    char str[ MAX_STR_LEN ];

    for( i = 0; i < MAX_STR_LEN - 1 && (c = getchar()) != 'q'; ++i )
    {
        str[i] = c;
        if( c == '\n' )
            lfNUm ++;
        if( c == '\t' )
            tabNum ++;
        if( c == ' ' )
            spaceNum ++;
    }

    str[i] = '\0';

    printf( "输入的回车有: %d 个", lfNUm );
    printf( "输入的Tab有: %d 个", tabNum );
    printf( "输入的空格有: %d 个", spaceNum );

    printf( "\n\n");

    printf("%s", str);

}