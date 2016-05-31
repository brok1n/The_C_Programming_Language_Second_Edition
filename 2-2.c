//
// Created by brok1n on 16-5-27.
//

#include <stdio.h>


int toLower( int c );
int toUpper( int c );

/**
 * 在不使用运算符&&或||的条件下编写一个与上面的 for 循环语句等价的循环语句。
 * for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
       s[i] = c;
 * */
void main()
{
    int i, lim;
    i = 0;
    lim = 1024;
    char c;
    char s[lim];
    for (i=0; i<lim-1; ++i)
    {
        if( ( c = getchar() ) != '\n' )
            if( c != EOF )
                s[i] = c;
    }
    printf("%s\n", s);

    char CC = 'C';
    char cc = toLower( CC );
    printf("%c\n", cc);

    char dd = 'd';
    char DD = toUpper(dd);
    printf("%c\n", DD);
}


int toLower( int c )
{
    if( c >= 'A' && c <= 'Z' )
        return c + 32;
    return c;
}

int toUpper( int c )
{
    if( c >= 'a' && c <= 'z' )
        return c - 32;
    return c;
}


