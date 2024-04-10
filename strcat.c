// strcat function 
#include <stdio.h> 
int main() 
{ 
	char dest[50] = "Yashraj is "; 
	char src[50] = "bad boy"; 

	printf("dest Before: %s\n", dest); 
	
	strcat(dest, src); 

	printf("dest After: %s", dest); 
	return 0; 
}

