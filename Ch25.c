// 재귀호출 함수

// 재귀 : 원래 자기 자리로 가다. 회귀하다
// 재귀함수 : 함수 내에서 자기 자신을 호출한다.

// 팩토리얼 함수
//#include <stdio.h>
//
//int factorial(int n)
//{
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return n * factorial(n - 1);
//	}
//}
// n이 0일 때는 1을 반환하고 그 외에는 n과 factorial(n-1)을 곱한 값을 반환한다.
// 
//int main(void)
//{
//	int n = 5;
//	int result = factorial(n);
//	printf("%d = %d\n", n, result);
//
//	return 0;
//}

// 피보나치

//#include <stdio.h>
//
//long long int fibonacci(int n)
//{
//	if (n <= 1) {
//		return n;
//	}
//	else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}
//int main(void)
//{
//	int n, j;
//
//	printf("몇 개의 피보나치 수열을 생성할까요? ");
//	scanf_s("%d", &n);
//
//	printf("피보나치 수열 : ");
//	for (int i = 0; i < n; i++) {
//		printf("%lld ", fibonacci(i));
//	}
//}

//#include <stdio.h>
//
//void sayHello()
//{
//	printf("Hello\n");
//	sayHello();
//}
//
//int main(void)
//{
//	sayHello();
//
//	return 0;
//}

// 재귀함수는 count 변수를 두는게 좋다.

//#include <stdio.h>
//
//int sayHello(int cnt)
//{
//	printf("Hello\n");
//
//	//cnt가 50이 되면 더 이상 재귀호출을 하지 못하게 막는다.
//	if (cnt != 50) {
//		sayHello(cnt+ 1);
//	}
//}
//
//int main(void)
//{
//	sayHello(1);
//
//	return 0;
//}

//#include <stdio.h>
//// 자연수 n을 입력받아 1 부터 n까지의 합을 구하는 sum을 재귀 함수로 구현
//int sum(int n)
//{
//	if (n == 0) {
//		return 0;
//	}
//	else {
//		return n + sum(n - 1);
//	}
//}
//
//int main(void)
//{
//	int num;
//	printf("숫자를 입력하시오 : ");
//	scanf_s("%d", &num);
//
//	printf("1부터 입력한 숫자까지의 합은 : ");
//	printf("%d", sum(num));
//
//	return 0;
//}

//#include <stdio.h>
//// 문제 : 사용자로부터 양의 정수 n을 입력받아서 n부터 1까지의 숫자를 역순으로 출력하는 함수
////		재귀함수 사용, 음수로 시작할 시 : 음수는 팩토리얼을 계산할 수 없습니다. 가 떠야한다.
//void print(int n)
//{
//	if (n < 0) {
//		printf("음수는 팩토리얼을 계산할 수 없습니다.");
//	}
//
//	if (n > 0) {
//		printf("%d ", n);
//		print(n - 1);
//	}
//}
//int main(void)
//{
//	int n;
//	printf("양의 정수를 입력하시오 : ");
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}

#include <stdio.h>
//문제 : 다음과 같은 2차원 배열이 주어졌다. 
// 이 배열을 이용하여 다음의 작업을 수행하는 프로그램 작성
//1. 배열 포인터를 사용하여 배열의 모든 원소을 출력
//2. 배열 포인터를 사용하여 배열의 각 행의 합을 계산하고 출력
//3. 배열 포인터를 사용하여 배열의 각 열의 평균을 계산하고 출력(평균은 소수점까지 받아야 한다.)
//int main(void)
//{
//	int arr[3][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//
//	int(*p)[4] = arr;
//	int csum = 0, rsum = 0;
//	double ravg = 0;
//	printf("1. 배열 포인터를 사용하여 배열의 모든 원소을 출력\n");
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", *(*(p + i) +j));
//		}
//		printf("\n");
//	}
//
//	printf("\n2. 배열 포인터를 사용하여 배열의 각 행의 합을 계산하고 출력\n");
//	for (int i = 0; i < 3; i++) {
//		csum = 0;
//		for (int j = 0; j < 4; j++) {
//			csum += *(*(p + i) + j);
//		}
//		printf("%d행의 합은 : %d\n", i, csum);
//	}
//
//	printf("\n3. 배열 포인터를 사용하여 배열의 각 열의 평균을 계산하고 출력(평균은 소수점까지 받아야 한다.)\n");
//	for (int j = 0; j < 4; j++) {
//		rsum = 0;
//		for (int i = 0; i < 3; i++) {
//			rsum += *(*(p + i) + j);
//			ravg = rsum / 3;
//		}
//		//printf("%d열의 합은 : %d\n", j, rsum);
//		printf("%d열의 평균은 : %.2lf\n", j, ravg);
//	}
//	return 0;
//}

