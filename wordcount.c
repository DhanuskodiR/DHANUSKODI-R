#include<stdio.h>
#include<string.h>

void main()  
{
    char a[500];
    int count=0,i;
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
            count++;
        }
    }
    printf("count %d",count);
}