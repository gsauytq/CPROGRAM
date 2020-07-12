#include <stdio.h>

int main(void)
{
	char ch[30] = { 0 };
	int i = 0;

	printf("ÇëÊäÈë×Ö·û´®£º");
	gets(ch);
	while (ch[i] != '\0')i++;
	printf("%sÓĞ%d¸ö×Ö·û¡£", ch, i);

	return 0;
}