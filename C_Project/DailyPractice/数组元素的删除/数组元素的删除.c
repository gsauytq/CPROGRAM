#include <stdio.h>

int main(void)
{
	int i, j, n, a[10] = { 34,25,334,234,602,23,24,325,634,254 };

	printf("�޸�ǰ�����飺");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}

	printf("\n������ɾ��������");
	scanf_s("%d", &n);

	for (i = 0; i < 10; i++)
	{
		if (a[i] == n)
			break;
	}

	for (j = i; j < 10 - 1; j++)
	{
		a[j] = a[j + 1];
	}
	a[10 - 1] = 0;

	printf("�޸ĺ�����飺");
	for (i = 0; i < 10; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");

	return 0;
}