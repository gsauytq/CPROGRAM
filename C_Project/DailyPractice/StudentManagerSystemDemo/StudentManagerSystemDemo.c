#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define NUMBER_MAX 40

typedef struct STU {
	char id[12];                              
	char name[10];                            
	char gender[3];                           
	int age;                                  
	char grade[5];							  
	char class[5];                            
	int score[3];							  
}student;

student data[NUMBER_MAX];

void maininterface(void);
void createstudentdata(void);
void searchdata(void);
void inputdata(void);
void outputdata(void);
void deletedata(void);
void sortdata(void);
void newdata(void);
void descendingorder(void); //降序
void ascendingorder(void);  //升序
void importdata(void);
void exportdata(void);
void adddata(void);
void averagescore(void);
void totalscore(void);
void maxscore(void);
void minscore(void);
void idseek(void);
void nameseek(void);
void gradeseek(void);
void classseek(void);
void scoreseek(void);


int main()
{
	while (1)
	{
		maininterface();
		switch (tolower(getchar())) {
		case 'a':createstudentdata();
			break;
		case 'b':searchdata();
			break;
		case 'c':outputdata();
			break;
		case 'd':deletedata();
			break;
		case 'q':exit(0);
			break;
		default: {
			printf("是否继续（Y/N):");
			if (getchar() == 'Y')
				continue;
			else
				exit(0);
		}
		}
	}
	
	return 0;
}

void maininterface()
{
	printf("\n\n\t\t\t学生管理系统（C语言版）\n");
	printf("\t--------------------------------------------------\n");
	printf("\t\t\ta-----学生信息库建立\n");
	printf("\t\t\tb-----学生信息查询\n");
	printf("\t\t\tc-----学生信息输出\n");
	printf("\t\t\td-----学生信息删除\n");
	printf("\t\t\tq-----退出系统\n");
}

void createstudentdata()
{
	system("CLS");
	printf("学生信息库建立：\n");
	printf("a-----导入学生信息\n");
	printf("b-----导出学生信息\n");
	printf("c-----添加学生信息\n");

	switch (tolower(getchar())) {
	case 'a':importdata();
		break;
	case 'b':exportdata();
		break;
	case 'c':adddata();
		break;
	default: {
		system("CLS");
		maininterface();
	}
	}
}

void adddata()
{
	int i;

	printf("请输入学生信息：");
	printf("学号\t姓名\t性别\t年龄\t年级\t班级\t数学\t英语\t计算机");
	
	for (i = 0; i < NUMBER_MAX; i++)
	{
		scanf_s("%s", &data[i].id);
		scanf_s("%s", &data[i].name);
		scanf_s("%s", &data[i].gender);
		scanf_s("%d", &data[i].age);
		scanf_s("%s", &data[i].grade);
		scanf_s("%s", &data[i].class);
		scanf_s("%d", &data[i].score[0]);
		scanf_s("%d", &data[i].score[1]);
		scanf_s("%d", &data[i].score[2]);
	}

	printf("是否写入文件(y/n):");
	if (tolower(getchar()) == 'y')
	{

	}
	else
	{
		system("CLS");
		createstudentdata();
	}
}

void searchdata()
{
	system("CLS");
	printf("选择查找条件：\n");
	printf("a-----按学号查找\n");
	printf("b-----按姓名查找\n");
	printf("c-----按年级查找\n");
	printf("d-----按班级查找\n");
	printf("e-----按成绩查找\n");

	switch (tolower(getchar())) {
	case 'a':idseek();
		break;
	case 'b':nameseek();
		break;
	case 'c':gradeseek();
		break;
	case 'd':classseek();
		break;
	case 'e':scoreseek();
		break;
	default: {
		system("CLS");
		maininterface();
	}
	}
}

void idseek()
{
	system("CLS");
	char* import_id;
	student id;
	int i;

	printf("请输入要查询的学号：");
	scanf_s("%s", import_id);

	for (i = 0; i < NUMBER_MAX; i++)
	{
		if (strcmp(data[i].id, import_id) == 0)
		{
			id = data[i];
		}
	}
	
	printf("%s  %s  %s  %d %s  %s  %d %d %d",
		id.id, id.name, id.gender, id.age, id.grade, id.class, id.score[0], id.score[1], id.score[2]);

	printf("是否继续查询(y/n)：");
	if (tolower(getchar()) == 'y')
	{
		idseek();
	}
	else
	{
		searchdata();
	}
}

void nameseek()
{
	system("CLS");
	char* import_name;
	student name;
	int i;

	printf("请输入要查询的姓名：");
	scanf_s("%s", import_name);

	for (i = 0; i < NUMBER_MAX; i++)
	{
		if (strcmp(data[i].name, import_name))
		{
			name = data[i];
		}
	}

	printf("%s  %s  %s  %d %s  %s  %d %d %d",
		name.id, name.name, name.gender, name.age, name.grade, name.class, name.score[0], name.score[1], name.score[2]);

	printf("是否继续查询(y/n)：");
	if (tolower(getchar()) == 'y')
	{
		nameseek();
	}
	else
	{
		searchdata();
	}
}

void gradeseek()
{
	system("CLS");
	char* import_grade;
	student grade[NUMBER_MAX];
	int i, j = 0;

	printf("请输入要查询的年级：");
	scanf_s("%s", import_grade);

	for (i = 0; i < NUMBER_MAX; i++)
	{
		if (strcmp(data[i].grade, import_grade))
		{
			grade[j++] = data[i];
		}
	}

	for (i = 0; i < j; i++) {
		printf("%s  %s  %s  %d %s  %s  %d %d %d",
			grade[i].id, grade[i].name, grade[i].gender, grade[i].age, grade[i].grade, 
			grade[i].class, grade[i].score[0], grade[i].score[1], grade[i].score[2]);
	}

	printf("是否继续查询(y/n)：");
	if (tolower(getchar()) == 'y')
	{
		gradeseek();
	}
	else
	{
		searchdata();
	}
}