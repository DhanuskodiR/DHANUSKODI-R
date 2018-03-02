#include<stdio.h>
#include<math.h>
void main()
{
int  a,b,c;
scanf("%d",&a);
b=sqrt(a);
c=pow(b,2);
if(c==a)
{
printf("\n %d is power of 2",a);
}
else
{
    printf("\n %d is not power of 2",a);
}
}
