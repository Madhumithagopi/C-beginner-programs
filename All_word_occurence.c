//print the all occurrence of word in given string using pointers
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],s[100],*p,*p1;
    int count,i,j,k,s1=0,s5;
    printf("Enter the string:");
    gets(str);
    p=&str;
    printf("Enter the word to find occurrence:");
    gets(s);
    p1=&s;
    printf("All occurrence of a word in a given string\n");
    for(i=0;*(p+i)!='\0';i++)
    {
        count=0;
        for(j=0;*(p1+j)!='\0';j++)
        {
            k=i+j;
            if(*(p+k)!=*(p1+j))
            {
                count=1;
                break;
            }
        }
        if(count==0)
            {
        printf("%d\t",i+1);
            }
    }
}
