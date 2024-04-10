#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
    printf("Enter first string :%s",str1); 
    gets(str1);
    
    char str2[50];
    printf("Enter second string :%s",str2); 
    gets(str2);
    
	int a,length;
	printf("\n1.Length of string\n2.Concatenation of string\n3.Copy string\n4.Reverse in string");
    printf("\nEnter your choice:\n");
    scanf("%d",&a);
    switch(a){
    	
    	case 1:
		    length = strlen(str1); 
	        printf("String 1 is : %s\n", str1); 
	        printf("Length of string 1 is: %zu\n", length);
		
		    length = strlen(str2); 
	        printf("String 2 is : %s\n", str2); 
	        printf("Length of string 2 is: %zu\n", length);
	        break;
	    
	    case 2:
	    	printf("str1 Before: %s\n",str1); 
	        strcat(str1, str2); 
			printf("str1 After: %s", str1); 
	        break;
	        
	    case 3:
		    printf("str1 Before: %s\n",str1); 
	        strcpy(str2, str1); 
			printf("str1 After: %s", str2); 
	        break;
	    
	    case 4:
	    	printf("String before reverse:%s\n",str1);
	    	strrev(str1);
	    	printf("String after reverse:%s\n",str1);
	    	
	    	printf("String before reverse:%s\n",str2);
	    	strrev(str2);
	    	printf("String after reverse:%s\n",str2);
	}
    return 0;
}
