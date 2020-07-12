#include <stdio.h>

int main(void)
{
	printf("%d %d %d %d %d %d %d",
		sizeof(unsigned int), sizeof(int), sizeof(float), sizeof(double),
		sizeof(short int), sizeof(long int), sizeof(long long int));

	return 0;
}