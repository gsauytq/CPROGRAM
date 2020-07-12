#include <stdio.h>

int main(void){
	int a,b,c,t1,t2;
	
	printf("请输入3个数：");
	scanf_s("%d %d %d",&a,&b,&c);
	t1=b;
	t2=c;
	b=a;
	c=t1;
	a=t2;
	printf("交换后的值：%d %d %d\n",a,b,c);
	return 0;
}