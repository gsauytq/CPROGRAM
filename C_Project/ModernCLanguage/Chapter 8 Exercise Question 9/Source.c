#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(void)
{
	srand((unsigned int)time(NULL));

	char ch[N][N] = { '.' };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			ch[i][j] = '.';
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3c", ch[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			
		}
	}
	return 0;
}