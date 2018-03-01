#include<stdio.h>

void main()
{
int n,a=0,b=1,c,i;
printf("enter the fibnoci series:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    c=a+b;
    a=b;
    b=c;
    printf("%d \t",c);
}
}
