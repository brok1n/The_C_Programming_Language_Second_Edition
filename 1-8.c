//
// Created by brok1n on 16-5-23.
//

#include <stdio.h>

/**
 * 编写一个统计空格、制表符与换行符个数的程序。
 * 修改版
 * */
void main()
{
    int byteSize = 0;   //字节数
    int spaceSize = 0;  //空格符数
    int wrapSize = 0;   //换行符数
    int tabs = 0;       //制表符数
    char ch;

    while( ( ch = getchar() ) != EOF )
    {
        byteSize ++; //字节数
        switch ( ch )
        {
            case ' ': //空格数
                spaceSize ++;
                break;
            case '\n': //换行数
                wrapSize ++;
                break;
            case '\t': //制表数
                tabs ++;
                break;
        }
    }
    printf("字节数:%d\t空格数:%d\t换行数:%d\t制表数:%d\t\n", byteSize, spaceSize, wrapSize, tabs);
}




/**
 * 编写一个统计空格、制表符与换行符个数的程序。
 * */
void man_old()
{


    char str[2048];
    char c;
    int  i = 0;
    while ( i <= 2046 && ( c = getchar() ) != EOF )
    {
        str[i++] = c;
    }
    str[i] = '\0';

    //数据收集完毕
    //开始计算

    int byteSize = 0;   //字节数
    int spaceSize = 0;  //空格符数
    int wrapSize = 0;   //换行符数
    int tabs = 0;       //制表符数

    while ( str[byteSize] != '\0' )
    {
        if( str[byteSize] == ' '  ) spaceSize++;
        if( str[byteSize] == '\t' ) tabs++;
        if( str[byteSize] == '\n' ) wrapSize++;
        byteSize++;
    }

    printf("字节数:%d 空格数:%d 制表符:%d 换行符:%d \n", byteSize, spaceSize, tabs, wrapSize);

}
