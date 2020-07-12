#include <stdio.h>

int main(void)
{
	int a[8] = { 2,3,5,6,9,11 }, x, i, temp = 0, id = 0;

	printf("Please enter a number:");
	scanf_s("%d", &x);

	if (x > a[5])
	{
		a[6] = x;
	}

	for (i = 0; i < 7; i++)
	{
		if (x > a[i] && x <= a[i + 1])
		{
			id = i + 1;
			break;
		}
	}

	i = 7;
	while (i != id)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = x;

	for (i = 0; i < 7; i++)
	{
		printf("%3d", a[i]);
	}

	return 0;
}
