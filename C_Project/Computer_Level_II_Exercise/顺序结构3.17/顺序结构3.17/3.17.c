#include <stdio.h>

int main(void)
{
	int n=560,hour,minute;

	printf("560分钟等于");
	hour=n/60;
	minute=n%60;
	printf("%d小时%d分钟\n",hour,minute);

	return 0;
}