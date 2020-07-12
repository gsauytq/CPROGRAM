#include <stdio.h>
#include <math.h>

void morethan(double a, double b, double s);
void equal(double a, double b);
void lessthan(void);

int main(void)
{
	double a, b, c, s;

	printf("Please enter a¡¢b and c:");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	s = b * b - 4 * a * c;
	printf("%p\n", &s);

	if (s > 0)
	{
		morethan(a, b, s);
	}
	else if (s == 0)
	{
		equal(a, b);
	}
	else
	{
		lessthan();
	}

	return 0;
}

void morethan(double a, double b, double s)
{
	double r1, r2;

	r1 = ((-b) - sqrt(s)) / (2 * a);
	r2 = ((-b) + sqrt(s)) / (2 * a);

	printf("r1=%lf\nr2=%lf\n", r1, r2);
}

void equal(double a, double b)
{
	double r0 = (-b) / (2 * a);
	printf("r0=%lf", r0);
}

void lessthan(void)
{
	printf("ÎÞ½â");
}