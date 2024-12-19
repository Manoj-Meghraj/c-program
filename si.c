#include<stdio.h>
#include<conio.h>
int main()
{
	//Calculation of Simple Interest
	float p,t,r,si;
	printf("Enter the principal,time and rate: ");
	scanf(" %f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("The simple interest of %.2f at %.2f rate in %.2f time is %.2f ",p,t,r,si);
	getch();
	return 0;
}
