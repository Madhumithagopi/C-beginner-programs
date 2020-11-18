//check if string contains only digits using pointers
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*s2;
int i,count=0,s1;
printf("Enter the string:");
gets(str);
s2=&str;
s1=strlen(str);
for(i=0;str[i]!='\0';i++)
{
    if(isdigit(*(s2+i)))
        count++;
}
if(count==s1)
    printf("The strings contains only digits");
else
     printf("The strings does not contains only digits");
return 0;
}
