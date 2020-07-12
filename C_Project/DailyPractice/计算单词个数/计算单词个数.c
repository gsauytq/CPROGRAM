#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char words[100];
	int i,sum = 0;

	printf("Please enter a English sentence:");
	for (i = 0; i < 100; i++)
	{
		scanf_s("%c", &words[i],sizeof(char));
		
		if (words[i] == '\n')
			break;
	}

	for (i = 0; words[i] != '\0'; i++)
	{
		if (words[i] != ' ' && (words[i + 1] == ' ' || words[i + 1] == '\0'))
			sum++;
	}

	printf("word numbers:%d", sum);

	system("pause");
	return 0;
}