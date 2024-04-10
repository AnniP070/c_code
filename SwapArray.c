//write a program to swap first element in a array with second element and so on
#include<stdio.h>
int main(){
   int n,i,temp;
   printf("Enter the number of element in a array:");
   scanf("%d",&n);
   int array[n];
   for(i=0;i<n;i++){
      printf("enter the element:",i+i);
      scanf("%d",&array[i]);
    }
   for(i=0;n/2>i;i++){
      temp=array[i];
      array[i]=array[n-i-1];
      array[n-i-1]=temp;
    }
    printf("The reverse array is:  [");
    for(i=0;n>i;i++){
       printf("%d ,",array[i]);
    }
    printf("]");
}

