#include <stdio.h>

int main(void)
{
	int f=1,n=0,i;

	for (i=1;i<=101;i+=2)
	{
		n=n+i*f;
		f=-f;
	}

	printf("1-3+5-7+...-99+101:%d\n",n);

	return 0;
}