#include<stdio.h>
void fact();
int main()
{
	fact();
	return 0;
}
void fact()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int i=1,fact=1;
	while(num>=i)
	{
		fact=i*fact;
		i++;
	}
	printf("\nThe factorial of the number is:%d",fact);
}

