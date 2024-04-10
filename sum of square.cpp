#include <stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("\nThe square of Natural numbers are:",n);
	for(i=1;i<=n;i++){
		printf("%d ",i*i);
		sum+=i*i;
	}
	printf("\nThe sum of square of Natural no. upto %d terms=%d",n,sum);
	return 0;
}`		
