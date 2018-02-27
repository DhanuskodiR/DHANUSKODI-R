#include<stdio.h>
void main()
{
int a,b;
printf("enter the before swap values");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap value %d%d",a,b);
}
