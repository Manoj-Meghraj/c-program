#include<stdio.h>
int main()
{
	int n,r,s=0,z;
	printf("Enter any number ");
	scanf("%d",&n);
	z=n;
	while (n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(z==s)
	{
		printf("%d is palindrome \n",z);
	}
	else 
	{
		printf(" %d is not palindrome",s);
	}
	return 0;
}
