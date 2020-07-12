#include <stdio.h>
#include <string.h>
#define N 6

void StringSort(char* str[N]);

int main(void)
{
	int i;
	char charray[N][30], * str[N];

	for (i = 0; i < N; i++)
	{
		str[i] = charray[i];
	}

	printf("Please enter strings:\n");
	for (i = 0; i < N; i++)
	{
		scanf_s("%s", charray[i], 29);
	}

	StringSort(str);

	printf("After sort:\n");
	for (i = 0; i < N; i++)
	{
		printf("%s\n", str[i]);
	}

	return 0;
}

void StringSort(char* str[N])
{
	int i, j;
	char* string;

	for (i = 0; i < N - 1; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (strcmp(str[i], str[j]) < 0)
			{
				string = str[i];
				str[i] = str[j];
				str[j] = string;
			}
		}
	}
}