//
// Created by brok1n on 16-4-29.
//


#include "stdio.h"

int strlen( char [] );

int main( void )
{

    int i, size;
    char c, line[256];

    for( i = 0; i < 256 -1 && ( c = getchar() ) != 'q' && c != EOF; ++i )
    {
        line[i] = c;
    }
    line[i] = '\0';

    size = strlen( line );

    printf("char array lenght is %d  index is %d", size, i );

    return 0;
}

int strlen( char c[] )
{
    int i;
    i = 0;

    while( c[i] != '\0')
        i++;
    return i;
}