#include<stdio.h>
void main()
{
char a;
printf("enter the no.a");
scanf("%c",&a);
if( (a>='a' && a<='z') || (a>='A' && a<='Z'))
printf("the no.is alphabet");
else
printf("the no.is not alphabet");
}
