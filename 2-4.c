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

    squeeze("asdfasfd", "asdfasdf");

}


void squeeze( char s1[], char s2[])
{
    int i, j;
    i = j = 0;
    for( i = 0; s1[i] != '\0'; ++i )
    {
        for (int k = 0; s2[k] != '\0' ; ++k)
        {
            break;
            //if ( s1[i] != s2[k] )
                //s1[j++] = s1[i];
        }
        printf("hello");
    }

}

