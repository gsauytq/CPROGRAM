#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch[30] = {'\0'};
	int i;

	printf("Enter message:");
	for (i = 0; i < 30; i++)
	{
		scanf_s("%c", &ch[i],sizeof(ch[i]));
		if (ch[i] == '\n')
			break;
		ch[i] = toupper(ch[i]);
		switch (ch[i]) {
		case 'A':ch[i] = '4';
			break;
		case 'B':ch[i] = '8';
			break;
		case 'E':ch[i] = '3';
			break;
		case 'I':ch[i] = '1';
			break;
		case 'O':ch[i] = '0';
			break;
		case 'S':ch[i] = '5';
			break;
		}
	}

	printf("In BIFF-speak:");
	for (i = 0; ch[i] != '\n'; i++)
	{
		printf("%c", ch[i]);
	}
	printf("!!!!!!!!!!\n");

	return 0;
}