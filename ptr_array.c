#include<stdio.h>
int main(){
	int array[5]={100,5,32,45,18};
	
	int i;
	int* ptr;
	ptr=array;
	for (i=0;i<5;i++){
		printf("Value of *ptr = %d\n", *ptr);  //value
		printf("Address of ptr = %p\n\n", ptr);  //address
		ptr++;
    }
	return 0;	
}

