#include<stdio.h>
int main(){
	int i,num,sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(sum==num&&num>0)
	{
		printf("Number is Perfect");
	}
	else{
		printf("Number is not Perfect");
	}
	return 0;
}
