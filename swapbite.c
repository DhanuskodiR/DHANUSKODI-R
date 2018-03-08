#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the before swapping ");
    scanf("%d%d",&a,&b);
        a=a^b;
        b=b^a;
        a=a^b;
        printf("\n after swapping %d\t%d",a,b);
}
