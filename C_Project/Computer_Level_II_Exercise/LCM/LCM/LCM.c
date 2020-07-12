#include<stdio.h>

int max(int a,int b,int c);
int com(int i);
int num1,num2,num3;
int main(void)
{
	printf("input three number:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("最小公倍数为：%d",max(num1,num2,num3));
	return ;
}
int max(int a,int b,int c)
{
	int i;
	if(a>b)
	{
		if(a>c)
		i=a;
		else
		i=c;
	 } 
	else
	{
		if(b>c)
		i=b;
		else
		i=c;
	}
	return com(i);
}


int com(int i)
{
	if(i%num1==0&&i%num2==0&&i%num3==0)
		return i;
	else
		com(i+1);
}
