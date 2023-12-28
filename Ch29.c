// 구조체

// 구조체 -> 자바의 클래스가, 파이썬의 클래스 C++
// 
// 구조체 : 하나 이상의 변수를 한꺼번에 묶어서 만드는 '새로운 유형의 자료형'
// 
// 구조체는 다음과 같은 형식으로 정의된다.
// 
//struct 구조체 이름
//{
//	데이터 타입 멤버1 이름;
//	데이터 타입 멤버2 이름;
//}

// 구조체 이름은 새로 만들어질 구조체의 이름이며, 멤버이름은 구조체 내부에 있는 변수

//struct Person
//{
//	char name[20];
//	int age;
//	float height;
//};
//// 구조체를 선언할 때는 다음과 같이 변수명을 지정하면서 선언한다.
//struct Person p1; //Person 구조체 타입의 변수 p1 선언

//p1 변수는 Person 구조체의 멤버인 name, age, height 각각 가지게 된다. 
//이 멤버들에 접근할 때는 . 연산자를 사용

//strcpy(p1.name, "john");
//p1.age = 25;
//p1.height = 175.5;
//
//구조체는 여러 개의 멤버를 묶어서 새로운 자료형을 만드는 것이라 배열처럼 여러 개의 구조체를 만들 수 있다.
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
//	struct Person p1; // Person 구조체 타입의 변수 p1 선언 
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
//	strcpy(people[0].name, "파이썬언어");
//	people[0].age = 30;
//	people[0].height = 160.3;
//	strcpy(people[1].name, "c언어");
//	people[1].age = 60;
//	people[1].height = 180.3;
//	strcpy(people[2].name, "java언어");
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
//	// 구조체 변수 선언과 동시에 초기화
//	struct person boy = { "김소년" , 12 };
//	struct person girl = { "이소녀", 9 };
//
//	printf("소년의 이름은 %s 이고 나이는 %d 입니다.", boy.name, boy.age);
//	printf("소녀의 이름은 %s 이고 나이는 %d 입니다.", girl.name, girl.age);
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
//	printf("학생 이름을 입력하세요 (최대 20자 이하) >>>>");
//	fgets(stu.name, sizeof(stu.name), stdin);
//
//	printf("학번을 입력하세요 (7자리 이하의 자연수) >>>>");
//	scanf_s("%d", &stu.id);
//
//	printf("학생의 score을 입력하세요 (0에서 4.5 사이의 실수) : ");
//	scanf_s("%lf", &stu.score);
//
//	printf("\n입력한 학생 정보 : \n");
//	printf("이름 : %s\n", stu.name);
//	printf("학번 : %d\n", stu.id);
//	printf("Score : %.2lf\n", stu.score);
//}


// 문제 
// 1. 도서의 제목을 저장하는 문자열(최대 100자)
// 2. 도서의 저자를 저장하는 문자열(최대 50)
// 3. 도서의 가격을 저장하는 실수
// 구조체를 정의한 후 다음 동작을 수행하는 함수를 구현하십시오
// 1. 사용자로부터 3권의 도서 정보를 입력받아 구조체 배열에 저장한다.
// 2. 입력된 도서 정보를 출력한다.
// 참고사항 : 문자열을 저장할 수 있는 적절한 크기의 배열을 구조체 내에 포함시켜야 한다.
// 참고사항 : 사용자로부터 도서의 제목, 저자, 가격을 입력받아야 한다.
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
//		printf("%d번째 도서의 제목 : ", i + 1);
//		gets_s(books[i].title, sizeof(books));
//		printf("%d번째 도서의 저자 : ", i + 1);
//		gets_s(books[i].author, sizeof(books));
//		printf("%d번째 도서의 가격 : ", i + 1);
//		scanf_s("%lf", &books[i].price);
//		getchar();
//		// while (getchar() != "\n"); // 버퍼 정리
//	}
//}
//
//void printBooks(const struct Book books[], int n)
//{
//	printf("도서의 제목\t도서의 저자\t도서의 가격\n");
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

