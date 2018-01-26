#include<stdio.h>
void main()
{
    int count=0,n;
    printf("enterthe variable n");
    scanf("%d",&n);
    while (n!=0)
    {
        n /= 10;
        ++count;
    }
    printf("Number of digits: %d", count);
}
