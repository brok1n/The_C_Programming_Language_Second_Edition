//
// Created by brok1n on 16-5-27.
//


#include <stdio.h>


void squeeze( char s1[], char s2[]);

/**
 * squeeze(s1, s2),将字符串 s1 中任何与字符串 s2 中字符匹配的字符都删除。
 * */
void main()
{
    char str1[] = "123456789";
    char str2[] = "qwer1tyuio9pasdfghjklzxcv5bnm,.";

    printf( "%s\n", str1 );
    squeeze(str1, str2);
    printf( "%s\n", str1 );
}

void squeeze( char s1[], char s2[])
{
    int i, j, k;
    i = j = k = 0;
    for( i = 0; s1[i] != '\0'; ++i )
    {
        for ( k = 0; s2[k] != '\0' ; ++k)
            if( s1[i] == s2[k] )
                break;

        if( s2[k] == '\0' )
            s1[j++] = s1[i];
    }
    s1[j++] = '\0';
}

