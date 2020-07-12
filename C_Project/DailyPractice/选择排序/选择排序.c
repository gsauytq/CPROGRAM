#include <stdio.h>

void ascending_order(int* a);
void descending_order(int* a);

int main(void)
{
	int a[10] = { 23, 534, 93, 432, 25, 139, 234, 920, 45, 243 };

	ascending_order(a);
	descending_order(a);

	return 0;
}

void ascending_order(int* a)
{
	int i, j, t, max;

	for (i = 0; i < 10; i++)
	{
		max = i;
		for (j = i + 1; j < 10; j++)
		{
			if (a[j] > a[max]) {
				max = j;
			}
		}
		t = a[i];
		a[i] = a[max];
		a[max] = t;
	}

	printf("ascending_order after array:");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

}

void descending_order(int* a)
{
	int i, j, t, min;

	for (i = 0; i < 10; i++)
	{
		min = i;
		for (j = i + 1; j < 10; j++)
		{
			if (a[j] < a[min]) {
				min = j;
			}
		}
		t = a[i];
		a[i] = a[min];
		a[min] = t;
	}

	printf("descending_order after array:");
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

}