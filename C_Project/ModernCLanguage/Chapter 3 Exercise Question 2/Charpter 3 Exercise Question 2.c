#include <stdio.h>

int main(void)
{
	int number, day, month, year;
	float price;

	printf("Enter item number: ");
	scanf_s("%d", &number);
	printf("Enter unit price: ");
	scanf_s("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf_s("%d/%d/%d", &month, &day, &year);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%.1f\t%d%d%d",
		number, price, month, day, year);

	return 0;
}