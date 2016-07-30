//
// Created by brok1n on 16-5-31.
//


#include <stdio.h>

int invert(int x, int p, int n);
int invert2(int x, int p, int n);
/**
 * 编写一个函数 invert(x, p, n),该函数返回对 x 执行下列操作后的结
果值:将 x 中从第 p 位开始的 n 个(二进制)位求反(即,1 变成 0,0 变成 1)
,x 的其余各位保持不变。
 * */
void main()
{
    int x = 7654321;
    int p = 6;
    int n = 3;
    printf("x:%d\np:%d\nn:%d\n", x, p, n);
    printf("operation:%d, %d\n", invert( x, p, n ), invert2( x, p, n ) );
}

int invert(int x, int p, int n)
{
    return ( ( ( 1 << n ) - 1 ) << p ) ^ x;
}

int invert2(int x, int p, int n)
{
    unsigned int tmp1 = ( 1 << n) - 1;  //00000000000111111
    unsigned int tmp2 = x >> p;         //
    unsigned int tmp3 = ( tmp1 & ~( tmp1 & tmp2 ) ) << p;
    unsigned int tmp4 = ~( tmp1 << p );
    unsigned int tmp5 = x & tmp4;
    return tmp3 | tmp5;
}