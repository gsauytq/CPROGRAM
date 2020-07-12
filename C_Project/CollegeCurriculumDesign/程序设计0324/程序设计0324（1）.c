#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Please enter two integers:");
	scanf("%d%d", &a, &b);

	if ((a > 0 && b > 0) || (a < 0 && b < 0))
	{
		printf("a+b:%d\n", a + b);
	}
	else
	{
		printf("%d", 0);
	}

	return 0;
}