/*保留两位小数，第三位小数四舍五入*/
#include <stdio.h>

int main(void)
{
	float i;

	printf("请输入一个数(xx.xxx）：");
	scanf_s("%f", &i);
	i *= 100;
	i += 0.5;
	i = (int)i;
	i /= 100;
	printf("四舍五入后的数：%.2f", i);	

	return 0;
}