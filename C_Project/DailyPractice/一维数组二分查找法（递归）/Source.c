#include <stdio.h>
#define N 1024

int search(int* a, int num, int head, int tail);

int main(void)
{
	int a[N], i, num, head, tail;

	for (i = 0; i < N; i++)
	{
		a[i] = i;
	}

	printf("请输入查找的数：");
	scanf_s("%d", &num);

	head = 0;
	tail = N - 1;
	if (search(a, num, head, tail))
	{
		printf("找到了。");
	}
	else
	{
		printf("没有找到。");
	}

	return 0;
}

int search(int* a, int num, int head, int tail)
{
	static int medium;
	medium = (head + tail) / 2;
	printf("Head:%d,Tail:%d,Medium:%d\n", head, tail, medium);

	if (num == a[medium])
	{
		return 1;
	}
	else if (num > a[medium])
	{
		search(a, num, medium + 1, tail);
	}
	else
	{
		search(a, num, head, medium - 1);
	}
}