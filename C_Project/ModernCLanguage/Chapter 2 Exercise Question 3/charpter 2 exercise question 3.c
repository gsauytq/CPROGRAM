#include <stdio.h>
#define PI 3.14f
#define F 4.0f/3.0f

int main(void)
{
	float a;

	printf("��������İ뾶��");
	scanf_s("%f", &a);
	printf("�������ǣ�%f", F * PI * a * a * a);

	return 0;
}