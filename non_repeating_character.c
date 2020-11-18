//print the first non-repeating characters from string using pointers
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],dup,*s1;
int i,j,count=0;
printf("Enter the string:");
gets(str);
s1=&str;
for(i=0;str[i]!='\0';i++)
{
    for(j=i+1;str[j]!='\0';j++)
    {
        if(*(s1+i)==*(s1+j))
        {
            i++;
            break;

        }
        if(*(s1+i)!=*(s1+j))
        {
            dup=*(s1+i);
            count++;
            goto label;
        }
    }
}
label:
if(count==0)
    printf("All characters in string are repeating");
else
    printf("%c",dup);
return 0;
}
