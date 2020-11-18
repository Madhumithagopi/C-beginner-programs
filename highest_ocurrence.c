//print the largest occurrence of character in given string using pointers
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],s[100],*p,*p1;
    int count,i,j,k=0,s1=0,max=0,t;
    printf("Enter the string:");
    gets(str);
    //p=&str;
    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        for(j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            t=i;
        }
    }
    printf("%c",str[t]);
}
