// ����ü

// ����ü -> �ڹ��� Ŭ������, ���̽��� Ŭ���� C++
// 
// ����ü : �ϳ� �̻��� ������ �Ѳ����� ��� ����� '���ο� ������ �ڷ���'
// 
// ����ü�� ������ ���� �������� ���ǵȴ�.
// 
//struct ����ü �̸�
//{
//	������ Ÿ�� ���1 �̸�;
//	������ Ÿ�� ���2 �̸�;
//}

// ����ü �̸��� ���� ������� ����ü�� �̸��̸�, ����̸��� ����ü ���ο� �ִ� ����

//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//// ����ü�� ������ ���� ������ ���� �������� �����ϸ鼭 �����Ѵ�.
//struct Person p1; //Person ����ü Ÿ���� ���� p1 ����

//p1 ������ Person ����ü�� ����� name, age, height ���� ������ �ȴ�. 
//�� ����鿡 ������ ���� . �����ڸ� ���

//strcpy(p1.name, "john");
//p1.age = 25;
//p1.height = 175.5;
//
//����ü�� ���� ���� ����� ��� ���ο� �ڷ����� ����� ���̶� �迭ó�� ���� ���� ����ü�� ���� �� �ִ�.
//
//struct Person people[3]

//#include <stdio.h>
//#include <string.h>
//#pragma warning(disable:4996) 
//
//struct Person {
//	char name[20];
//	int age;
//	float height;
//};
//
//int main(void)
//{
//	struct Person p1; // Person ����ü Ÿ���� ���� p1 ���� 
//
//	strcpy(p1.name, "koreait");
//	p1.age = 25;
//	p1.height = 175.5;
//
//	printf("name : %s\n", p1.name);
//	printf("age : %d\n", p1.age);
//	printf("height : %f\n", p1.height);
//
//	printf("\n");
//	
//	struct Person people[3];
//	strcpy(people[0].name, "���̽���");
//	people[0].age = 30;
//	people[0].height = 160.3;
//	strcpy(people[1].name, "c���");
//	people[1].age = 60;
//	people[1].height = 180.3;
//	strcpy(people[2].name, "java���");
//	people[2].age = 40;
//	people[2].height = 150.3;
//
//	for (int i = 0; i < 3; i++) {
//		printf("Person %d\n", i + 1);
//		printf("Name : %s\n", people[i].name);
//		printf("Age : %d\n", people[i].age);
//		printf("Height : %f\n", people[i].height);
//	}
//}

//#include <stdio.h>
//
//struct person {
//	char name[30];
//	int age;
//};
//
//int main(void)
//{
//	// ����ü ���� ����� ���ÿ� �ʱ�ȭ
//	struct person boy = { "��ҳ�" , 12 };
//	struct person girl = { "�̼ҳ�", 9 };
//
//	printf("�ҳ��� �̸��� %s �̰� ���̴� %d �Դϴ�.", boy.name, boy.age);
//	printf("�ҳ��� �̸��� %s �̰� ���̴� %d �Դϴ�.", girl.name, girl.age);
//}
//
//#include <stdio.h>
//#include <string.h>
//
//struct student {
//	char name[20];
//	int id;
//	double score;
//};
//
//int main(void)
//{
//	struct student stu;
//
//	printf("�л� �̸��� �Է��ϼ��� (�ִ� 20�� ����) >>>>");
//	fgets(stu.name, sizeof(stu.name), stdin);
//
//	printf("�й��� �Է��ϼ��� (7�ڸ� ������ �ڿ���) >>>>");
//	scanf_s("%d", &stu.id);
//
//	printf("�л��� score�� �Է��ϼ��� (0���� 4.5 ������ �Ǽ�) : ");
//	scanf_s("%lf", &stu.score);
//
//	printf("\n�Է��� �л� ���� : \n");
//	printf("�̸� : %s\n", stu.name);
//	printf("�й� : %d\n", stu.id);
//	printf("Score : %.2lf\n", stu.score);
//}


// ���� 
// 1. ������ ������ �����ϴ� ���ڿ�(�ִ� 100��)
// 2. ������ ���ڸ� �����ϴ� ���ڿ�(�ִ� 50)
// 3. ������ ������ �����ϴ� �Ǽ�
// ����ü�� ������ �� ���� ������ �����ϴ� �Լ��� �����Ͻʽÿ�
// 1. ����ڷκ��� 3���� ���� ������ �Է¹޾� ����ü �迭�� �����Ѵ�.
// 2. �Էµ� ���� ������ ����Ѵ�.
// ������� : ���ڿ��� ������ �� �ִ� ������ ũ���� �迭�� ����ü ���� ���Խ��Ѿ� �Ѵ�.
// ������� : ����ڷκ��� ������ ����, ����, ������ �Է¹޾ƾ� �Ѵ�.
//#include <stdio.h>
//#define BOOK_COUNT 3
//
//struct Book{
//	char title[100];
//	char author[50];
//	double price;
//};
//
//void inputBooks(struct Book books[], int n)
//{
//	for (int i = 0; i < n; i++) {
//		printf("%d��° ������ ���� : ", i + 1);
//		gets_s(books[i].title, sizeof(books));
//		printf("%d��° ������ ���� : ", i + 1);
//		gets_s(books[i].author, sizeof(books));
//		printf("%d��° ������ ���� : ", i + 1);
//		scanf_s("%lf", &books[i].price);
//		getchar();
//		// while (getchar() != "\n"); // ���� ����
//	}
//}
//
//void printBooks(const struct Book books[], int n)
//{
//	printf("������ ����\t������ ����\t������ ����\n");
//	for (int i = 0; i < n; i++) {
//		printf("%s\t\t%s\t\t%.2lf", books[i].title, books[i].author, books[i].price);
//		printf("\n");
//	}
//}
//
//int main(void)
//{
//	struct Book books[BOOK_COUNT];
//	inputBooks(books, BOOK_COUNT);
//	printBooks(books, BOOK_COUNT);
//}

