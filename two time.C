#include<stdio.h>
void main()
{
int a,b,c,d,e,f,g,h,i;
scanf("%d%d",&a,&b);
e=(a*60)+b;
scanf("%d%d",&c,&d);
f=(c*60)+d;
g=(e-f);
h=(g/60);
i=(g%60);
printf("%d hours %dminutes",h,i);
}
