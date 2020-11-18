//program to perform the operation for complex number
#include<stdio.h>
#include<stdlib.h>
struct complex
{
    float real;
    float imaginary;
} c1,c2,add,sub,mul;
int main()
{
    printf("Enter first complex number");
    scanf("%f%f",&c1.real,&c1.imaginary);
    printf("Enter second complex number");
    scanf("%f%f",&c2.real,&c2.imaginary);
    add.real=c1.real+c2.real;
    sub.real=c1.real-c2.real;
    add.imaginary=c1.imaginary+c2.imaginary;
    sub.imaginary=c1.imaginary-c2.imaginary;
    printf("Complex Number1: %f + %fi\n",c1.real,c1.imaginary);
    printf("Complex Number2: %f + %fi\n",c2.real,c2.imaginary);
    printf("Addition Of Two Complex Numbers : %f + %fi\n",add.real,add.imaginary);
    printf("Subraction Of Two Complex Numbers : %f + %fi\n",sub.real,sub.imaginary);
    return 0;
}
