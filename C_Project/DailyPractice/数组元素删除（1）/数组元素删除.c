#include <stdio.h>
#define N 10

int main(void)
{
	int i, j = 0, n, a[N] = { 23,523,213,52,34,52,463,745,234,74 };

	printf("�޸�֮ǰ�����飺");
	for (i = 0; i < N; i++)
	{
		printf("%5d", a[i]);
	}

	printf("\n����Ҫɾ����ֵ��");
	scanf_s("%d", &n);

	for (i = 0;i < N; i++)
	{
		if (a[i] != n)
			a[j++] = a[i];
	}
	a[N - 1] = 0;

	printf("�޸ĺ�����飺");
	for (i = 0; i < N; i++)
	{
		printf("%5d", a[i]);
	}

	return 0;
}