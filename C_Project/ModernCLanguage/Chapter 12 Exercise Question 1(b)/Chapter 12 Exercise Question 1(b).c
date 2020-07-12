#include <stdio.h>

int main(void)
{
	char* p, ch[50], c;

	printf("Enter a message:");
	for (p = &ch[0]; p < &ch[50]; p++)
	{
		c = getchar();
		if (c == '\n')
			break;
		*p = c;
	}

	printf("Reversal is:"); p--;
	for (; p >= &ch[0]; p--)
	{
		printf("%c", *p);
	}

	return 0;
}