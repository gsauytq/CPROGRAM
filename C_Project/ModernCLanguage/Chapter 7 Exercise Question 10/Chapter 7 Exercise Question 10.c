#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	int sum = 0;

	printf("Enter a sentence:");
	for (;;) {
		ch = getchar();
		ch = tolower(ch);
		if (ch == 'a' || ch == 'o' || ch == 'e' || ch == 'i' || ch == 'u')
			sum++;
		if (ch == '\n')
			break;
	}

	printf("Your sentence contains %d vowels.", sum);

	return 0;
}