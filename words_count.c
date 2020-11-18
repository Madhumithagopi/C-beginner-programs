//C program to count total number of words in a string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*s1;
int i,count=0;
printf("Enter the string:");
gets(str);
s1=&str;
 for (i=0;*(s1+i)!='\0';i++)
    {
        if (*(s1+i)==' ' && *(s1+i+1)!=' ')
            count++;
    }
    printf("Number of Words :%d",count+1);
return 0;
}
