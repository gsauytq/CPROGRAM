#include <stdio.h>

int main(void)
{
	int i;
	int result = 1;

	for (i = 1; i <= 10; i++)
	{
		result = result * i;
		printf("%d!=%d\n", i, result);
	}

	return 0;
}