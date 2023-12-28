//별찍기 문제

//1. 직각삼각형 별찍기 별찍기의 행수를 받은 뒤, 행 수만큼 별찍기가 되는 구조
//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("행 수를 입력하세요 : ");
//	scanf_s("%d", &height);
//
//	for (int i = 0; i < height; i++) {
//		for (int j = i; j < 2*i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}



//2. 역 직각삼각형 별찍기 별찍기의 행수를 받은 뒤, 행 수만큼 별찍기가 되는 구조

//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("행 수를 입력하세요 : ");
//	scanf_s("%d", &height);
//
//	for (int i = 0; i < height; i++) {
//		for (int j = i; j < height; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//선생님 코드
//for (i = height; i >= 1; i--) {
//	for (j = 1; j <= i; j++) {
//		printf("*");
//	}
//	printf("\n");
//}

//3. 피라미드 별찍기 높이를 입력받아 피라미드 높이만큼 별이 찍힌다.
//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("행 수를 입력하세요 : ");
//	scanf_s("%d", &height);
//
//	for (int i = 0; i < height; i++) {
//		for (int j = i; j < height - 1; j++) {
//			printf(" ");
//		}
//		for (int k = i; k < 3*i + 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//선생님 코드
//for (i = 1; i <= height; i++)[
//	for (j = 1; j <= height - i; j++) {
//		printf(" ");
//	}
//	for (k = 1; k <= 2 * i - 1; k++) {
//		printf("*");
//	}
//	printf("\n");
//]

