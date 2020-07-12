#include <stdio.h>

int main(void)
{
	int n, i, sum = 0, t;

	printf("请输入整数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		sum += t;
	}

	printf("%d个数的和是：%d", n, sum);

	return 0;
}