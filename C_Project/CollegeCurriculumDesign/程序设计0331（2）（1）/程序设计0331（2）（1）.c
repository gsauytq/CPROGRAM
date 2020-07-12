#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j;

	printf("Please enter a integer:");
	scanf("%d", &i);

	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0) 
		{
			printf("%d is not prime", i);
			break;
		}
		else
		{
			printf("%d is prime.", i);
			break;
		}
		
	}

	return 0;
	
}