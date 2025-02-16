// palindrome using recursion

#include<stdio.h>
int ispali(char str[],int s,int e)
{
	if (s==e)
	return 1;
	if (str[s]!=str[e])
	return 0;
	return (str,s+1,e-1);
}
int main()
{
	if (ispali("ABC",0,strlen("ABA")-1))
	printf("Palindrome");
	else
	printf("Not Palindrome");
	return 0;
}

