#include <stdio.h>

int main(void)
{
	char ch;
	
	printf("Please enter a character:");
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'a' || ch >= 'A') && (ch <= 'z' || ch <= 'Z'))
			printf("This is character.\n");
		else
			printf("This is not character.\n");
	}

	return 0;
}