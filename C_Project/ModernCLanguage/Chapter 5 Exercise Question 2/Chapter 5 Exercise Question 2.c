#include <stdio.h>

int main(void)
{
	int h, m, h1 = 0;

	printf("Enter a 24-hour time:");
	scanf_s("%d:%d", &h, &m);

	switch (h) {
	case 13:h1 = 1; break;
	case 14:h1 = 2; break;
	case 15:h1 = 3; break;
	case 16:h1 = 4; break;
	case 17:h1 = 5; break;
	case 18:h1 = 6; break;
	case 19:h1 = 7; break;
	case 20:h1 = 8; break;
	case 21:h1 = 9; break;
	case 22:h1 = 10; break;
	case 23:h1 = 11; break;
	case 0:h1 = 12; break;
	default:h1 = h;
	}

	printf("Equivalent 12-hour time:%d:%.2d ", h1, m);
	
	if (h >= 0 && h < 12)
		printf("AM");
	if (h >= 12 && h < 24)
		printf("PM");

	return 0;
}