//C program to count occurrence of a given character in String using pointers
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*s2,ch,*s1;
int i,count=0;
printf("Enter the string:");
gets(str);
s1=&str;
printf("Enter the character:");
scanf("%c",&ch);
s2=&ch;
for(i=0;str[i]!='\0';i++)
{
    if( *(s1+i) == *s2)
        count++;
}
printf("Occurrence of given character:%d",count);
return 0;
}
