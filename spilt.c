#include<stdio.h>

void main()  
{
    int a,b,c,d;
    printf("enter the no.");
    scanf("%d",&a);
    b=(a/100);
    c=((a/10)-(b*10));
    d=(a%10);
    printf("\n %d %d %d\t",b,c,d);
}
