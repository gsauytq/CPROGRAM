#include <stdio.h>

int main(void)
{
	int n=0;
	char ch;
	
	printf("Please enter a string:");
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			n++;
	}
	
	printf("numbers:%d", n-1);

	return 0;
}