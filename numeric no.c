#include<stdio.h>
void main()
{
int num;
printf("enter the numeric values:",num);
scanf("%d",&num);
if(num != 'a'||'z')
{
  printf("yes,it is numeric");
}
else
{
printf("no,it is not numeric");
}
}
