#include <stdio.h>

int main(void)
{
	int x=0, y=1, z;

	do {
		printf("%d\n", x);
		z = x + y;
		x = y;
		y = z;
	} while (x < 255);

	return 0;
}