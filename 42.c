#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    int n1,n2;
    printf("enter the two string");
    scanf("%s%s",&str1,&str2);
    n1=strlen(str1);
    n2=strlen(str2);
        if(n1>n2)
        {
        printf("\n %s",str1);
        }
        else if(n2>n1)
        {
            printf("\n %s",str2);
        }
        else
        {
        printf("\n %s",str2);
            }
        }
    
