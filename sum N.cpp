#include <stdio.h>
int main(){
	int i,num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("\nThe Natural numbers are:");
	for(i=1;i<=num;i++){
		printf("%d ",i);
		sum+=i;
	}
	printf("\nThe sum of natural no.is:%d",sum);
	return 0;
}
