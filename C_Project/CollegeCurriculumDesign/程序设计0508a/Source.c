#include <stdio.h>

struct student {
	int num;
	char name[20];
	int math;
	int chinese;
	int english;
};

int main(void)
{
	struct student Stuinformation[3] = { {1,"Zhangsan",90,86,92},{2,"Lisi",88,75,78},{3,"Wangwu",91,74,65} };

	printf("Student information:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("Num:%d,Name:%s,Math score:%d,Chinese score:%d,English score:%d\n",
			Stuinformation[i].num, Stuinformation[i].name,
			Stuinformation[i].math, Stuinformation[i].chinese, Stuinformation[i].english);
	}

	return 0;
}