#include <stdio.h>

void pointer(int* p, int* q);

int main(void)
{
	int a, b;
	printf("Please enter integers:");
	scanf_s("%d%d", &a, &b);

	pointer(&a, &b);
	printf("a:%d,b:%d", a, b);
	return 0;
}

void pointer(int* p, int* q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}