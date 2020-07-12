#include <stdio.h>

int main(void)
{
	double loan, rate, payment;

	printf("enter amount of loan:");
	scanf_s("%lf", &loan);
	printf("enter interest rate:");
	scanf_s("%lf", &rate);
	printf("entermonthly payment:");
	scanf_s("%lf", &payment);
	printf("\n");

	double month_rate = ((rate / 100) / 12);
	double first = ((loan - payment) + (loan * month_rate));
	double second = ((first - payment) + (first * month_rate));
	double third = ((second - payment) + (second * month_rate));

	printf("balance remaining after first payment: $%.2lf\n", first);
	printf("balance remaining after second payment: $%.2lf\n", second);
	printf("balance remaining after third payment: $%.2lf\n", third);

	return 0;
}