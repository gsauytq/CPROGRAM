#include <stdio.h>

struct date {
	int year;
	int month;
	int day;
};

int compare_dates(struct date d1, struct date d2);

int main(void)
{
	struct date d1, d2;

	printf("Enter first date (mm/dd/yy):");
	scanf_s("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	printf("Enter second date (mm/dd/yy):");
	scanf_s("%d/%d/%d", &d2.month, &d2.day, &d2.year);

	if (compare_dates(d1, d2) == (-1))
		printf("%d/%d/%02d is earlier than %d/%d/%02d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);

	if (compare_dates(d1, d2) == (+1))
		printf("%d/%d/%02d is later than %d/%d/%02d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);

	if (compare_dates(d1, d2) == 0)
		printf("%d/%d/%02d is equal to %d/%d/%02d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
}

int compare_dates(struct date d1, struct date d2)
{
	if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
		return 0;

	if (d1.year < d2.year)
		return (-1);
	else if (d1.year == d2.year && d1.month < d2.month)
		return (-1);
	else if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)
		return (-1);

	if (d1.year > d2.year)
		return (+1);
	else if (d1.year == d2.year && d1.month > d2.month)
		return (+1);
	else if (d1.year == d2.year && d1.month == d2.month && d1.day > d2.day)
		return (+1);
}