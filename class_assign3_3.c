//Write a c program using user define function example with no argument and no return type
//accept name,rollno and marks
#include<stdio.h>
void info(){
	char name[50];
	float marks;
	int rollno;
	long int mobileno;
	printf("Enter your name:");
	scanf("%s",name);
	printf("Enter your rollno:");
	scanf("%d",&rollno);
	printf("Enter your mobileno:");
	scanf("%ld",&mobileno);
	printf("Enter your marks:");
	scanf("%f",&marks);
	printf("name:%s \nrollno%d \nmobileno:%ld \nmarks:%f",name,rollno,mobileno,marks);
}
int main()
{
	info();
}
