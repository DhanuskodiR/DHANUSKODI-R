#include<stdio.h>
#include<string.h>
void main()
{
  char a[30],str;
  int i,n,count=0;
  printf("enter the string\n");
    scanf("%[^\n]",&a);
     for (i = 0;a[i] != '\0';i++)
    {
    if(a[i] == ' ')
    count ++;
    }
    printf("number of words in given string are: %d\n", count + 1);
}
