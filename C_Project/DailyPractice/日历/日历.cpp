#include <stdio.h>
#include <stdlib.h>
//#include <graphics.h>
//#include <conio.h>

int year, month, day;
int Leap[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int Ordinary[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
char Weekday[7][4] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };

void printstar()
{
	printf("***************************************************\n");
}

void printtitle()
{
	printf("\t\tC language calendar\n\t\t    version 1.0\n");
}

void printweekday()
{
	for (int i = 0; i < 7; i++)
	{
		printf("%s\t", Weekday[i]);
	}
	printf("\n");
}

int leap(int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		return 1;
	else
		return 0;
}

int sumday(int year, int month, int Leap[], int Ordinary[])
{
	int i, sum = 0;
	for (i = 1900; i < year; i++)
	{
		if (leap(i) == 1)
			sum += 366;
		else
			sum += 365;
	}

	for (i = 0; i < month - 1; i++)
	{
		if (leap(year) == 1)
			sum += Leap[i];
		else
			sum += Ordinary[i];
	}
	
	return sum;
}

void printcalendar(int sum,int year,int month)
{
	int result, temp, i;

	result = (sum % 7) + 1;
	temp = 7 - result;

	for (i = 0; i < result; i++)
	{
		printf("\t");
	}
	
	if (leap(year) == 1)
	{
		for (i = 1; i <= Leap[month - 1]; i++)
		{
			printf("%d\t", i);
			if ((i==temp)||((i - temp) % 7 == 0))
				printf("\n");
		}
		printf("\n");
	}
	else
	{
		for (i = 1; i <= Ordinary[month - 1]; i++)
		{
			printf("%d\t", i);
			if ((i == temp) || ((i - temp) % 7 == 0))
				printf("\n");
		}
	}
	printf("\n");
}

int main(void)
{
	printf("请输入年月日（xxxx/xx/xx）：");
	scanf_s("%d/%d/%d", &year, &month, &day);

	int sum = sumday(year, month, Leap, Ordinary);

	printtitle();
	printstar();
	printweekday();
	printcalendar(sum, year, month);
	printstar();
	
	/*initgraph(800, 600);
	IMAGE bkimg;
	loadimage(&bkimg,"backImage.jpg");
	putimage(0, 0, &bkimg);
	
	_getch();
	closegraph();*/
	system("pause");
	return 0;
}