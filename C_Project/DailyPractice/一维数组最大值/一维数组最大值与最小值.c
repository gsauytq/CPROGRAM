#include <stdio.h>

int main(void)
{
	int a[5], max, min, i;

	printf("please enter number:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", a + i);
	}

	max = min = a[0];
	for (i = 1; i < 5; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	printf("max:%d,min:%d", max, min);

	return 0;
}