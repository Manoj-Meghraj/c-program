// Longest among three strings
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20],c[20];
	int x,y,z;
	printf("Enter Three words whose lengths is to be compared\n");
	scanf("%s %s %s",a,b,c);
    x=strlen(a),y=strlen(b),z=strlen(c);
    if (x>y && x>z)
      {
      	printf("%s has the longest length",a);
    }
	  else if (y>x && y>z)
	  {
	  	printf("%s has the longest length",b);
	  }
	  else
	  {
	  	printf("%s has the longest length",c);
	  }
	  return 0;
}
