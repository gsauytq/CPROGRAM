#include <stdio.h>

int main(void)
{
	int i1=0, num;

	printf("Enter a two-digit number :");
	scanf_s("%d", &num);
	
	while (num != 0) {
		i1 = i1 * 10 + num % 10;
		num = num / 10;
	}

	printf("The reversal is:%d", i1);

	return 0;
}