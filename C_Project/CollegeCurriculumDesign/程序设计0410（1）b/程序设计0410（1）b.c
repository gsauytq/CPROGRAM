#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[20];
	printf("�������ַ�����");
	gets(ch);
	printf("%s��%d���ַ���", ch, strlen(ch));
	return 0;
}