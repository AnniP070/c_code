#include<stdio.h>
int main(){
	char str[50];
	printf("Enter a string:");
	gets(str);
	int i;
	for(i=0; str[i]!='\0';i++);
	printf("Length of string is:%d",i);
	return 0;
}
