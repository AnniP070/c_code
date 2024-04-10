#include<stdio.h>
#include<string.h>

int main()
{
char str1[10],str2[10];
int i,len;
printf("Enter the String  : ");
scanf("%s",str1);
len=strlen(str1);
for(i=0;i<len;i++);
{
str2[i]=str1[i];

}
printf("%s",str2);
return 0;

}

