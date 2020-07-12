#include <stdio.h>

int main(void)
{
	int i;

	for (i = 100; i <= 150; i++)
	{
		if (i % 3 != 0)
			printf("%d\n", i);
	}

	return 0;
}