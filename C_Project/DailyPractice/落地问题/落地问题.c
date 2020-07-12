/*一球从100米高度自由落下，每次落地后反跳会原高度的一半，再落下，求它在第十次落地时，共经过多少米？第十次反弹有多高？*/

#include <stdio.h>

int main(void)
{
	float sum=100.0, tan=sum/2, i;

	for (i = 2; i <= 10; i++)
	{
		sum = sum + tan;
		tan = tan / 2;
	}
	
	printf("第十次共经过%f米\n", sum);
	printf("第十次反弹%f米\n", tan);

	return 0;
}