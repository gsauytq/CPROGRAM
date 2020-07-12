#include <stdio.h>
#define N 10
#define NUMBER (int)((sizeof(a)/sizeof(a[0])))

int main(void)
{
	int a[N], i;

	printf("Enter %d numbers:", NUMBER);
	for (i = 0; i < NUMBER; i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("In reverse order:");
	for (i = 0; i < NUMBER; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}
