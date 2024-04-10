#include<stdio.h>
void vol();
int main()
{
	vol();
	return 0;
}
void vol()
{
	int r,h;
	float v;
	printf("Enter the radius and height of cylinder:");
	scanf("%d%d",&r,&h);
	v=3.14*r*r*h;
	printf("Volume of cylinder is:%f",v);
}
