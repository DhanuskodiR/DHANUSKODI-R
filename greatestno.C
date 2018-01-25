#include<stdio.h>
void main()
{
int num1,num2,num3;
printf("enter the number:");
scanf("%d%d%d",&num1,&num2,&num3);
printf("num1=%d\num2 =%d\num3 = %d\n",num1,num2,num3);
if(num1>num2)
{
if(num1>num3)
{
printf("num1 is greatest no. among three");
}
else
 {
 printf("num3 is greatest no. among three");
 }
}
 elseif(num2>num1)
 {
  if(num2>num3)
 {
 printf("num2 is greatest no. among three");
 }
 else
{
printf("num3 is greatest no. among three");
}
}
}
