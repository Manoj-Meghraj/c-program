#include<stdio.h>
int ispalindrome(char str[],int start,int end){
	if(start==end)
	{
		return 1;
	}
	if(str[start]!=str[end])
	{
		return 0;
	}
	return ispalindrome(str,start+1,end-1);
}

int main()
{	int a;
	a=ispalindrome("sir",0,4);
	printf("%d",a);
}
