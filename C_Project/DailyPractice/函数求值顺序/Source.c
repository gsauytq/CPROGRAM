#include <stdio.h>

void print(int a, int b);

int main(void)
{
	int num = 100;

	printf("%d %d\n", num, num += 6);
	print(num, num += 10);
	return 0;
}

void print(int a, int b)
{
	printf("%d\n", a);
	printf("%d\n", b);
}