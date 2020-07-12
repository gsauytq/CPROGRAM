#include <stdio.h>

int main(void)
{
	int i, n, b = 0;

	printf("This program prints a table of square.\n");
	printf("Enter number of entries in table:");
	scanf_s("%d", &n);
	getchar();

	for (i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);
		b++;
		if (b % 24 == 0)
		{
			printf("Press Enter to continue...");
			if (getchar() != '\n')
			{
				return 0;
			}
		}
	}
	return 0;
}