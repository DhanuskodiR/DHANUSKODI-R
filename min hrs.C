#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the minutes");
scanf("%d",&a);
b=(a/60);
c=a-(b*60);
printf("\n %d hours %d minutes",b,c);
}
