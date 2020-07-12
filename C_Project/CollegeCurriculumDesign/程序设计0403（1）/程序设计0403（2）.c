#include <stdio.h>
#define N 6
int main(void)
{
	int a[N], i;

	printf("Please enter integers:");
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (a[i] == 10)
			break;
	}

	printf("10是第%d输入的，下标为%d。", i + 1, i);

	return 0;
}