//
// Created by brok1n on 16-5-25.
//

#include <stdio.h>

//根据华摄氏度  获取摄氏度
int getSsd( int hssd );
/**
 * 重新编写 1.2 节中的温度转换程序,使用函数实现温度转换计算。
 * */
void main()
{
    int ssd = 0;    //摄氏度
    int hssd = 0;   //华摄氏度

    int wdMax = 300;    //最大温度
    int setp = 20;  //温度递增步长

    printf("-----------------------------------\n");
    printf("\t\t温度-华氏温度 对照表\n");
    printf("-----------------------------------\n");
    while( hssd <= wdMax )
    {
        ssd = getSsd( hssd );
        printf("华摄氏度:%-6d摄氏度:%-6d\n", hssd, ssd );
        hssd += setp;
    }
    printf("-----------------------------------\n");
    printf("\t\t转换完毕!\n");
    printf("-----------------------------------\n");
}

int getSsd( int hssd )
{
    return 5 * (hssd-32) / 9;
}