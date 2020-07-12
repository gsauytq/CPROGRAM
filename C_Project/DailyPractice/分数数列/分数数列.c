#include <stdio.h>

int main(void)
{
	float f1=2.0f, f2=1.0f, sum=0.0f, t;
	int i;

	for (i = 1; i <= 20; i++)
	{
		sum = sum + f1 / f2;
		t = f1; 
		f1 = f1 + f2; 
		f2 = t;
	}

	printf("分数数列的和是：%f", sum);

	return 0;
}