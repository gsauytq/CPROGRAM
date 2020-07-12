#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[50], b[50];
	int i = 0, j = 0;

	printf("Please enter string:");
	gets_s(a, 49);

	printf("Please enter string:");
	gets_s(b, 49);

	if ((sizeof(a) - 1) <= ((strlen(a)) + (strlen(b))))
	{
		printf("Not enough space.");
		return 0;
	}

	while (a[i] != '\0')
		i++;

	while (b[j] != '\0')
	{
		a[i] = b[j];
		i++;
		j++;
	}

	a[i] = '\0';
	puts(a);

	return 0;
}