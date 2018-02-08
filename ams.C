#include<stdio.h>
void main()
{
int e=371,b,c,d,a;
printf("enter the value %d");
scanf("%d%d%d",&e);
a=(e/100);
b=((e/10)-(a*10));
c=(e%10);
d=((a*100)+(b*10)+(c));
if(d==e)
printf("\n %d is amstrong",d);
else
printf("\n %d is not amstrong",d);
}
