#include <stdio.h>

int MyStrcmp(char* s, char* r);

int main(void)
{
	char a[30], b[30];
	int result;

	printf("Please enter string_a and string_b:\n");
	gets(a);
	gets(b);

	result = MyStrcmp(a, b);
	if (result == (-1))
		printf("String_a less than String_b");
	if (result == 0)
		printf("String_a equal String_b");
	if (result == 1)
		printf("String_a more than String_b");

	return 0;
}

int MyStrcmp(char* s, char* r)
{
	
	while (*s || *r)
	{
		if (*s > * r)
			return 1;
		if (*s < *r)
			return (-1);
		if (*s == *r)
		{
			s++;
			r++;
		}
	}
	return 0;
}