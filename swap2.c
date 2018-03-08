#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the before swapping ");
    scanf("%d%d",&a,&b);
        c=a;
        a=b;
        b=c;
        printf("\n after swapping %d\t%d",a,b);
}
