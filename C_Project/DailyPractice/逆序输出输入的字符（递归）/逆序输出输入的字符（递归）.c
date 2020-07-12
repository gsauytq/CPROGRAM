#include <stdio.h>

char iochar();

int main(void)
{
	iochar();
	return 0;
}

char iochar()
{
	char ch;

	ch = getchar();
	if (ch != '\n')
	{
		iochar();
		putchar(ch);
	}
}