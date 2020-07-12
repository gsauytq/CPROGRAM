#include <stdio.h>
#define N 1024

int main(void)
{
	int a[N], medium, head, tail;
	int i, num;

	for (i = 0; i < N; i++)
	{
		a[i] = i;
	}

	printf("请输入查找的数:");
	scanf_s("%d", &num);

	head = 0;
	tail = N - 1;

	while (head < tail)
	{
		medium = (head + tail) / 2;
		printf("Head:%d,Tail:%d,Medium:%d\n", head, tail, medium);

		if (num == a[medium])
		{
			printf("查找到");
			break;
		}
		else if (num > a[medium])
		{
			head = medium + 1;
		}
		else
		{
			tail = medium - 1;
		}
	}
}