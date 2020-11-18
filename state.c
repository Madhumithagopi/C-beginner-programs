/*Write a program to accept records of different states using array of structures.
The structure should contain char state, population, literacy rate and income.
Display the state whose literacy rate is highest and whose income is highest.*/
#include<stdio.h>
#include<stdlib.h>
struct bank
{
    char stat[100];
    float lit,in,pop;
} emp[5];
int main()
{
    int n,i,maxlit,maxin;
    printf("Enter the number:");
    scanf("\n%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter state:",i+1);
        scanf("%s",emp[i].stat);
        printf("\nEnter population:",i+1);
        scanf("%f",&emp[i].pop);
        printf("\nEnter Literacy rate:",i+1);
        scanf("%f",&emp[i].lit);
        printf("\nEnter Income:",i+1);
        scanf("%f",&emp[i].in);
        printf("\n-----------------------------------\n");
    }
    for(i=0; i<n; i++)
    {
        printf("\nState:%s",emp[i].stat);
        printf("\nPopulation:%f",emp[i].pop);
        printf("\nLiteracy:%f",emp[i].lit);
        printf("\nIncome:%f",emp[i].in);
        printf("\n---------------------------------");
    }
    maxlit=emp[0].lit;
    printf("High Literacy Rate\n");
    for(i=1; i<n; i++)
    {
        if(maxlit<emp[i].lit)
        {
    maxlit=emp[i].lit;
        }
    }
    for(i=0; i<n; i++)
    {
        if(emp[i].lit==maxlit)
        {
            printf("\nState:%s",emp[i].stat);
        printf("\nPopulation:%f",emp[i].pop);
        printf("\nLiteracy:%f",emp[i].lit);
        printf("\nIncome:%f",emp[i].in);
        printf("\n---------------------------------");
        }
    }
    printf("High Income\n");
      maxin=emp[0].in;
    for(i=1; i<n; i++)
    {
       if(maxin<emp[i].in)
        {
    maxin=emp[i].in;
        }
    }
    for(i=0; i<n; i++)
    {
        if(emp[i].in==maxin)
        {
            printf("\nState:%s",emp[i].stat);
        printf("\nPopulation:%f",emp[i].pop);
        printf("\nLiteracy:%f",emp[i].lit);
        printf("\nIncome:%f",emp[i].in);
        printf("\n---------------------------------");
        }
    }
    return 0;
}
