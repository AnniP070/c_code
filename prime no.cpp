#include<stdio.h>

int main()
{
	int x,y,z,flag=0;
	printf("Enter the number : ");
	scanf("%d",&x);
	for(y=2;y<x/2;++y){
		if(x%y==0){
			flag=1;
		}	
	}
	if(flag==0){
		printf("number is Prime");	
	}
	else{
		printf("number is not prime");
	}
	return 0;
} 
