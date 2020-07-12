#include <stdio.h>

int lcm(int n1, int n2, int n3);
int max(int n1, int n2, int n3);

/*
x1,x2,x3����С������Ϊ�ܹ�����x1,x2,x3���������������е����ֵ��ֵΪi��
����ܹ�����������i��ֵ������i����������ֱ��������x1,x2,x3ʱ������i��ֵ����ʱi��ֵΪ��С��������
*/

int main(void)	
{
	int x1, x2, x3;

	printf("Please enter integer:");
	scanf("%d%d%d", &x1, &x2, &x3);

	printf("%d,%d,%d is lcm:%d", x1, x2, x3, lcm(x1, x2, x3));

	return 0;
}

int max(int n1, int n2, int n3)
{
	int max;
	max = n1;
	if (max < n2)
		max = n2;
	if (max < n3)
		max = n3;

	return max;
}

int lcm(int n1, int n2, int n3)
{
	int i;
	i = max(n1, n2, n3);

	while ((i % n1 != 0) || (i % n2 != 0) || (i % n3 != 0))
		i++;

	return i;
}