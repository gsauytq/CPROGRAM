#include <stdio.h>

int main(void){
	int max=0,n;
	printf("���������֣�");
	do {
		scanf_s("%d",&n);
		if (n>max)
			max=n;
	}while (n>=0);

	printf("���ֵ��%d",max);

	return 0;
}