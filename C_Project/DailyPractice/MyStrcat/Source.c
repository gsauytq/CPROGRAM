#include <stdio.h>
#define N 30

void MyStrcat(char* s, char* r);
int DetectionSpace(char* s, char* r);

int main(void)
{
	char a[N], b[N];
	int m;

	printf("Please enter string_a and string_b:\n");
	gets(a);
	gets(b);

	m = DetectionSpace(a, b);
	if (m) {
		MyStrcat(a, b);
		printf("%s", a);
	}
	else
	{
		printf("Not enough space.");
	}

	return 0;
}

void MyStrcat(char* s, char* r)
{
	while (*s)
	{
		s++;
	}

	while (*s = *r)
	{
		s++;
		r++;
	}
}

int DetectionSpace(char* s, char* r)
{
	int c1 = 0, c2 = 0;

	while (*s)
	{
		c1++;
		s++;
	}
	while (*r)
	{
		c2++;
		r++;
	}

	if ((c1 + c2) > N - 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}