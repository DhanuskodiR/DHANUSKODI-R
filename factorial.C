#include<stdio.h>
void main()
{
int i,fact=1,n;
printf("enter the no.n");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("enter the no.%d is:%d",n,fact);
}
