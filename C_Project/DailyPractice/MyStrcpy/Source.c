#include <stdio.h>
#define N 50

void MyStrcpy(char* s, char* r);
int DetectionSpace(char* r);

int main(void)
{
	char a[N] = "This is the question.", b[] = "Hello World";
	int m;

	m = DetectionSpace(b);
	if (m) {
		MyStrcpy(a, b);
		printf("%s", a);
	}
	else
	{
		printf("Not enough space");
	}

	return 0;
}

void MyStrcpy(char* s, char* r)
{
	while (*s = *r)
	{
		s++;
		r++;
	}
}

int DetectionSpace(char* r)
{
	int c1 = 0, c2 = 0;

	while (*r)
	{
		c2++;
		r++;
	}

	if (c2 > N - 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}