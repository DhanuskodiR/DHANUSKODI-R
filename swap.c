#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf(" before swap %d %d",a,b);
    a=a^b;
    b=b^a;
    a=b^a;
    printf("\nafter swap %d %d",a,b);
    
}
