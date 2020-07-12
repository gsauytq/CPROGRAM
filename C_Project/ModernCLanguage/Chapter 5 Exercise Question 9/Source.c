#include <stdio.h>

int main(void)
{
	int y1, m1, d1, y2, m2, d2, t = 0;

	printf("Enter first date(mm/dd/yy):");
	scanf_s("%d/%d/%d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy):");
	scanf_s("%d/%d/%d", &m2, &d2, &y2);

	if (y1 > y2)
		t = -1;
	else if (y1 < y2)
		t = 1;

	if (y1 == y2 && m1 > m2)
		t = -1;
	else if (y1 == y2 && m1 < m2)
		t = 1;

	if (y1 == y2 && m1 == m2 && d1 > d2)
		t = -1;
	else if (y1 == y2 && m1 == m2 && d1 < d2)
		t = 1;

	if (t == -1)
		printf("%d/%d/%02d is earlier than %d/%d/%02d", m2, d2, y2, m1, d1, y1);
	else if (t==1)
		printf("%d/%d/%02d is earlier than %d/%d/%02d", m1, d1, y1, m2, d2, y2);

	return 0;
}