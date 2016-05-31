//
// Created by brok1n on 16-5-25.
//


#include <stdio.h>

#define MAX_LEN 1000

int getLine( char line[], int maxLen );
int copy( char to[], char from[]);

/**
 * 修改打印最长文本行的程序的主程序 main,使之可以打印任意长度的输入
行的长度,并尽可能多地打印文本。
 * */
void main()
{
    int len = 0;
    int max = 0;
    char line[MAX_LEN];
    char longLine[MAX_LEN];

    while ( ( len = getLine( line, MAX_LEN )) != 0)
    {
        if( len > max )
        {
            max = len;
            copy( longLine, line );
        }
    }

    if( max > 0 )
    {

        printf("max line length:%d\t:%s", max, longLine);
    }


}

int getLine( char line[], int maxLen )
{
    int i;
    char ch;

    for ( i = 0;  ( ch = getchar() ) != EOF && ch != '\n' && ch != '\r' ; ++ i)
    {
        if( i < maxLen - 1 )
        {
            line[i] = ch;
        }
    }

    if( i < maxLen - 1 && ch == '\n' )
    {
        line[i] = ch;
        ++i;
    }
    line[i] = '\0';
    return i;
}


int copy( char to[], char from[])
{
    int i = 0;
    while( ( to[i] = from[i] ) != '\0' )
    {
        i++;
    }
    return i;
}