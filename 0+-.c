#include<stdio.h>
#include<stdio.h>
int main ()
{
	int a;
	printf("Enter a number ");
	scanf("%d",&a);
	if (a==0)
	{
	printf("The entered number is zero\n");
	}
	else if (a>0)
	{
		printf("The entered number is positive\n");
	}
	else
	{
		printf("The entered numver is negative" );
	}
	getch();
	return 0;
}
