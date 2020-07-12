#include <stdio.h>

int main(void)
{
	double earn, tax;

	printf("Enter your earn:");
	scanf_s("%lf", &earn);

	if (earn <= 750)
		tax = earn * 0.01;
	else if (earn > 750 && earn <= 2250)
		tax = 7.5 + (earn - 750) * 0.02;
	else if (earn > 2250 && earn <= 3750)
		tax = 37.5 + (earn - 2250) * 0.03;
	else if (earn > 3750 && earn <= 5250)
		tax = 82.5 + (earn - 3750) * 0.04;
	else if (earn > 5250 && earn <= 7000)
		tax = 142.5 + (earn - 5250) * 0.05;
	else
		tax = 230 + (earn - 7000) * 0.06;

	printf("tax:%g", tax);
	return 0;
}