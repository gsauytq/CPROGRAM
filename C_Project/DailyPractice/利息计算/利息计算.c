#include <stdio.h>
#include <math.h>

int main(void)
{
	double money, year, rate;

	printf("Enter money:");
	scanf("%lf", &money);
	printf("Enter year:");
	scanf("%lf", &year);
	printf("Enter rate:");
	scanf("%lf", &rate);
	
	rate /= 100.0;
	printf("interest:%lf", (money * pow(1 + rate, year) - money));
	return 0;
}