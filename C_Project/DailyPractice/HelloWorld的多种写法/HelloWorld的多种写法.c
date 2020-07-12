#include <stdio.h>

void Hello_World();

int main(void)
{
	char _hello[] = "hello world";
	char *hel = "hello world";

	puts(_hello);
	printf("%s\n", _hello);
	printf("%s\n", hel);
	Hello_World();

	return 0;
}

void Hello_World() {
	printf("hello world");
}