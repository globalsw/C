// 다차원 배열

// 다차원 배열은 2차원 이상의 배열을 의미한다.
// 실질적으로 사용하는 배열은 2차원 , 3차원 배열이다.

// int arr[10]; //길이가 10인 1차원 배열
// int arr[5][3]; //세로 길이가 5 , 가로 길이가 3인 2차원배열
// int arr[2][3][4]; //높이가 2, 세로 길이가 3, 가로 길이가 4인 3차원배열

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[2][3] = {
//		{1,2,3},
//		{4,5,6}
//	};
//	// 배열의 모든 요소 출력
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	// 배열의 요소값을 모두 10으로 변경, 출력
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			arr[i][j] = 10;
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}    

// 다차원 배열 인수
//#include <stdio.h>
//// #define : C언어에서 전처리기 지시문이다. 컴파일 과정 이전에 생성되며 주로 상수, 매크로 함수 등을 정의하는데 사용한다.
//#define years 3
//#define products 5
//int sum(int grade[years][products])
//{
//	int y, p;
//	int total = 0;
//	for (int y = 0; y < years; y++) {
//		for (int p = 0; p < products; p++) {
//			total += grade[y][p];
//		}
//	}
//	return total;
//}
//int main(void)
//{
//	int sales[years][products] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	int total_sale;
//	total_sale = sum(sales);
//	printf("총 매출은 %d\n", total_sale);
//}


//문제 : 학급의 평균성적을 구하고, 전체 학생들의 평균성적도 구하시오
//#include <stdio.h>
//#define Class 3
//#define Student 5 
//
//int main(void)
//{
//	int s[Class][Student] = {
//		{0,1,2,3,4},
//		{10,11,12,13,14},
//		{20,21,22,23,24}
//	};
//	int class1Avg = 0, class2Avg = 0, class3Avg = 0, allStuAvg = 0;
//	int class1Total = 0, class2Total = 0, class3Total = 0, allStuTotal = 0;
//
//	for (int j = 0; j < Student; j++) {
//		class1Total += s[0][j];
//		class2Total += s[1][j];
//		class3Total += s[2][j];
//		class1Avg = class1Total / Student;
//		class2Avg = class2Total / Student;
//		class3Avg = class3Total / Student;
//	}
//	allStuTotal = class1Total + class2Total + class3Total;
//	allStuAvg = allStuTotal / (Class * Student);
//
//	printf("1학급 학생들의 평균성적 : %d\n2학급 학생들의 평균성적 : %d\n3학급 학생들의 평균성적 : %d\n", class1Avg, class2Avg, class3Avg);
//	printf("전체 학생들의 평균성적 : %d", allStuAvg);
//
//	return 0;
//}


//#include <stdio.h>
//#define Class 3
//#define Student 5 
////문제 : 학급의 평균성적을 구하고, 전체 학생들의 평균성적도 구하시오
//int main(void)
//{
//	int s[Class][Student] = {
//		{0,1,2,3,4},
//		{10,11,12,13,14},
//		{20,21,22,23,24}
//	};
//	int classAvg[10] = { 0 };
//	int classTotal[10] = { 0 };
//	int allStudentTotal = 0;
//	int allStudentAvg = 0;
//
//	for (int i = 0; i < Class; i++) {
//		for (int j = 0; j < Student; j++) {
//			classTotal[i] += s[i][j];
//			classAvg[i] = classTotal[i] / Student; 	
//		}
//	}
//	
//	allStudentTotal = classTotal[0] + classTotal[1] + classTotal[2];
//	allStudentAvg = allStudentTotal / (Class * Student);
//	printf("학급의 평균성적 : %d %d %d\n", classAvg[0], classAvg[1], classAvg[2]);
//	printf("전체 학생들의 평균성적 : %d", allStudentAvg);
//	return 0;
//}


//#include <stdio.h>
//#define Class 3
//#define Student 5 
////문제 : 학급의 평균성적을 구하고, 전체 학생들의 평균성적도 구하시오
//int main(void)
//{
//	int s[Class][Student] = {
//		{0,1,2,3,4},
//		{10,11,12,13,14},
//		{20,21,22,23,24}
//	};
//	int total = 0, subtotal;
//
//	for (int i = 0; i < Class; i++) {
//		subtotal = 0;
//		for (int j = 0; j < Student; j++) {
//			subtotal += s[i][j];
//		}
//		printf("학급 %d의 평균서적 : %d\n", i, subtotal / Student);
//		total += subtotal;
//	}
//	printf("전체 학생들의 평균성적 : %d", total / (Class * Student));
//
//	return 0;
//}

//#include <stdio.h>
//#define MAX_SIZE 10
//// 문제 : 배열을 이용해서 데이터를 저장하시오 예) array[0] 는 1이 들어가고 이후로 +1이 되도록 한다.
//// 배열을 이용해서 데이터를 출력
//int main(void)
//{
//	int array[MAX_SIZE];
//	
//	for (int i = 0; i < MAX_SIZE; i++) {
//		array[i] = i + 1;
//		printf("%d ", array[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#define ROWS 3
//#define COLS 4
//// 문제 : 배열을 이용해서 데이터를 저장하시오 예) array[0] 는 1이 들어가고 이후로 +1이 되도록 한다.
//// 배열을 이용해서 데이터를 출력
//int main(void)
//{
//	int array[ROWS][COLS];
//
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			array[i][j] = i * COLS + j + 1;
//			printf("%d ", array[i][j]);
//		}
//	}
//}

//#include <stdio.h>
////크기가 3x3dls 2차원 배열 선언, 사용자로부터 9개의 정수 값을 입력받아 배열에 저장한 뒤, 배열 값들 출력
//#define ROWS 3
//#define COLS 3
//
//int main(void)
//{
//	int array[ROWS][COLS];
//
//	printf("정수 9개를 입력하세요 : \n");
//
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			scanf_s("%d", &array[i][j]);
//			// &arr : 배열 전체를 가르키는 주소가 된다. 
//			// arr : 배열의 첫번째 요소를 가리키는 주소가 된다. 1차원 배열을 가리키는 포인터 이다.
//			// &를 빼면 안되는 경우 : 포인터의 자료형이 다르게 되므로 컴파일러는 오류를 발생시키게 된다. 혹은 런타임 에러가 발생할 수 있다.
//			//						&를 빼면 2차원 배열의 포인터와 1차원 배열의 포인터 간에 형태가 일치하지 않아 일어나는 문제이다.
//		}
//	}
//	printf("배열에 저장된 값 : \n\n");
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			printf("%d ", array[i][j]);
//;
//		}
//		printf("\n");
//	}
//
//	printf("%p\n", array);
//	printf("%p", &array);
//}