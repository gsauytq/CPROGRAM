#include <stdio.h>

int main(void)
{
	int a[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int i, j;

	printf("Enter row and col:");
	scanf_s("%d%d", &i, &j);
	printf("%d\n", a[i][j]);
	printf("%d\n", *(a[i] + j));
	printf("%d\n", *(*(a + i) + j));
	printf("%d\n", (*(a + i))[j]);
	printf("%d\n", *(*a + 4 * i + j));

	return 0;
}