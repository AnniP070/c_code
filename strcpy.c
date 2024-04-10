// strcpy() 
#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char source[] = "Yashraj is singer "; 
	char dest[20]; 

	strcpy(dest, source); 
 
	printf("Source: %s\n", source); 
	printf("Destination: %s\n", dest); 

	return 0; 
}

