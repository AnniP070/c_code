/*Write a program that uses functions to perform the following operations:
a) Reading a complex Number
b) Writing a complex number
c) Addition of two complex numbers
d) Multiplication of two complex numbers.*/
#include<stdio.h>
struct complex_no
{
	int real;
	int imaginary;
}a,b,c;
int main()
{
	int x;

printf("1.Reading a complex Number\n2.Writing a complex number\n3.Addition of two complex numbers\n4.Multiplication of two complex numbers");
printf("\nEnter your choice:");
scanf("%d",&x);
switch(x)
{
	case 1: 
	printf("Enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("Enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	break;
	
	case 2:
	printf("Enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("Enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	printf("The complex number is:%d+%di",a.real,a.imaginary);
	break;
		
	case 3:
	printf("Enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("Enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	printf("The complex number is:%d+%di",a.real,a.imaginary);
	printf("\nEnter the real part of the second number: ");
	scanf("%d",&b.real);
	printf("Enter the imaginary part of the second number: ");
	scanf("%d",&b.imaginary);
	printf("The complex number is:%d+%di",b.real,b.imaginary);
	
	c.real=a.real+b.real;
	c.imaginary=a.imaginary+b.imaginary;
		
	printf("\nThe addition of the two numbers is: %d+%di",c.real,c.imaginary);
	break;
	
	case 4:
	printf("Enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("Enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	printf("The complex number is:%d+%di",a.real,a.imaginary);
	printf("\nEnter the real part of the second number: ");
	scanf("%d",&b.real);
	printf("Enter the imaginary part of the second number: ");
	scanf("%d",&b.imaginary);
	printf("\nThe complex number is:%d+%di",a.real,a.imaginary);
	c.real=(a.real*b.real-a.imaginary*b.imaginary);
	c.imaginary=(a.real*b.imaginary+b.real*a.imaginary);
		
	printf("The multiplication of the two numbers is: %d+%di",c.real,c.imaginary);
	break;
}
return 0;	
}

