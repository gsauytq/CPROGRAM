#include <stdio.h>

int main(void)
{
	char ch[100];
	int i, nx[26] = { 0 }, nd[26] = { 0 };

	printf("Please enter a string:");
	gets_s(ch, sizeof(ch) - 1);

	for (i = 65; i <= 90; i++)
	{
		printf("%c  ", i);
	}
	printf("\n");

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			nx[ch[i] - 'A']++;
		}
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d  ", nx[i]);
	}
	printf("\n");

	for (i = 97; i <= 122; i++)
	{
		printf("%c  ", i);
	}
	printf("\n");

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			nd[ch[i] - 'a']++;
		}
	}

	for (i = 0; i < 26; i++)
	{
		printf("%d  ", nd[i]);
	}
	printf("\n");

	return 0;
}