//check for anagrams of string using pointer
#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100],*st1,*st2;
int i,j,count=0,s1,s2;
printf("Enter the 2 strings:");
gets(str1);
gets(str2);
st1=&str1;
st2=&str2;
s1=strlen(str1);
s2=strlen(str2);
if(s1==s2)
{
   for(i=0;str1[i]!='\0';i++)
   {
       for(j=0;str2[j]!='\0';j++)
       {
         if(*(st1+i) == *(st2+j))
       {
           *(st2+j)='0';
           count++;
           break;
       }
       }
   }
}
else
{
    printf("Strings are not anagrams");
    goto exit;
}
if(count==s1)
    printf("Two strings are Anagrams");
else
    printf("Two strings are not Anagrams");
exit:
return 0;
}
