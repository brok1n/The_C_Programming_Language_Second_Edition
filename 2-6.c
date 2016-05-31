//
// Created by brok1n on 16-5-31.
//


#include <stdio.h>

int setbits(int x, int p, int n, int y);

/**
 * 编写一个函数 setbits(x, p, n, y),该函数返回对 x 执行下列操作后
的结果值:将 x 中从第 p 位开始的 n 个(二进制)位设置为 y 中最右边 n 位的值,x 的其余
各位保持不变。
 * */
void main()
{
    int x = 1234567;
    int p = 6;
    int n = 5;
    int y = 7654321;
    printf("x:%d\np:%d\nn:%d\ny:%d\n", x, p, n, y);
    printf("operation:%d\n", setbits( 1234567, 6, 5, 7654321 ) );
}

int setbits(int x, int p, int n, int y)
{
    return ( y & ( ~( -1 << n ) ) ) | ( x & ( ~( ( ( 1 << n ) - 1 ) << p ) ) );
}