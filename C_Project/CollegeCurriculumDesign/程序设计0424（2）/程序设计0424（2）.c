#include <stdio.h>
#include <stdlib.h>

int* number_max(int* a, int* b);

int main(void)
{
	int x, y;

	printf("Please enter integers:");
	scanf_s("%d%d", &x, &y);

	printf("max:%d\n", *(number_max(&x, &y)));

	system("pause");
	return 0;
}

int* number_max(int* p, int* q)
{
	if (*p > * q)
		return p;
	else
		return q;
}