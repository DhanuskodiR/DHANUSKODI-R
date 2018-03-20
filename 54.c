#include<stdio.h>
 
void main()
{
 int a;
 printf("enter the no.");
 scanf("%d",&a);
 if(a%2==0)
 {
     printf("\n %d",a);
 }
 else
 {
     a=a-1;
     printf("\n %d",a);
 }
}
