//area of rectangle
#include<stdio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	int l,b;
	float a;
	printf("Enter length and breadth of the rectangle:");
	scanf("%d%d",&l,&b);
	a=l*b;
	printf("\nThe area of the rectangle is:%f",a);
}


