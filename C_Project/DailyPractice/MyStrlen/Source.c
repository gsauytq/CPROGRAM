#include <stdio.h>

int MyStrlen(char* s);

int main(void)
{
	char a[30];
	int count;

	printf("Please enter a string:");
	gets_s(a, 29);

	count = MyStrlen(a);
	printf("count:%d", count);
	return 0;
}

int MyStrlen(char* s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return count;
}