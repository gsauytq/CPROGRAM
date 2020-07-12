#include <stdio.h>
#include <ctype.h>

int main(void)
{
	unsigned int n, a[16] = { 0 }, i;

	while (1) {
		printf("请输入一个数：");
		scanf_s("%d", &n);
		for (i = 15; i >= 0; i--) {
			if (n == 0)
				break;
			a[i] = (n % 2);
			n /= 2;
		}

		for (i = 0; i < 16; i++) {
			printf("%d", a[i]);
		}
		printf("\n");
		getchar();

		char s='\0';
		printf("是否继续(Y/N)：");
		scanf_s("%c", &s,sizeof(char));
		if ('Y' == toupper(s))
			continue;
		else if ('N' == toupper(s))
			break;
	}

	return 0;
}