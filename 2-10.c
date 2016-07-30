//
// Created by brok1n on 16-6-1.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <errno.h>
//#include <sys/time.h>


//# define LOG(fmt, args...) \
//    do { \
//        int se = errno; \
//        struct timeval tv; \
//        struct timezone tz; \
//        gettimeofday(&tv, &tz); \
//        tv.tv_sec -= tz.tz_minuteswest * 60; \
//        int s = tv.tv_sec % 60; \
//        int m = tv.tv_sec / 60 % 60; \
//        int h = tv.tv_sec / 3600 % 24; \
//        printf( "%02d:%02d:%02d.%06lu: "fmt"\n", h, m, s, tv.tv_usec, ## args); \
//        errno = se; \
//    } while (0)
//
//
//# define LOG_DATA(datap, datalen, fmt, args...) \
//    do { \
//        int se = errno; \
//        char __str__[(datalen) * 3 + 1]; \
//        __str__[0] = '\0'; \
//        const void *__dptr__; \
//        size_t __i__, __n__; \
//        for (__dptr__ = (datap), __i__ = 0; __i__ < (size_t)(datalen); ++__i__) { \
//            __n__ = 3 * __i__; \
//            snprintf(__str__ + __n__, sizeof(__str__) - __n__, "%02hhX ", *(unsigned char *) __dptr__++); \
//        } \
//        LOG(fmt": %s", ## args, __str__); \
//        errno = se; \
//    } while (0)






void lower( char str[] );
char* encode( char *str, char *key );
char* decode( char *str, char *key );
/**
 * 重新编写将大写字母转换为小写字母的函数 lower, 并用条件表达式替代其中的 if-else 结构。
 * */
void main()
{
    char *str = "jacklist你好0./*-+";
    char *key = "hel这是中文keylo";

    printf("str is: %s\n", str);
    printf("key is: %s\n", key);
    int len = strlen( str );

    //LOG_DATA( str, len, "before encode: ");

    char *encStr = encode( str, key );
    printf("after encode: %s\n", encStr );
    //LOG_DATA( encStr, len, "fater encode: ");

    char *decStr = decode( encStr, key );
    printf("after decode: %s\n", decStr );

}


char* encode( char *str, char *key )
{
    char* tmp = malloc( strlen(str) +1 );
    char* result = tmp;
    while( *str )
    {
        char ch = *str++;
        char *tmpkey = key;
        while( *tmpkey )
        {
            char k = *tmpkey++;
            ch = ch + k;
        }
        *tmp++=ch;
    }
    *tmp = '\0';
    return result;
}

char* decode( char *str, char *key )
{
    char* tmp = malloc( strlen(str) +1 );
    char* result = tmp;
    while( *str )
    {
        char ch = *str++;
        char *tmpkey = key;
        while( *tmpkey )
        {
            char k = *tmpkey++;
            ch = ch - k;
        }
        *tmp++=ch;
    }
    *tmp = '\0';
    return result;
}


void lower( char str[] )
{
    int i = 0;
    while ( str[i] != '\0' )
        str[i] = str[i] >= 'A' || str[i] <= 'z' ? str[i] + 32 : str[i];
}

