#include <stdio.h>

long fun(int n);
int main(void)
{
	long i;

	printf("������һ��������");
	scanf_s("%ld", &i);
	printf("%ld!=%ld", i, fun(i));

	return 0;
}

long fun(int n) {
	long result;
	
	if (n == 1)
		return 1;
	else
		result = n * fun(n - 1);
}
