/*������λС��������λС����������*/
#include <stdio.h>

int main(void)
{
	float i;

	printf("������һ����(xx.xxx����");
	scanf_s("%f", &i);
	i *= 100;
	i += 0.5;
	i = (int)i;
	i /= 100;
	printf("��������������%.2f", i);	

	return 0;
}