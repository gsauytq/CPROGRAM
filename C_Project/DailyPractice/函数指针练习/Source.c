#include <stdio.h>
#include <math.h>
#define PI 3.1415926

double mysin(double (*f)(double), double x);

int main(void)
{
	printf("%lf", mysin(sin, PI / 2));

	return 0;
}

double mysin(double (*f)(double), double x)
{
	return (*f)(x);
}