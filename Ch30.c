// typedef ����

// C���� C++���� ���Ǵ� Ű�����, ���ο� ������ Ÿ�Կ� ���� ������ ������ Ÿ�Կ� ���� ��Ī(alias)�� ����µ� ���ȴ�.
// typedef ������ ������ �����ϴ� �ڷ����� �� �̸��� �ο��Ѵ� ������ ������ ������ �ڷ��� ������ �����ϰ� ������ش�.

//typedef int myint;

// myint �� int�� ������ ���� ������ Ÿ������ ��޵Ǹ� int�� ���� �� �ִ� ��� ������ myint�� ��� ����

//#include <stdio.h>
//
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;
//
//int main(void)
//{
//	//���� ������ ����� �ڷ��� �̸��� ���� ���� 
//	typedef char CHAR;
//	typedef char* STR;
//
//	//typedef ���� ���� �ڷ����� ���� �ڷ����� ������ ������ ����
//	INT num = 3;
//	PINT ptr = &num;
//	UINT unum = 5;
//	CHAR ch = 'c';
//	STR str = "hello";
//
//	printf("%d %d %d\n", num, *ptr, unum);
//	printf("%c, %s\n", ch, str);
//}

// ����ü�� ����� ����
//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//}Point;
////typedef Ű���带 ����Ͽ� struct (int x; int y;} ��� ����ü�� Point��� ���ο� ������ Ÿ������ ����
////���� Point�� ����ü�� ������ ����� �����ϸ�, ��ǥ ���� �����ϴ� �뵵�� ���
//int main(void)
//{
//	Point p = { 3, 4 };
//	printf("%d %d", p.x, p.y);
//}

//Point�� ������ �����ϰ� �ʱ�ȭ�ϰ� ����ϴ� �ڵ��̴�.
//p������ Point ������ Ÿ������ ����Ǿ� ������, �ʱⰪ���� {3,4}�� �Ҵ��Ѵ�.

//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//}Point;
//
//typedef struct {
//	char name[30];
//	int age;
//}PERSON;
//
//typedef struct person PERSON;
//
//int main(void)
//{
//	Point position = { 30, 60 };
//	PERSON saram = { "�ڸ���", 15 };
//	printf("%d %d\n", position.x, position.y);
//	printf("%s %d\n", saram.name, saram.age);
//}

//#include <stdio.h>
//#define PEOPLE_NUM 3
//typedef struct {
//	int id;
//	char name[50];
//	int age;
//	float height;
//}Student;
//
////1. student ����ü�� ����� 3���� ��� ������ �����ϴ� �迭�� ����� ����ϴ� ���α׷�
////2. student ����ü�� ������ �л� ������ �����ϴ� ����ü�� ���� -> �л�('id')������ �߰��� ������
////���� 3���� �л� ������ �����ϴ� �迭�� ����� ����ϴ� ���α׷� �����
//int main(void)
//{
//	Student stu[PEOPLE_NUM];
//
//	for (int i = 0; i < PEOPLE_NUM; i++) {
//		printf("%d��° ��� ���� �Է�\n", i + 1);
//		printf("�л� id �Է� :");
//		scanf_s("%d", &stu[i].id);
//		getchar();
//		printf("�л� �̸� �Է� : ");
//		gets_s(stu[i].name, sizeof(stu[i].name));
//		printf("�л� ���� �Է� : ");
//		scanf_s("%d", &stu[i].age);
//		printf("�л� Ű �Է� : ");
//		scanf_s("%f", &stu[i].height);
//		printf("\n\n");
//	}
//
//	printf("�л�id\t�л� �̸�\t�л� ����\t�л� Ű\n");
//	for (int i = 0; i < PEOPLE_NUM; i++) {
//		printf("%d\t%s\t\t%d\t\t.2%f", stu[i].id, stu[i].name, stu[i].age, stu[i].height);
//		printf("\n");
//	}
//}

