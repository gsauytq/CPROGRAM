#include <stdio.h>

void point(double** pp);
double d2 = 30.4;
double d1 = 20.8;
int main(void)
{
	double* p = &d1;*/

	point(&p);
	printf("*p=%lf,%p\n", *p,p);

	return 0;
}

void point(double** pp)
{
	*pp = &d2;
}