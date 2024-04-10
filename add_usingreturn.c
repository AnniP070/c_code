#include <stdio.h>

int add();

int main() 
{
   int x,y,sum;
   printf("Enter any two numbers :");
   scanf("%d %d",&x,&y);
   sum=add(x,y);
   printf("The sum is %d\n",sum);
   return 0;
}

int add(x,y) 
{
   int c;
   c=x+y;
   return c;
}
