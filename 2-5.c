//
// Created by brok1n on 16-5-31.
//


#include <stdio.h>

int any( char s1[], char s2[] );

/**
 * 编写函数 any(s1, s2),将字符串 s2 中的任一字符在字符串 s1 中第一次
出现的位置作为结果返回。 如果 s1 中不包含 s2 中的字符, 则返回-1。
(标准库函数 strpbrk具有同样的功能,但它返回的是指向该位置的指针。)
 * */
void main()
{
    char str1[] = "123456789";
    char str2[] = "qwertyuiopasdfghjklzxcvbnm7";
    printf("s1:%s\n", str1);
    printf("s2:%s\n", str2);
    int index = any( str1, str2);
    printf("index:%d\n", index);
}

int any( char s1[], char s2[] )
{
    int i, j, n;
    i = j = n = 0;
    for ( i = 0; s1[i] != '\0'; ++i)
        for ( j = 0;  s2[j] != '\0'; ++ j)
            if( s1[i] == s2[j] )
                return i;
    return -1;
}