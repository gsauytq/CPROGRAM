#include <stdio.h>

int fun(char* str);

int main(void)
{
	char a[10];

	printf("Please enter a string:");
	gets_s(a,sizeof(a)-1);

	if (fun(a))
		printf("Palindrome");
	else
		printf("Not Palindrome");

	return 0;
}

int fun(char *str)
{
	char* p;
	p = str;
	while (*p)p++; p--;

	while (str >= p)
	{
		if (*str == *p)
		{
			str++;
			p--;
		}
	}

	if (str <= p)
		return 1;
	else
		return 0;
}