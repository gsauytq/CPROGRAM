#include <stdio.h>

int main(void)
{
	int n, i, sum = 0, t;

	printf("������������");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		sum += t;
	}

	printf("%d�����ĺ��ǣ�%d", n, sum);

	return 0;
}