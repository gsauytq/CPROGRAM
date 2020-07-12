//#include <stdio.h>
//
//int main(void)
//{
//	int a[6] = { 3,7,8,10,13 }, i, temp;
//
//	printf("Enter a number:");
//	scanf_s("%d", &temp);
//
//	for (i = 6; i >= 1; i--)
//	{
//		if (a[i - 1] > temp)
//			a[i] = a[i - 1];
//		else 
//		{
//			a[i] = temp;
//			break;
//		}
//	}
//
//	printf("After sort:");
//	for (i = 0; i < 6; i++)
//	{
//		printf("%3d", a[i]);
//	}
//
//	return 0;
//}

#include <stdio.h>
void main() {
	int data, temp, k;
	static int a[9] = { -10,2,4,8,10,15,25,50 };
	printf("\nEnter a data:");
	scanf_s("%d", &data);
	for (k = 8; k >= 1; k--) {
		if (a[k - 1] > data) //逆序遍历数组元素，数组元素大于data,该元素就向后移动一位
		{
			a[k] = a[k - 1];
		}
		else {
			a[k] = data;    //数组元素小于data,把data放到该元素后面
			break;
		}
	}
	for (k = 0; k < 9; k++) {
		printf("%7d", a[k]);
	}
}