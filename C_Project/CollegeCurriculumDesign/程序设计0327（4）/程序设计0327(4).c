#include <stdio.h>

int main(void)
{
	int t;
	double n,s = 0;

	printf("���������룺");
	scanf("%lf", &n);

	t = (n <= 1500) + (n <= 4500) + (n <= 9000);

	switch (t)
	{
	case 1:s = n * 0.03;
		break;
	case 2:s = n * 0.1 - 105;
		break;
	case 3:s = n * 0.2 - 555;
		break;
	}

	printf("Ӧ��˰�%g", s);

	return;
}