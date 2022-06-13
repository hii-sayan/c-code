#include<stdio.h>

void main()
{
    int a;
    a = 10;
    printf("the address of a is %u\n", &a);
    printf("the value of a is %d\n", *(&a));
}