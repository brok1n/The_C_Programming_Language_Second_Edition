//
// Created by brok1n on 16-5-27.
//

#include <stdio.h>

unsigned int getInt();

void main()
{
    printf("%s", "看完后面的章节。再回来写这几道题。");


    unsigned int ar[10];
    //ar[0] = getInt();
    fflush(stdout);
    unsigned int aa[] = {getInt(), getInt()};

    printf("%u\n", aa[0]);

}

unsigned int getInt()
{
//    unsigned int i = 0;
//    while (i != 0xFFFFFFFE)
//        ++i;
    return 0xFFFFFFFE;
}