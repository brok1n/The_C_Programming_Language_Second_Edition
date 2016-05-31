//
// Created by brok1n on 16-5-27.
//


#include <stdio.h>

#define  MAX_LEN 1000

int reverse( char str[]);

int getLine( char line[], int len );

/**
 * 编写函数 reverse(s),将字符串 s 中的字符顺序颠倒过来。使用该函数
编写一个程序,每次颠倒一个输入行中的字符顺序。
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
        {
            reverse(line);
            printf("%s", line);
        }

    }

}

int reverse( char str[])
{
    int len, i;
    len = i = 0;
    while( str[len++] != '\0' );
    for (i = 0; i < (len - 2) / 2; ++i) {
        char tmp = str[i];
        str[i] = str[len - 2 - i];
        str[len - 2 - i] = tmp;
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