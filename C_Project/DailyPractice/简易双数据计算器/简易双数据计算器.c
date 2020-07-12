#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	float a, b, c=0;
	char d;

	printf("Input Data:");
	scanf("%f%c%f", &a, &d, &b);

	switch (d)
	{
	case '+':c = a + b; break;
	case '-':c = a - b; break;
	case '*':c = a * b; break;
	case '/':c = a / b; break;
	}

	printf("result:%f", c);
	return 0;
}