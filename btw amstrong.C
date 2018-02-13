#include<stdio.h>
void main()
{
int e,b,c,d,a,n,i;
printf("enter the value %d,%d");
scanf("%d%d",&e,&n);
for(i=e;i<=n;i++)
{
a=(i/100);
b=((i/10)-(a*10));
c=(i%10);
d=((a*a*a)+(b*b*b)+(c*c*c));
if(d==i)
{
printf("\n %d is amstrong",d);
}
}
}
