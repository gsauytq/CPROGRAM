#include <stdio.h>
#include <string.h>

int main(void)
{
	char char_array[] = { "acdbeadbaacdebc" }, t;
	int i, j;

	for (i = 0; i < strlen(char_array) - 1; i++)
	{
		for (j = i + 1; j < strlen(char_array); j++)
		{
			if (char_array[i] > char_array[j])
			{
				t = char_array[i];
				char_array[i] = char_array[j];
				char_array[j] = t;
			}
		}
	}

	puts(char_array);
}