#include <stdio.h>

int main(void)
{
	int x;
	char c;

	printf("Please enter a number:");
	scanf("%d", &x);

	if (x > 100 || x < 0)
	{
		printf("Data Error.");
		return 0;
	}

	switch (x / 10) {
	case 9:case 10:c = 'A'; break;
	case 8:c = 'B'; break;
	case 7:c = 'C'; break;
	case 6:c = 'D'; break;
	default:c = 'E';
	}

	printf("grade:%c", c);
	return 0;
}