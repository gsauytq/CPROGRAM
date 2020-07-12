#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char* word);

int main(void)
{
	char charray[9];
	int result;

	printf("Enter a word:");
	scanf("%s", charray);

	result = compute_scrabble_value(charray);

	printf("Scrabble value:%d", result);
	return 0;
}

int compute_scrabble_value(const char* word)
{
	int number = 0;

	while (*word)
	{
		switch (toupper(*word))
		{
		case 'A':case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
			number += 1; break;
		case 'D':case 'G':
			number += 2; break;
		case 'B':case 'C':case 'M':case 'P':
			number += 3; break;
		case 'F':case 'H':case 'V':case 'W':case 'Y':
			number += 4; break;
		case 'k':
			number += 5; break;
		case 'J':case 'X':
			number += 8; break;
		case 'Q':case 'Z':
			number += 10; break;
		}
		word++;
	}

	return number;
}