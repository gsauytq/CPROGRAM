#include <stdio.h>

int main(void)
{
	int num, i=0;

	printf("请输入一个数：");
	scanf_s("%d", &num);
	while (num != 0) {
		i = i * 10 + num % 10;
		num = num / 10;
	}
	
	printf("逆序输出：%d\n", i);

	return 0;
}