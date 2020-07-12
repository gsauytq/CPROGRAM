#include <stdio.h>

int main(void)
{
	int a=10,b=50,c=30;
	if (a>b)
		a=b,b=c;
	c=a;
	printf("a=%d,b=%d,c=%d",a,b,c);

	return 0;
}