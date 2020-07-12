#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3], i, j, k;

	printf("rand number\n");
	for (i = 0; i < 3; i++)
	{
		a[i] = rand() % 10;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				if (a[i] != a[j] && a[j] != a[k] && a[i] != a[k])
				{
					printf("%d%d%d\n", a[i], a[j], a[k]);
				}
			}
		}
	}
	
	return 0;
}