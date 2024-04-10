//C program to find second largest element in a one dimensional array
#include<stdio.h>
int main(){
	int array[10]={100,33,54,3,55,33,23,4,45,67}
	int i,largest,sec_largest;  
	if(array[0]>array[1]){
		largest=array[0];
		sec_largest=array[1];
	}
	else{
		largest=array[1];
		sec_largest=array[0];
	}          
	for(i=1;i<10;i++){
		if(largest<array[i]){
			sec_largest=largest;
			largest=array[i];
		}
		else if(sec_largest<array[i]){
			sec_largest=array[i];
		}
	}
	printf("Second Largest element is:%d",sec_largest);
	return 0;
}
