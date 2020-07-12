#include <stdio.h>

int main(void)
{
	int a1, a2, b1, b2;

	printf("Enter two fraction separated by a plus sign:");
	scanf_s("%d/%d+%d/%d", &a1, &a2, &b1, &b2);

	printf("The sum is :%d/%d",(a1*b2)+(b1*a2),a2*b2);

	return 0;
}