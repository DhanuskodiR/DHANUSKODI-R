#include<stdio.h>
void main()
{
int i,n,count=1;
scanf("%d",&n);
i=n;
while(i>=10)
{
    i=i/10;
    count++;
}
printf("\n count the no.%d",count);
}
