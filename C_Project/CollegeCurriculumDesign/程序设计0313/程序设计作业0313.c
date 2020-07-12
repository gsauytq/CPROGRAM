#include <stdio.h>
#include <math.h>

int main(void)
{
	double s1, s2, p, a, b, c;

	printf("请输入一元二次方程的系数：");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	p = b * b - 4 * a * c;
	if (p >= 0)
	{
		s1 = (-b + sqrt(p)) / (2 * a);
		s2 = (-b - sqrt(p)) / (2 * a);
		printf("s1=%lf,s2=%lf\n", s1, s2);
	}

	if (p < 0)
	{
		printf("方程没有实数根。\n");
	}

	return 0;
}