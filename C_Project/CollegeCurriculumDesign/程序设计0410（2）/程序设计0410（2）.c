#include <stdio.h>
#include <string.h>

int main(void)
{
	char* max, p[3][10];
	int i;

	printf("请输入3个单词：");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", p[i]);
	}

	max = p[0];
	for (i = 1; i < 3; i++)
	{
		if (strcmp(max, p[i]) < 0)
		{
			max = p[i];
		}
	}

	printf("最大的单词是：%s", max);

	return 0;
}