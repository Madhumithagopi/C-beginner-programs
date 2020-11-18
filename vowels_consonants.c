//C program to count total number of vowels and consonants in a string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],*s1;
    int a=0,e=0,i=0,o=0,u=0,cons=0,i1=0,word=0,st,count=0;
    printf("Enter the string:");
    gets(str);
    s1=&str;
    while(*(s1+i)!='\0')
    {
        if(*(s1+i)=='a')
        {
            a++;
        }
        else if(*(s1+i)=='e')
        {
            e++;
        }
        else if(*(s1+i)=='i')
        {
            i1++;
        }
        else if(*(s1+i)=='o')
        {
            o++;
        }
        else if(*(s1+i)=='u')
        {
            u++;
        }
        else
        {
            cons++;
        }
        ++i;
    }
    printf("Vowels:\n");
    printf("a\te\ti\to\tu\n");
    printf("%d\t%d\t%d\t%d\t%d\n",a,e,i1,o,u);
    printf("Number of consonants :%d",cons);
    return 0;
}
