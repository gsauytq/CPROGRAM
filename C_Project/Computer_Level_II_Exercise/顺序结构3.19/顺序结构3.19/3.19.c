#include <stdio.h>

int main(void)
{
	double a,b,c,average;

	printf("请输入3个数：");
	scanf_s("%lf %lf %lf",&a,&b,&c);

	average=(a+b+c)/3.00;
	average=(average*10)+0.5;
	average=(int)average;
	average=average/10;

	printf("3个数的平均值：%lf\n",average);
	return 0;
}
	