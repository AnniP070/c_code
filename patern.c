#include<stdio.h>

int main()
{
	int x,i,j;
	printf("Enter the number :- ");
	scanf("%d",&x);
	for(i=0;i<x;i++);
	{
		for(j=0;j<x;j++);
		{
			printf(" *");
		}
		printf("\n");	
	}
	return 0;
}
