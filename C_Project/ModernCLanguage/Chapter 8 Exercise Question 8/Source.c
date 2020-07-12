#include <stdio.h>
#define N 5

int main(void)
{
	double avg[N] = { 0 }, max[N], min[N];
	int	i, j = 1;
	double one[N], two[N], three[N], four[N], five[N];

	for (i = 0; i < N; i++, j++)
	{
		printf("请输入第%d位学生成绩：", j);
		scanf_s("%lf %lf %lf %lf %lf", &one[i], &two[i], &three[i], &four[i], &five[i]);
	}

	for (i = 0, j = 1; i < N; i++, j++)
	{
		printf("第%d位学生的总分：%lf\n", j, (one[i] + two[i] + three[i] + four[i] + five[i]));
	}

	for (i = 0, j = 1; i < N; i++, j++)
	{
		printf("第%d位学生的平均分：%lf\n", j, ((one[i] + two[i] + three[i] + four[i] + five[i]) / 5));
	}

	
	for (i = 0; i < N; i++)
	{
		avg[0] += one[i];
	}
	printf("第一门课平均分：%lf\n",avg[0] / 5);
	for (i = 0; i < N; i++)
	{
		avg[1] += two[i];
	}
	printf("第二门课平均分：%lf\n", avg[1] / 5);
	for (i = 0; i < N; i++)
	{
		avg[2] += three[i];
	}
	printf("第三门课平均分：%lf\n", avg[2] / 5);
	for (i = 0; i < N; i++)
	{
		avg[3] += four[i];
	}
	printf("第四门课平均分：%lf\n", avg[3] / 5);
	for (i = 0; i < N; i++)
	{
		avg[4] += five[i];
	}
	printf("第五门课平均分：%lf\n", avg[4] / 5);

	max[0] = min[0] = one[0];
	for (i = 1; i < N; i++)
	{
		if (one[i] > max[0])
			max[0] = one[i];
		if (one[i] < min[0])
			min[0] = one[i];
	}
	printf("第一门课最高分：%lf,最低分：%lf.\n", max[0], min[0]);
	
	max[1] = min[1] = two[0];
	for (i = 1; i < N; i++)
	{
		if (two[i] > max[1])
			max[1] = two[i];
		if (two[i] < min[1])
			min[1] = two[i];
	}
	printf("第二门课最高分：%lf,最低分：%lf.\n", max[1], min[1]);

	max[2] = min[2] = three[0];
	for (i = 1; i < N; i++)
	{
		if (three[i] > max[2])
			max[2] = three[i];
		if (three[i] < min[2])
			min[2] = three[i];
	}
	printf("第三门课最高分：%lf,最低分：%lf.\n", max[2], min[2]);

	max[3] = min[3] = four[0];
	for (i = 1; i < N; i++)
	{
		if (four[i] > max[3])
			max[3] = four[i];
		if (four[i] < min[3])
			min[3] = four[i];
	}
	printf("第四门课最高分：%lf,最低分：%lf.\n", max[3], min[3]);

	max[4] = min[4] = five[0];
	for (i = 1; i < N; i++)
	{
		if (five[i] > max[4])
			max[4] = five[i];
		if (five[i] < min[4])
			min[4] = five[i];
	}
	printf("第五门课最高分：%lf,最低分：%lf.\n", max[4], min[4]);

	return 0;
}