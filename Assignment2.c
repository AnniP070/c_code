#include<stdio.h>
int main(){
	char name[20];
	printf("Student name:");
	scanf("%s",name);
	int S1,S2,S3,S4,S5,tot;3
	printf("Enter marks of first Subject:");
	scanf("%d",&S1);
	printf("Enter marks of second Subject:");
	scanf("%d",&S2);
	printf("Enter marks of third Subject:");
	scanf("%d",&S3);
	printf("Enter marks of fourth Subject:");
	scanf("%d",&S4);
	printf("Enter marks of fifth Subject:");
	scanf("%d",&S5);
	tot=(S1+S2+S3+S4+S5)/5;
	printf("The aggregate score obtained by student is:%d\n",tot);
	if (S1>=40 && S2>=40 && S3>=40 && S4>=40 && S5>=40){
	if(tot>=75){
		printf("The grade is distinction");
	}
	else if(tot>=60 && tot<75){
		printf("The grade is First class");
	}
	else if(tot>=50 && tot<60){
			printf("The grade is second class");
	}
	else if(tot>=40 && tot<50){
			printf("The grade is second class");
	}
	}
	else{
		printf("Student is Fail");
	}
	return 0;
}
