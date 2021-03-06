//
// Created by brok1n on 16-5-25.
//


#include <stdio.h>


#define  MAX_LEN 1000

int getLine( char line[], int len );



int charArrToInt( char ch[] )
{
    int result = 0;
    int i = 0;
    while ( ch[i] != '\0' )
    {
        result = result * 10 + ch[i++] - '0';
    }
    return result;
}

int charArrToIntByLen( char ch[], int len )
{
    int result = 0;
    int i;
    for (i = 0; i < len ; ++i)
    {
        result = result * 10 + ch[i] - '0';
    }
    return result;
}


/**
 * 编写一个程序,删除每个输入行末尾的空格及制表符,并删除完全是空格的行。
 * */
void main()
{
    int len, flag;
    char line[MAX_LEN];
    while ( ( len = getLine( line, MAX_LEN ) ) > 0 )
    {
        //printf(" len:%d%s", len, line);
        if( len == 2 && ( line[0] == '\0' || line[0] == '\n' || line[0] == ' ' || line[0] == '\t' ) ) continue;
        //这里应该是 int i = len - 3;
        for (int i = len - 3; i >= 0 ; --i)
        {
            if( line[i] != ' ' && line[i] != '\t' )
            {
                line[++i] = '\n';
                line[++i] = '\0';
                flag = -1;
                break;
            }
            flag = 1;
        }
        if( flag == -1 )
            printf("%s", line);
    }
}

int getLine( char line[], int len )
{
    int ch;
    int i = 0;
    for ( ; i < len - 1 && ( ch = getchar() ) != EOF && ch != '\n'; ++i)
        line[i] = ch;
    if( ch == '\n' )
        line[i++] = ch;
    if( i > 0 )
        line[i++] = '\0';
    return i;
}