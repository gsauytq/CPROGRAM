#include <stdio.h>
#include <string.h>

int main(void)
{
	char* month_list[13] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int year, month, day;
	char month_m[10];

	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &month, &day, &year);

	switch (month) {
	case 1:strcpy(month_m, month_list[month - 1]);
	case 2:strcpy(month_m, month_list[month - 1]);
	case 3:strcpy(month_m, month_list[month - 1]);
	case 4:strcpy(month_m, month_list[month - 1]);
	case 5:strcpy(month_m, month_list[month - 1]);
	case 6:strcpy(month_m, month_list[month - 1]);
	case 7:strcpy(month_m, month_list[month - 1]);
	case 8:strcpy(month_m, month_list[month - 1]);
	case 9:strcpy(month_m, month_list[month - 1]);
	case 10:strcpy(month_m, month_list[month - 1]);
	case 11:strcpy(month_m, month_list[month - 1]);
	case 12:strcpy(month_m, month_list[month - 1]);
	}

	printf("You entered the date %s %d, %d", month_m, day, year);
	return 0;
}