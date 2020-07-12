#include <stdio.h>

int main(void)
{
	char s[50];
	int i, n = 0;

	printf("Please enter a string:");
	gets_s(s,50);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			n++;
	}

	printf("word nums:%d", n);

	return 0;
}