#include <stdio.h>

int main(void)
{
	int s = 1, x, n, i;

	printf("请输入底数：");
	scanf_s("%d", &x);
	printf("请输入指数：");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
	{
		s *= x;
	}

	printf("%d的%d次方：%d", x, n, s);

	return 0;
}