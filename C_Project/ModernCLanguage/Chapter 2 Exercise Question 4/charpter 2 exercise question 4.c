#include <stdio.h>

int main(void)
{
	float dollar;

	printf("enter an amount:");
	scanf_s("%f", &dollar);
	printf("with tax added:$%.2f", dollar + dollar * 0.05);
	
	return 0;
}