#include<stdio.h> //syllabus ass 9
int main()
{
	char names[3];
	int sub1[2],sub2[2],sub3[2],sub4[2],sub5[2],i =0,over_per;
	while(i<3)
	{
		printf("enter name of the student: ");
		scanf("%s",names);
		printf("enter marks of subject 1: \n");
		scanf("%d",&sub1);
		printf("enter marks of subject 2: \n");
		scanf("%d",&sub2);
		printf("enter marks of subject 3: \n");
		scanf("%d",&sub3);
		printf("enter marks of subject 4: \n");
		scanf("%d",&sub4);
		printf("enter marks of subject 5: \n");
		scanf("%d",&sub5);
	}
	while(i<3)
    {
	over_per=(sub1[i]+sub2[i]+sub3[i]+sub4[i]+sub5[i]*100)/500;
	printf("the overall percentage of the class is %d",over_per);
	}
	return 0;
}
