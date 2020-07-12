#include <stdio.h>

void fun(char* s);

int main(void)
{
	char a[20];

	printf("Please enter a string:");
	gets_s(a, sizeof(a) - 1);

	fun(a);
	printf("After Modification:%s", a);

	return 0;
}

void fun(char* s)
{
	char* p, t;

	p = s;
	while (*p)p++; p--;

	while (s <= p)
	{
		t = *s;
		*s = *p;
		*p = t;
		s++;
		p--;
	}


}