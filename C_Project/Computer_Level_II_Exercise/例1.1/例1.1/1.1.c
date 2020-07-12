#include <stdio.h>

int main(void){
	int max=0,n;
	printf("请输入数字：");
	do {
		scanf_s("%d",&n);
		if (n>max)
			max=n;
	}while (n>=0);

	printf("最大值：%d",max);

	return 0;
}