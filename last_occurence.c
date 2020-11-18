//C program to find last occurrence of a character in a given string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch,*s1,*s2;
    int i,pos,slen;
    printf("Enter the string:");
    gets(str);
    slen=strlen(str);
    s1=&str;
    printf("Enter the character:");
    scanf("%c",&ch);
    s2=&ch;
    for(i=0; *(s1+i)!='\0'; i++)
    {
        if(*(s1+i) == *s2)
        {
            if(i<=slen)
                pos=i;
        }
    }
    printf("Last occurrence of a character in a given string:%d",pos+1);
    return 0;
}
