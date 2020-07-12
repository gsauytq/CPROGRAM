#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("short int limit:%d,%d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short int limit:%u,%u\n", 0, USHRT_MAX);
	printf("int limit:%d,%d\n", INT_MIN, INT_MAX);
	printf("unsigned int limit:%u,%u\n", 0, UINT_MAX);
	printf("long int limit:%ld,%ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long int limit:%u,%u\n", 0, ULONG_MAX);
	printf("long long limit:%lld,%lld\n", LLONG_MIN, LLONG_MAX);
	printf("char limit:%d,%d\n", CHAR_MIN, CHAR_MAX);
	printf("unsigned char limit:%u,%u\n", 0, UCHAR_MAX);
	printf("float limit:%.150f\n%.150f\n", FLT_MIN, FLT_MAX);
	printf("double limit:%.300lf\n%.300lf\n", DBL_MIN, DBL_MAX);
}