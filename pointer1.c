// Understanding the void pointer
/*(void pointer) is a generic pointer type that can store
 the address of any data type, but it does not have a specific type itself*/

#include<stdio.h>
int main()
{
	int a=10;
	float b=30;
	void *ptr;
	ptr=&a;
	printf("The value of a is %d\n",*((int*)ptr));
	ptr=&b;
	printf("The value of b is %f",*((float*)ptr));
	return 0;
}
