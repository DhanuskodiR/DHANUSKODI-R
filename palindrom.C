#include<stdio.h>
void main()
{
int a,b,c,d,e;
scanf("%d",&a);
b=a/100;
c=((a/10)-(b*10));
d=(a-(b*100)-(c*10));
e=(d*100+c*10+b);
printf("enter the no.e");
if(a==e)
printf("palindrom");
else
printf("not palindrom");
}
