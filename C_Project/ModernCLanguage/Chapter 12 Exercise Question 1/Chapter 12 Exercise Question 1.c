#include <stdio.h>

int main(void)
{
	char ch[50], c;
	int i;

	printf("Enter a message:");
	for (i=0;i<50;i++)
	{
		c = getchar();
		if (c == '\n')
			break;
		ch[i] = c;
	}

	printf("Reversal is:");
	--i;
	for (; i >= 0; i--)
	{
		printf("%c", ch[i]);
	}

	return 0;
}