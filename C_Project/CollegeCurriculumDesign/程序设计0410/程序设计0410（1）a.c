#include <stdio.h>

int main(void)
{
	char ch[30] = { 0 };
	int i = 0;

	printf("�������ַ�����");
	gets(ch);
	while (ch[i] != '\0')i++;
	printf("%s��%d���ַ���", ch, i);

	return 0;
}