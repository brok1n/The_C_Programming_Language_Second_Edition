//
// Created by brok1n on 16-5-27.
//

#include <stdio.h>

int htoi( char hexStr[] );

/**
 * 编写函数 htoi(s),把由十六进制数字组成的字符串(包含可选的前缀 0x
或 0X)转换为与之等价的整型值。字符串中允许包含的数字包括:0~9、a~f 以及 A~F。
 * */
void main()
{
    char numStr[] = "0xFFEE00";
    int num = htoi( numStr );
    printf("%s\n", numStr);
    printf("%d\n", num);
}

int htoi( char hexStr[] )
{
    int x = 0;
    int i = 0;
    char c;
    if( hexStr[0] == '0' && ( hexStr[1] == 'X' || hexStr[1] == 'x') )
        i = 2;//有前缀

    while ((c = hexStr[i++]) != '\0') {
        if (c >= '0' && c <= '9') {
            x = 16 * x + c - '0';
        } else if (c >= 'A' && c <= 'F') {
            x = 16 * x + c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            x = 16 * x + c - 'a' + 10;
        } else {
            break;
        }
    }

    return x;

}