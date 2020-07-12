#include <stdio.h>
#include <math.h>

int abs_one(int p);
int abs_two(int q);

int main(void)
{
	int i,s1,s2;

	printf("Please enter a integer:");
	scanf_s("%d", &i);

	s1 = abs_one(i);
	printf("%d\n", s1);

	s2 = abs_two(i);
	printf("%d\n", s2);

	return 0;
}

int abs_one(int p)
{
	if (p > 0)
		return p;
	else
		return -p;
}

int abs_two(int q)
{
	if (q > 0)
		return abs(q);
	else
		return abs(-q);
}