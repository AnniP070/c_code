#include<stdio.h>
float area();
int main(){
	float a=area();
	printf("Area of Circle is:%f",a);
}
float area(){
	float res,r;
	printf("Enter Radius of Circle:");
	scanf("%f",&r);
	res=3.14*r*r;
	return res;
}
