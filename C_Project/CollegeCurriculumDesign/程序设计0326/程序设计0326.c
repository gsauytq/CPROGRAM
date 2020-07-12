#include <stdio.h>

int main(void)
{
	int s;

	printf("Please enter achievement£º");
	scanf("%d", &s);

	s /= 10;
	printf("achievement grade:");
	switch (s) {
	case 10:case 9:printf("A"); break;
	case 8:printf("B"); break;
	case 7:printf("C"); break;
	case 6:printf("D"); break;
	default:printf("E");
	}

	return 0;
}