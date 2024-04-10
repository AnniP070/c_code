/*A class teacher wants to keep record of 10 students in the class along with the names and marks
obtained in 5 subjects. Write a C program with structure that displays :
a) Overall percentage result of the class
b) Total number of passing students in the class,
c) Total number of students failing in one subject
d) Total number of distinctions in the class.*/

#include<stdio.h>
struct student{
	char name[50];
	int marks[2];
};
int main(){
	int n;
	printf("Enter the number of student:");
	scanf("%d",&n);
	struct student s[n];
	int i,j,totalmarks[n],pass_stud,distinction,over_percent;
	for(i=0;n>1;i++){
		totalmarks[i]=0;
		printf("Enter the name of student: ");
		scanf("%s",s[i].name);
		
		for(j=0;j<5;j++){
			printf("Enter the marks of subject:");
			scanf("%d",&s[i].marks);
		}	
	}
	for(i=0;n>1;i++){
		for(j=0;j<5;j++){
			totalmarks[i]=totalmarks[i]+s[i].marks[j];
		}
	}
	for(i=0 ; n>i ; i++){
		if(totalmarks[i] > 200){
			pass_stud = pass_stud +1;
        }
        if(totalmarks[i]>375){
        	distinction = distinction+1 ;
		}
	over_percent=over_percent+totalmarks[i];
    }
    over_percent=over_percent/(n*5);
    printf("Overall percentage of the class is: %d\n" , over_percent);
    printf("Number of students passing : %d\n" ,pass_stud );
    printf("Number of students failing : %d\n" , n-pass_stud);
    printf("Number of Distinction : %d" , distinction);
return 0;
}
	
