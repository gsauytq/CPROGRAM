#include <stdio.h>
#define N 3

struct score {
	int math;
	int chinese;
	int english;
};

struct student {
	int num;
	char name[20];
	struct score result;
}Student[3];

int main(void)
{
	int i;

	printf("Please enter students imformation(num/name/math/chinese/english):\n");
	for (i = 0; i < N; i++) {
		scanf("%d%s%d%d%d",
			&Student[i].num, Student[i].name,
			&Student[i].result.math, &Student[i].result.chinese, &Student[i].result.english);
	}

	printf("Student imformation:\n");
	for (i = 0; i < N; i++)
	{
		printf("Num:%d,Name:%s,Math score:%d,Chinese score:%d,English score:%d\n",
			Student[i].num, Student[i].name, 
			Student[i].result.math, Student[i].result.chinese, Student[i].result.english);
	}

	return 0;
}