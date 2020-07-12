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
void descendingorder(void); //����
void ascendingorder(void);  //����
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
			printf("�Ƿ������Y/N):");
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
	printf("\n\n\t\t\tѧ������ϵͳ��C���԰棩\n");
	printf("\t--------------------------------------------------\n");
	printf("\t\t\ta-----ѧ����Ϣ�⽨��\n");
	printf("\t\t\tb-----ѧ����Ϣ��ѯ\n");
	printf("\t\t\tc-----ѧ����Ϣ���\n");
	printf("\t\t\td-----ѧ����Ϣɾ��\n");
	printf("\t\t\tq-----�˳�ϵͳ\n");
}

void createstudentdata()
{
	system("CLS");
	printf("ѧ����Ϣ�⽨����\n");
	printf("a-----����ѧ����Ϣ\n");
	printf("b-----����ѧ����Ϣ\n");
	printf("c-----���ѧ����Ϣ\n");

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

	printf("������ѧ����Ϣ��");
	printf("ѧ��\t����\t�Ա�\t����\t�꼶\t�༶\t��ѧ\tӢ��\t�����");
	
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

	printf("�Ƿ�д���ļ�(y/n):");
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
	printf("ѡ�����������\n");
	printf("a-----��ѧ�Ų���\n");
	printf("b-----����������\n");
	printf("c-----���꼶����\n");
	printf("d-----���༶����\n");
	printf("e-----���ɼ�����\n");

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

	printf("������Ҫ��ѯ��ѧ�ţ�");
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

	printf("�Ƿ������ѯ(y/n)��");
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

	printf("������Ҫ��ѯ��������");
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

	printf("�Ƿ������ѯ(y/n)��");
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

	printf("������Ҫ��ѯ���꼶��");
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

	printf("�Ƿ������ѯ(y/n)��");
	if (tolower(getchar()) == 'y')
	{
		gradeseek();
	}
	else
	{
		searchdata();
	}
}