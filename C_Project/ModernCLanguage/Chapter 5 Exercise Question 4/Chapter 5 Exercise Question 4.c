#include <stdio.h>

int main(void)
{
	int x;

	printf("��������٣�����/Сʱ����");
	scanf_s("%d", &x);

	if (x < 1)
		printf("Calm(�޷�)");
	else if (x <= 3)
		printf("Light air(���)");
	else if (x <= 27)
		printf("Breeze(΢��)");
	else if (x <= 47)
		printf("Gale(���)");
	else if (x <= 63)
		printf("Storm(����)");
	else
		printf("Hurricane(쫷�)");

	return 0;
}