#include <stdio.h>
#define PI 3.14f
#define F 4.0f/3.0f

int main(void)
{
	float a;

	printf("请输入球的半径：");
	scanf_s("%f", &a);
	printf("球的体积是：%f", F * PI * a * a * a);

	return 0;
}