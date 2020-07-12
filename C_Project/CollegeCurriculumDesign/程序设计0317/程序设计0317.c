#include <stdio.h>

int main(void)
{
	char c1;
	
	printf("Please enter a character:");
	c1 = getchar();
	printf("after lower:");
	putchar(c1 + 32);

	return 0;
}