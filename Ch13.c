// 예시 : 학생이 10명이 있다. 그런데 이들의 평균 성적을 계산한다 가정을 해보자.

// 방법1.
// int student 1 ~ 10번까지 만들기 -> 다 더한 값의 나누기 10 

// 방법2.
// int s[10];
// 배열(array)
// 배열이란 : 동일한 타입의 데이터가 여러 개 저장되어 있는 데이터 저장 장소(구조)
// 배열 안에 들어있는 각각의 데이터들은 정수로 되어있는 번호(첨자)에 의하여 접근한다.
// 배열을 이용하면 여러 개의 값을 하나의 이름으로 처리할수 있다.

// 인덱스 : 배열 원소의 번호

// 배열은 다음과 같은 형식으로 정의된다.
// data_type arry_name[array_size];

// int arr[5]	// 크기가 5인 int형 배열 arr정의 

//배열은 인덱스(index)를 사용하여 각 요소에 접근이 가능해진다. 인덱스는 0부터 시작
//하여, 배열의 크기보다 작아야 한다.

//arr[0] = 10; // arr의 첫 번째 요소에 10을 저장한다.
//arr[1] = 20; // arr의 두 번째 요소에 20을 저장한다.

// 위 예제에서 arr[0]은 배열의 첫 번째 요소를 나타내며, arr[1]은 두번째 요소를 나타낸다.

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 10,20,30,40,50 }; //요소 5개를 가지는 int형 배열 arr
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//배열의 선언

// int      grade      [10]
// 자료형   배열이름    배열크기

// 자료형 : 배열 원소(타입)이 int 형이라는 것을 의미
// 배열이름 : 배열을 사용할 때 사용하는 이름이 grade 
// 배열크기 : 배열 원소의 개수가 10
// **인덱스(배열 번호)는 항상 0부터 시작해야 한다.

// int score[60];  //60개의 int형 값을 가지는 배열 score
// float cost[12]; // 12개의 float형 값을 가지는 배열 cost
// char name[50];  // 50개의 char형 값을 가지는 배열 name
// char src[10], dst[10]; //2개의 문자형 배열을 동시 선언 
// int index, days[70]; // 일반 변수와 배열을 동시 선언 

//#include <stdio.h>
//
//int main(void)
//{
//	int grade[10];
//
//	for (int i = 0; i < 10; i++) {
//		grade[i] = i + 1;
//	}
//
//	printf("=============================\n");
//	printf("인덱스                    값\n");
//	printf("=============================\n");
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d                         %d\n",i, grade[i]);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int grade[10] = { 31, 43, 92,87, 12, 16, 65, 43 , 90, 93 };
//	printf("=============================\n");
//	printf("인덱스                    값\n");
//	printf("=============================\n");
//
//	for (int i = 0; i < 10; i++) {
//		printf("%d                      %d\n", i, grade[i]);
//	}
//}

//#include <stdio.h>
//
//#define Students 5
//
//int main(void)
//{
//	int grade[Students] = { 0, };
//	int sum = 0;
//	int avg = 0;
//	//문제 : 학생들의 성적을 입력받아 성적평균을 내시오.
//	
//	//for문 풀이법
//	for (int i = 0; i < Students; i++) {
//		printf("학생 %d의 성적 : ", i + 1);
//		scanf_s("%d", &grade[i]);
//		//scanf_s("%d", grade + i);
//		sum += grade[i];
//	}
//
//	//while문 풀이법
//	//int i = 0;
//	//while (i < Students) {
//	//	printf("학생 %d번의 성적 : ", i + 1);
//	//	scanf_s("%d", &grade[i]);
//	//	sum += grade[i];
//	//	i++;
//	//}
//
//	avg = sum / Students;
//	printf("학생들의 성적 평균 : %d", avg);
//
//	return 0;
//}

// 널 문자와 문자열
//#include <stdio.h>
//
//int main(void)
//{
//	char goodbye[10] = "GOOD BYE!";
//	printf("%s", goodbye);
//}

//C언어에서 문자열은 널(NULL)문자로 끝나므로 문자열을 사용할 때는 항상 NULL 문자를 고려해야 한다.
//널 문자가 없는 문자열을 사용하면 문자열의 끝을 판별할 수 없으므로 메모리에 문제가 생긴다.

//문제 1 : 크기가 10인 int형 배열 선언, 모든 요소를 0으로 초기화 하는 코드 작성
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[10] = { 0, };
//  return 0;
//}

//문제 2 : 크기가 5인 double 배열 선언, 사용자로부터 값을 입력받아 배열 요소에 저장
//#include <stdio.h>
//
//int main(void)
//{
//	double arr[5] = { 0, };
//
//	for (int i = 0; i < 5; i++) {
//		printf("배열에 들어갈 값을 입력하세요 : ");
//		scanf_s("%lf", &arr[i]);
//	}
//	return 0;
//}

//문제 3: 크기가 7인 char형 배열을 선언 ,"hello" 문자열을 저장하는 코드 작성
//#include <stdio.h>
//
//int main(void)
//{
//	char arr[7] = "hello";
//	return 0;
//}


//문제 4 : 크기가 6인 int형 배열 선언, 첫번째 요소부터 여섯번째 요소까지 순서대로
// 1,2,3,4,5,6을 저장하는 코드 작성
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[6];
//
//	for (int i = 0; i < 6; i++) {
//		arr[i] = i + 1;
//	}
//	return 0;
//}

//문제 5 : 크기가 8인 int형 배열 선언, 배열의 요소를 1부터 8까지의 값으로 초기화하는 코드 작성
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[8];
//	arr[8] = { 1,2,3,4,5,6,7,8 };
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 10,5,7,3,8 };
//
//	//문제 : 배열의 요소들 중에서 최소값을 찾으시오.
//	int min = arr[0];
//
//	//for문 해결법
//	/*for (int i = 1; i < 5; i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}*/
//
//	//while문 해결법
//	int i = 1;
//	while (i < 5) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//		i++;
//	}
//	printf("배열에서 가장 작은 값 : %d", min);
//
//	return 0;
//}

//문제 : 배열에서 특정한 값을 찾아 그 위치를 출력하는 프로그램 작성
//없으면 배열에 없다고도 출력해야됨

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 2,5,8,1,3 };
//	int n;
//	int found = 0;
//
//	printf("찾을 값을 입력하세요 : ");
//	scanf_s("%d", &n);
//
//	for (int i = 0; i < 5; i++) {
//		if (n == arr[i]) {
//			printf("%d는 배열의 %d번째 차례에 있습니다.", n, i + 1);
//			found = 1;
//		}
//	}
//	if (found != 1) { // !found 랑 똑같음
//		printf("%d는 배열에 없습니다.", n);
//	}
//
//	return 0;
//}

