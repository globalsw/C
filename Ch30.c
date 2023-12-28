// typedef 선언

// C언어와 C++에서 사용되는 키워드로, 새로운 데이터 타입에 대해 기존의 데이터 타입에 대한 별칭(alias)를 만드는데 사용된다.
// typedef 선언은 기존에 존재하는 자료형에 새 이름을 부여한는 것으로 복잡한 유형의 자료형 선언을 간결하게 만들어준다.

//typedef int myint;

// myint 는 int와 완전히 같은 데이터 타입으로 취급되면 int가 사용될 수 있는 모든 곳에서 myint로 사용 가능

//#include <stdio.h>
//
//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;
//
//int main(void)
//{
//	//지역 내에서 사용할 자료형 이름에 대한 선언 
//	typedef char CHAR;
//	typedef char* STR;
//
//	//typedef 선언 이후 자료형은 기존 자료형과 동일한 역할을 수행
//	INT num = 3;
//	PINT ptr = &num;
//	UINT unum = 5;
//	CHAR ch = 'c';
//	STR str = "hello";
//
//	printf("%d %d %d\n", num, *ptr, unum);
//	printf("%c, %s\n", ch, str);
//}

// 구조체를 사용한 예시
//#include <stdio.h>
//
//typedef struct {
//	int x;
//	int y;
//}Point;
////typedef 키워드를 사용하여 struct (int x; int y;} 라는 구조체를 Point라는 새로운 데이터 타입으로 정의
////이제 Point는 구조체와 동일한 기능을 수행하며, 좌표 값을 저장하는 용도로 사용
//int main(void)
//{
//	Point p = { 3, 4 };
//	printf("%d %d", p.x, p.y);
//}

//Point를 변수로 선언하고 초기화하고 출력하는 코드이다.
//p변수는 Point 데이터 타입으로 선언되어 있으며, 초기값으로 {3,4}를 할당한다.

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
//	PERSON saram = { "코리아", 15 };
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
////1. student 구조체를 사용해 3명의 사람 정보를 저장하는 배열을 만들고 출력하는 프로그램
////2. student 구조체를 수정해 학생 정보를 저장하는 구조체로 변경 -> 학생('id')정보를 추가해 보세요
////이후 3명의 학생 정보를 저장하는 배열을 만들고 출력하는 프로그램 만들기
//int main(void)
//{
//	Student stu[PEOPLE_NUM];
//
//	for (int i = 0; i < PEOPLE_NUM; i++) {
//		printf("%d번째 사람 정보 입력\n", i + 1);
//		printf("학생 id 입력 :");
//		scanf_s("%d", &stu[i].id);
//		getchar();
//		printf("학생 이름 입력 : ");
//		gets_s(stu[i].name, sizeof(stu[i].name));
//		printf("학생 나이 입력 : ");
//		scanf_s("%d", &stu[i].age);
//		printf("학생 키 입력 : ");
//		scanf_s("%f", &stu[i].height);
//		printf("\n\n");
//	}
//
//	printf("학생id\t학생 이름\t학생 나이\t학생 키\n");
//	for (int i = 0; i < PEOPLE_NUM; i++) {
//		printf("%d\t%s\t\t%d\t\t.2%f", stu[i].id, stu[i].name, stu[i].age, stu[i].height);
//		printf("\n");
//	}
//}

