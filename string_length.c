//C program to find length of a string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*s1;
int i,count=0;
printf("Enter the string:");
gets(str);
s1=&str;
for(i=1;*(s1+i)!='\0';i++)
{
    if(count<=i)
        count++;
}
printf("Length of string:%d",count+1);
//printf("%d",strlen(str));
return 0;
}
