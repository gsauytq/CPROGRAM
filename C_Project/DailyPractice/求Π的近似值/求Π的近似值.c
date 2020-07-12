#include <stdio.h>

int main(void)
{
	double s = 1, t = 1, x, f1=1,f2=3;

	printf("Please enter precision");
	scanf_s("%lf", &x);

	while (t > x)
	{
		t *= f1 / f2;
		s += t;
		f1++; f2 += 2;
	}

	printf("¦°:%lf", s * 2);

	return 0;
}