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

	printf("10�ǵ�%d����ģ��±�Ϊ%d��", i + 1, i);

	return 0;
}