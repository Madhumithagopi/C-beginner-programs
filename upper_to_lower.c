//C program to convert uppercase to lowercase string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*s1;
int i,count=0;
printf("Enter the string:");
gets(str);
s1=&str;
 for(i=0;*(s1+i)!='\0';i++)
    {
        if( *(s1+i) >= 65 && *(s1+i) <= 90)
         *(s1+i) = *(s1+i) + 32;
    }
    puts(str);
return 0;
}
