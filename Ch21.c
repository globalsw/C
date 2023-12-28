//#include <stdio.h>
//// 1. 조건문을 사용하여 정수를 입력받아 양수, 음수 ,0 중 어느 것인지 확인하는 프로그램을 작성
//int main(void)
//{
//	int num = 0;
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &num);
//
//	if (num > 0) {
//		printf("양수입니다.");
//	}
//	else if (num < 0) {
//		printf("음수입니다.");
//	}
//	else {
//		printf("0입니다.");
//	}
//}

//#include <stdio.h>
//// 2. 반복문을 사용하여 1부터 10까지의 합을 구하는 프로그램 작성
//int main(void)
//{
//	int sum = 0;
//	for (int i = 1; i < 11; i++) {
//		sum += i;
//	}
//	printf("1부터 10까지의 합은 %d이다.", sum);
//
//	return 0;
//}

//#include <stdio.h>
//// 3. 1차원 배열을 사용해 5개의 정수 입력받고, 그 합을 구하는 프로그램
//int main(void)
//{
//	int arr[5];
//	int sum = 0;
//
//	printf("5개의 정수를 입력하세요 : ");
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("입력받은 5개 정수의 합은 : %d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//// 4. 포인터를 사용해 두 개의 정수를 입력받아, 그 합과 차를 구하는 프로그램
//int main(void)
//{
//	int num1, num2, plus, minus;
//	int* p1;
//	int* p2;
//
//	p1 = &num1;
//	p2 = &num2;
//
//	printf("두 개의 정수를 입력하세요 : ");
//	scanf_s("%d %d", p1, p2);
//
//	plus = *p1 + *p2;
//
//	if (*p1 > *p2) {
//		minus = *p1 - *p2;
//	}
//	else {
//		minus = *p2 - *p1;
//	}
//
//	printf("두 정수의 합 : %d\n두 정수의 차 : %d", plus, minus);
//
//	return 0;
//}