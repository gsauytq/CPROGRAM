#include <stdio.h>

int main(void)
{
	int a1, a2, a3;

	printf("Enter phone number [(xxx)xxx-xxxx]:");
	scanf_s("(%d)%d-%d", &a1, &a2, &a3);
	printf("You entered %d.%d.%d", a1, a2, a3);

	return 0;
}