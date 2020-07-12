#include <stdio.h>
#include <string.h>
#define M 5
#define N 20

int main(void)
{
	char char_array[M][N],t[N];
	int i, j;

	printf("Enter string:\n");
	for (i = 0; i < M; i++)
	{
		gets_s(char_array[i], N);
	}

	for (i = 0; i < M - 1; i++)
	{
		for (j = i + 1; j < M; j++)
		{
			if (strcmp(char_array[i], char_array[j]) > 0)
			{
				strcpy(t, char_array[i]);
				strcpy(char_array[i], char_array[j]);
				strcpy(char_array[j], t);
			}
		}
	}

	printf("After sort:\n");
	for (i = 0; i < M; i++)
	{
		printf("%s\n", char_array[i]);
	}

	return 0;
}