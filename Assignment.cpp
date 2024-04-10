#include<stdio.h>
int main(){
	char name[10];
	printf("Name of employee:\n ");
	scanf("%s",name);
	int sal,hra,ta,tot_sal,ptax,gross_sal;
	printf("Enter a Salary:");
	scanf("%d",&sal);
	hra=sal/10;
	printf("\nHra is:%d",hra);
	ta=sal/20;
	printf("\nTA is:%d",ta);
	tot_sal=sal+sal/10+sal/20;
	printf("\nTotal_Salary is:%d",tot_sal);
	ptax=tot_sal/50;
	printf("\nProfessional Tax is:%d",ptax);
	gross_sal=tot_sal-tot_sal/50;
	printf("\nGross_salary is:%d",gross_sal);
	return 0;
}
