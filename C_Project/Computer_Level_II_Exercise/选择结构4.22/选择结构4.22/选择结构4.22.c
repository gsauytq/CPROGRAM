#include <stdio.h>

int main(void)
{
	int year0,month0,day0,year1,month1,day1,age=0;

	printf("������ѧ�������գ�");
	scanf_s("%d/%d/%d",&year0,&month0,&day0);

	printf("�����뵱ǰ���ڣ�");
	scanf_s("%d/%d/%d",&year1,&month1,&day1);

	if (month1>month0)
		age=year1-year0;
	else
		age=year1-year0-1;

	printf("ѧ�����䣺%d",age);

	return 0;
}