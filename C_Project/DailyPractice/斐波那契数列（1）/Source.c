#include <stdio.h>

int main(void)
{
	int a1 = 1, a2 = 1, k, i, sum;

	scanf_s("%d", &k);
	if (k == 1 || k == 2)
		printf("1");
	else
	{
		for (i = 0; i < k - 2; i++)
		{
			sum = a1 + a2;
			a1 = a2;
			a2 = sum;
		}
		printf("%d", a2);
	}

	return 0;
}