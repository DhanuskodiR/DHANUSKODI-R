#include<stdio.h>
void main()
{
    int a,b,c,e,d;
    printf("enter the no.");
    scanf("%d",&a);
    b=(a/100);
    c=((a/10)-(b*10));
    d=(a%10);
    e=(b+c+d);
    printf("%d",e);
}
