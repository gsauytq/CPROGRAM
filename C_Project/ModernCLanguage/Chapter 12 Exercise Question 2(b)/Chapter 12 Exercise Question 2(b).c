#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch1[50], c, * p;
	int i, j = 0;

	p = &ch1[0];
	printf("Enter a message:");
	for (i=0; i < 50; i++)
	{
		c = getchar();
		if (c == '\n')
			break;
		if (toupper(c) >= 'A' && toupper(c) <= 'Z')
			*p++ = c;
	}
	*p = '\0';

	char* q; p--;
	for (q = &ch1[0]; q < p; q++)
	{
		if (toupper(*q) != toupper(*p))
			break;
		p--;
	}

	if (q >= p)
		printf("Palindrome.");
	else
		printf("Not a palindrome.");

	return 0;

}