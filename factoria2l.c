#include<stdio.h>
void main()
{
    int a=1,i,n;
   printf("enter the no.");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       a=a*i;
       
   }
   printf("%d",a);
}
