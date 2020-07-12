#include <stdio.h>

int Mystrlen_one(char* s);

int main(void)
{
	char a[50];
	printf("Please enter a string:");
	gets_s(a, 49);

	printf("string's len:%d", Mystrlen_one(a));

	return 0;
}

int Mystrlen_one(char* s)
{
	char* str = s;

	for (; *s; s++);

	return s - str;
}