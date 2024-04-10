//area of cylinder
#include<stdio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	int r,h;
	float a;
	printf("Enter radius and height of the cylinder:");
	scanf("%d %d",&r,&h);
	a=2*3.14*(r+h);
	printf("The area of the cylinder is:%f",a);
}


