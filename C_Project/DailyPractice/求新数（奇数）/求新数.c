#include <stdio.h>

int main(void)
{
	int old_num, new_num = 0, w=1, z;

	printf("������һ������");
	scanf_s("%d", &old_num);

	while (old_num > 0)
	{
		z = old_num % 10;
		if (z % 2 == 1) {
			new_num += z * w;
			w *= 10;
		}
		old_num /= 10;
	}

	printf("������%d", new_num);

	return 0;
}