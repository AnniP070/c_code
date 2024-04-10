#include<stdio.h> 
int main()
{
	int a,b,c;
	char ch;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	printf("+Add \n-Sub \n/Div \n*mult");
	printf("Enter your choice");
	scanf("%c",&ch);
	switch(ch){
		case '+':
			printf("Addition of %d and %d is %d",a,b,a+b);
			break;
		case '-':
		     printf("Substraction of %d and %d is %d",a,b,a-b);
		     break;
	    case '/':
	    	printf("division of %d and %d is %d ",a,b,a/b);
	    	break;
	    case '*':
	        printf("multiplication of %d and %d is %d",a,b,a*b);
	        break;
	    case'e':
	    exit(0);
	    break;
	    default:
	    	printf("your choice");
	    	break;
			
	}
	return 0;
}
