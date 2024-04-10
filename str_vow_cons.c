//Write a program to print all the vowel and consonant separately in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],vowel[100],consonant[100];
	int i,j=0,k=0;
	printf("Enter The String:");
	gets(str1);
	strlwr(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
		{
		    	vowel[j]=str1[i];
		    	j++;
		}
		else{
			consonant[k]=str1[i];
			k++;
		}
	}
	printf("Vowels are:%s\n",vowel);
	printf("Consonants are:%s\n",consonant);
	return 0;
}
