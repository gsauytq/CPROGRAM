#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch[20];
	printf("ÇëÊäÈë×Ö·û´®£º");
	gets(ch);
	printf("%sÓĞ%d¸ö×Ö·û¡£", ch, strlen(ch));
	return 0;
}