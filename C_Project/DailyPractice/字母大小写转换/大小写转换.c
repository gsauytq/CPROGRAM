#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch1,ch2;

	//Сдת��д
	printf("Please enter a string:");
	while ((ch1 = getchar()) != '\n') {
		if (ch1 >= 'a' && ch1 <= 'z')
			printf("%c", ch2 = ch1 - 32);
		if (ch1 >= 'A' && ch1 <= 'Z')
			printf("%c", ch1);
	}

	//��дתСд
	printf("Please enter a string:");
	while ((ch1 = getchar()) != '\n') {
		if (ch1 >= 'a' && ch1 <= 'z')
			printf("%c", ch1);
		if (ch1 >= 'A' && ch1 <= 'Z')
			printf("%c", ch1 + 32);
	}

	//��Сд����ת��
	printf("Please enter a string:");
	while ((ch1 = getchar()) != '\n') {
		if (ch1 >= 'a' && ch1 <= 'z')
			printf("%c", toupper(ch1));
		if (ch1 >= 'A' && ch1 <= 'Z')
			printf("%c", tolower(ch1));
	}

	return 0;
}