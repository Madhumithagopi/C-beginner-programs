/*Create a structure for a customer. The structure should include Account number, name, Address, Date of Birth, and Balance.
Perform the following operations.
a.	Account creation
b.	Balance enquiry (Input Acc No, and display all details of the particular customer)
c.	Amount Deposit
d.	Amount withdrawal (Minimum Balance of Rs.500 should be maintained)*/
#include<stdio.h>
#include<stdlib.h>
struct bank
{
    char name[100],add[100],dob[100],acc_no[100];
    float bal;
} emp[5];
int main()
{
    int n;
    struct bank *ptr=NULL;
    int i,flag=1,flag1=1;
    char acc[100],acc1[100];
    float dep,bala;
    printf("Enter the number of employees:");
    scanf("\n%d",&n);
    ptr=emp;
    for(i=0; i<n; i++)
    {
        printf("\nEnter employee_(%d)'s Account Number:",i+1);
        scanf(" %[^\n]",ptr->acc_no);
        printf("\nEnter Employee_(%d)'s name:",i+1);
        scanf(" %[^\n]",&emp[i].name);
        printf("\nEnter Employee_(%d)'s address:",i+1);
        scanf(" %[^\n]",&emp[i].add);
        printf("\nEnter Employee_(%d)'s dob:",i+1);
        scanf(" %[^\n]",&emp[i].dob);
        printf("\nEnter Employee_(%d)'s balance:",i+1);
        scanf("%f",&emp[i].bal);
        printf("\n-----------------------------------\n");

    }
    ptr=emp;
    for(i=0; i<n; i++)
    {
        printf("\nEmployees name:%s",ptr->acc_no);
        printf("\nEmployees name:%s",emp[i].name);
        printf("\nEmployees address:%s",emp[i].add);
        printf("\nEmployee's dob:%s",emp[i].dob);
        printf("\nEmployee's Balance:%f",emp[i].bal);
        printf("\n---------------------------------");
        ptr++;
    }
    printf("Enter the account_number to get details:");
    scanf("%s",acc);
    for(i=0; i<n; i++)
    {
        if(strcmp(emp[i].acc_no,acc)==0)
        {
            printf("\nEmployees name:%s",emp[i].acc_no);
            printf("\nEmployees name:%s",emp[i].name);
            printf("\nEmployees address:%s",emp[i].add);
            printf("\nEmployee's dob:%s",emp[i].dob);
            printf("\nEmployee's Balance:%f",emp[i].bal);
            printf("\n---------------------------------");
        }
        else
            flag=1;
    }
    if(flag==1)
    {
        printf("No such account\n");
    }
    printf("Enter the account_number to get deposit:");
    scanf("%s",acc1);
    printf("Enter the deposit amount:");
    scanf("%f",&dep);
    for(i=0; i<n; i++)
    {
        if(strcmp(emp[i].acc_no,acc)==0)
        {
            printf("\nEmployees name:%s",emp[i].acc_no);
            printf("\nEmployees name:%s",emp[i].name);
            printf("\nEmployees address:%s",emp[i].add);
            printf("\nEmployee's dob:%s",emp[i].dob);
            bala=emp[i].bal+dep;
            printf("\nEmployee's Balance:%f",bala);
            printf("\n---------------------------------");
        }
        else
            flag1=1;
    }
    if(flag1==1)
    {
        printf("No such account\n");
    }
    return 0;
}
