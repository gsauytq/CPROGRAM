#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(void)
{
	int i = 100;

	while (i > 0)
	{
		printf("����ʱ��%ds", i--);
		Sleep(1000);
		system("CLS");
	}

	return 0;
}