#include <stdio.h>

int main(void)
{
	int s, n = 0, b = 0;

	printf("请输入一个数");
	scanf_s("%d", &s);

	while (s != 0)
	{
		b = b * 10 + s % 10;
		s /= 10;
		n++;
	}

	printf("这是一个%d位数，逆序输出：%d", n, b);

	return 0;
}