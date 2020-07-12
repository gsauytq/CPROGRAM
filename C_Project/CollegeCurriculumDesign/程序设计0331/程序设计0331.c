#include <stdio.h>

int main(void)
{
	int i, j, k, num = 0;

	printf("个位与百位之和为9的整数：\n");
	for (i = 100; i <= 999; i++)
	{
		j = i / 100;
		k = i % 10;
		if ((j + k) == 9) {
			printf("%d\t", i);
			num++;
			if (num % 5 == 0)
				printf("\n");
		}
	}

	return 0;
}