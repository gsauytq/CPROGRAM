/*һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬�����£������ڵ�ʮ�����ʱ�������������ף���ʮ�η����ж�ߣ�*/

#include <stdio.h>

int main(void)
{
	float sum=100.0, tan=sum/2, i;

	for (i = 2; i <= 10; i++)
	{
		sum = sum + tan;
		tan = tan / 2;
	}
	
	printf("��ʮ�ι�����%f��\n", sum);
	printf("��ʮ�η���%f��\n", tan);

	return 0;
}