#include <stdio.h>

int main(void)
{
	int dollar, twenty, ten, five, one;

	printf("enter a dollar amount:");
	scanf_s("%d", &dollar);
	printf("\n");
	twenty = dollar / 20;
	ten = (dollar - (twenty * 20)) / 10;
	five = (dollar - ((twenty * 20) + (ten * 10))) / 5;
	one = dollar - ((twenty * 20) + (ten * 10) + (five * 5));
	printf("$20 bills:%d\n",twenty);
	printf("$10 bills:%d\n", ten);
	printf("$5 bills:%d\n", five);
	printf("$1 bills:%d\n", one);

	return 0;
}