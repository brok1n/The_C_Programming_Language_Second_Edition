//
// Created by brok1n on 16-4-28.
//


#include "stdio.h"

main()
{
    char c;
    int len;
    char line[1024];

    for( len = 0; len < 1024 && (c = getchar()) && c != 'q'; ++len )
    {
        line[len] = c;
    }

    if( c == 'q')
    {
        printf("程序正常结束!");
    }
    line[len] = '\0';

    printf( "line is \n %s", line );


}