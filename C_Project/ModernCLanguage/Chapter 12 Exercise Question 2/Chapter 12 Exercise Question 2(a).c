#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch1[50], c;
	int i, j = 0;

	printf("Enter a message:");
	for (i = 0; i < 50; i++)
	{
		c = getchar();
		if (c == '\n')
			break;
		if (toupper(c) >= 'A' && toupper(c) <= 'Z')
			ch1[j++] = c;
	}
	ch1[j] = '\0';
	printf("%s\n", ch1);
	
	for (i = 0; i < j; i++)
	{
		if (toupper(ch1[i]) != toupper(ch1[j - i - 1]))
			break;
	}

	if (i >= j - i - 1)
		printf("Palindrome.");
	else
		printf("Not a palindrome.");

	return 0;

}