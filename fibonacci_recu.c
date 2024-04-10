#include<stdio.h>
void fib(int n1,int n2,int n)
{
	int n3;
	if(n>0){
		n3=n1+n2;
		printf("%d,",n3);
		n1=n2;
		n2=n3;
		fib(n1,n2,n-1);
	}
}
int main()
{
	int n1,n2,n3,n;
	n1=0;
	n2=1;
	printf("Enter a number:");
	scanf("%d",&n);
	fib(n1,n2,n-2);
	return 0;
}
