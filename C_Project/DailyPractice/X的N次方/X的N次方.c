#include <stdio.h>

int main(void)
{
	int s = 1, x, n, i;

	printf("�����������");
	scanf_s("%d", &x);
	printf("������ָ����");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		s *= x;
	}

	printf("%d��%d�η���%d", x, n, s);

	return 0;
}