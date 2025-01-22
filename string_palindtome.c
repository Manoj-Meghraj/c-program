// String Palindrome

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,j=0,l;
	printf("ENter a word: \n");
	scanf("%s",a);
	l=strlen(a)-1;
	for (i=l;i>=0;i--)
	{
		b[j]=a[i];
		j=j+1;
	}
	if (strcmp(a,b)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
	return 0;
}
