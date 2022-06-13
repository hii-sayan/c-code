#include<stdio.h>

int swap(int *c, int *d)
{
    int tem;
    tem = *c;
    *c = *d;
    *d = tem;
}
void main()
{
    int a,b,tem;
    printf("enter two numbers :\n");
    scanf("%d%d", &a,&b);
    printf("before swaping the valuw of a and b are: %d%d",a,b);
    swap(&a,&b);
    printf("after swaping %d%d", a,b);
}