#include<stdio.h>

int add();
int main()
{
	int a,b,c;
	printf("Enter any two numbers :");
	scanf("%d %d",&a,&b);	
	c=add(a,b);
	printf("The addition is :%d",c);
	
return 0;	
}
int add(int x,int y)
{
	int z;
	z=x+y;
return z;
}
