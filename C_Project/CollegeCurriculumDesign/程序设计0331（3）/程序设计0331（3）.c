#include <stdio.h>

int main(void)
{
	int i, t;

	printf("该校人数为：");
	for (i = 1; i < 1000; i++)
	{
		if (i % 5 == 2)
			if (i % 7 == 3)
				if (i % 3 == 1)
					t = i;
	}

	printf("%d", t);

	return 0;
}