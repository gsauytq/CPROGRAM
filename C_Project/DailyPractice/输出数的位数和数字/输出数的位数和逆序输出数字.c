#include <stdio.h>

int main(void)
{
	int s, n = 0, b = 0;

	printf("������һ����");
	scanf_s("%d", &s);

	while (s != 0)
	{
		b = b * 10 + s % 10;
		s /= 10;
		n++;
	}

	printf("����һ��%dλ�������������%d", n, b);

	return 0;
}