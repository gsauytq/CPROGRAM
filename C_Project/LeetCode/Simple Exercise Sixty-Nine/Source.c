#include <stdio.h>

int mysqrt(int x);

int main(void)
{
	int x, x1;

	printf("Please enter a number:");
	scanf_s("%d", &x);

	x1 = mysqrt(x);
	printf("%d", x1);
	return 0;
}

int mysqrt(int x)
{
	int l = 0, r = x, ans = -1;

	while (l <= r)
	{
		int mid = (r + l) / 2;
		if (mid * mid <= x)
		{
			ans = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return ans;
}