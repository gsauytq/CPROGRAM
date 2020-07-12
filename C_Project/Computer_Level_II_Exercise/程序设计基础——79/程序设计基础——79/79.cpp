#include <stdio.h>

int main(void)
{
	int a=64,b=8;

	printf("%d %d",(a&b)||(a&&b),(a|b)&&(a||b));

	return 0;
}