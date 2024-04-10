#include <stdio.h>
int main()
{
int n;
printf("enter no.of arr ele :\n");
scanf("%d",&n);

int arr[n];
int *ptr=arr;

int i;
for(i=0;i<=n;i++)
{
printf("Enter ele %d of array\n",i+1);
scanf("%d",(ptr+i));
}
for(i=0;i<=n;i++)
{
printf("Ele %d of an array is %d\n",i+1,*ptr+i);
}
return 0;


}
