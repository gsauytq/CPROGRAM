#include <stdio.h>

int main(void)
{
	int num, i=0;

	printf("������һ������");
	scanf_s("%d", &num);
	while (num != 0) {
		i = i * 10 + num % 10;
		num = num / 10;
	}
	
	printf("���������%d\n", i);

	return 0;
}