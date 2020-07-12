#include <stdio.h>

int main(void) {
	int i, x, y, z;

	for (i = 100; i <= 999; i++) {
		x = i / 100;
		y = (i - x * 100) / 10;
		z = i - ((x * 100) + (y * 10));
		if (x * x * x + y * y * y + z * z * z == x * 100 + y * 10 + z)
			printf("%d\n", x * 100 + y * 10 + z);
	}
	
	return 0;
}