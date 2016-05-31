//
// Created by brok1n on 16-5-25.
//


#include <stdio.h>

#define MAX_LEN 1000

int getLine( char line[], int maxLen );


/**
 * 编写一个程序,打印长度大于 80 个字符的所有输入行。
 * */
void main()
{
    int len = 0;
    char line[MAX_LEN];

    while ( ( len = getLine( line, MAX_LEN ) ) > 0 )
    {
        if( len > 80 )
        {
            printf("line length:%d\t:%s\n", len, line);
        }
    }

}


int getLine( char line[], int maxLen )
{
    char ch ;
    int i;
    for (i = 0; i < maxLen - 1 && ( ch = getchar() ) != EOF && ch != '\n'; ++i)
    {
        line[i] = ch;
    }
    if( ch == '\n' )
    {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}
