//Write a C program to print the following pattern 01 0101 010101 01010101 0101010101 010101010101
#include <stdio.h>
int main()
{
    int i=0,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<i;j++)
    {
        printf("01");
    }printf(" ");
    }

    return 0;
}
