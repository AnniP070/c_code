#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("\nThe odd numbers are :");
	for(i=1;i<=n;i++){
		printf("%d ", 2*i-1);
		sum+=2*i-1;
	}
	printf("\nThe sum of odd natural number:%d",sum);
	return 0;
}
