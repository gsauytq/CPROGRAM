#include <stdio.h>

int main(void)
{
	int x;

	printf("请输入风速（海里/小时）：");
	scanf_s("%d", &x);

	if (x < 1)
		printf("Calm(无风)");
	else if (x <= 3)
		printf("Light air(轻风)");
	else if (x <= 27)
		printf("Breeze(微风)");
	else if (x <= 47)
		printf("Gale(大风)");
	else if (x <= 63)
		printf("Storm(暴风)");
	else
		printf("Hurricane(飓风)");

	return 0;
}