#include <stdio.h>

void main()
{
    int n,i,a[20];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a+i);
        
    }
    printf("the values have the address\n");
    for (i=0;i<n;i++)
    {
        printf("%u\t",a+i);
        printf("%d\n",*(a+i));
    }
}
