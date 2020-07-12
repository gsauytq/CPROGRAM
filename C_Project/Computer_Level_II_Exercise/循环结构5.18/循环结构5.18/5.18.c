#include <stdio.h>

int main(void)
{
	float s=0.0f,n=1.0f;
	int i;

	for (i=1;i<=49;i++)
	{
		n=n*i;
		s=s+1/n;
	}


	printf("e=%f",s+1);

	return 0;
}

