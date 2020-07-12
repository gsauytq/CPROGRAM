#include <stdio.h>


int main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i, n = 10, p;

	printf("修改前的数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", a[i]);
	}

	printf("\n输入要平移的元素个数：");
	scanf_s("%d", &p);

	for (i = 0; i < p; i++)
	{
		int t;
		t = a[0];
		for (int j = 0; j < n - 1; j++)
		{
			a[j] = a[j + 1];
		}
		a[n - 1] = t;
	}

	printf("修改后的数组：");
	for (i = 0; i < n; i++)
	{
		printf("%3d", a[i]);
	}

	return 0;
}