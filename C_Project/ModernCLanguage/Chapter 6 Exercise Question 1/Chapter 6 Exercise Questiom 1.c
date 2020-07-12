#include <stdio.h>

int main(void)
{
	float max = 0.0f, n;

	do {
		printf("Enter a number:");
		scanf_s("%f", &n);
		if (n > max) {
			max = n;
		}
	} while (n > 0);

	printf("The largest number entered was :%f", max);

	return 0;
}