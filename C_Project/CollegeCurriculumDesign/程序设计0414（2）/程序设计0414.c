#include <stdio.h>
#include <math.h>

int prime(int n);

int main(void)
{
	int i, num = 0;

	printf("100-300µÄËØÊı£º\n");

	for (i = 100; i <= 300; i++)
	{
		if (prime(i))
		{
			printf("%d\t",i);
			num++;
			if (num % 4 == 0)
				printf("\n");
		}
	}

	return 0;
}

int prime(int n)
{
	int i, flag = 0;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			break;
	}

	if (i > sqrt(n))
		flag = 1;

	return flag;
}