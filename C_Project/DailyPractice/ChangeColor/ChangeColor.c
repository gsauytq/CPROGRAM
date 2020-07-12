#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	while (1) {
		for (int i = 0; i < 16; i++)
		{
			char str[20];
			sprintf(str, "color %x%x", i, 16 - i);
			system(str);
		}
	}
}