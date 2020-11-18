/*Create a structure with the following fields: Name, Designation, Department, Basic salary. Write a program that checks the following constraints and print the results.
a.	if designation is Secretary/additional secretary air travel is allowed
b.	if designation is Joint Secretary/Deputy secretary air travel is allowed if salary is above Rs.20000.
c.	if designation is Under Secretary air travel is allowed only with prior sanction.*/
#include<stdio.h>
#include<stdlib.h>
struct Employee
{
    char name[20];
    char designation[10];
    char dept[20];
    float salary;
} emp[4];
int main()
{
    int i=0,n,S;
    printf("\nEnter Number of Employees:");
    scanf("\n%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter Employee_(%d)'s name:",i+1);
        scanf(" %[^\n]",&emp[i].name);
        printf("\nEnter Employee_(%d)'s designation:",i+1);
        scanf(" %[^\n]",&emp[i].designation);
        printf("\nEnter Employee_(%d)'s dept:",i+1);
        scanf(" %[^\n]",&emp[i].dept);
        printf("\nEnter Employee_(%d)'s salary:",i+1);
        scanf("%f",&emp[i].salary);
        printf("\n-----------------------------------\n");
    }
    for(i=0; i<n; i++)
    {
        printf("\nEmployees name:%s",emp[i].name);
        printf("\nEmployees designation:%s",emp[i].designation);
        printf("\nEmployee's dept:%s",emp[i].dept);
        printf("\nEmployee's salary:%f",emp[i].salary);
        printf("\n---------------------------------");
    }
    for(i=0; i<n; i++)
    {
        if(strcmp(emp[i].designation,"S")==0)
            printf("\nAir travel is allowed for %s",emp[i].name);
        else if(strcmp(emp[i].designation,"AS")==0)
            printf("\nAir travel is allowed for %s",emp[i].name);
        else if(strcmp(emp[i].designation,"JS")==0)
        {
            if(emp[i].salary>=20000 )
                printf("\nAir travel is allowed for %s",emp[i].name);
        }
        else if( strcmp(emp[i].designation,"DS")==0)
        {
            if(emp[i].salary>=20000 )
                printf("\nAir travel is allowed for %s",emp[i].name);
        }
        else
            printf("\nSorry. Your air travel has been denied");
    }
    printf("\n-----------------------------------\n");
    return 0;
}
