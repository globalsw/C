//반복문
//프로그램에서 반복적으로 실행되는 코드를 작성할 때 사용한다.

// 1. while문

// 조건이 참인 동안 반복적으로 코드를 실행한다. while문의 구조는
// 다음과 같다.

// while(조건)
//{
//		반복적으로 실행될 코드 예) : 조건이 참이면 반복적으로 실행될 코드를 실행하고,
//조건이 거짓이면 반복문을 종료한다.
//}

// 2. do - while문

// do - while은 while문과 유사하지만 조건 검사를 반복문의 끝에서 수행한다.
// 예) 일단 한번은 반복문을 실행한 후 조건을 검사한다.

//do
//{
//		반복적으로 실행될 코드
//} while(조건)

//3. 중첩while
// 
// while문 안에 중첩이 가능하다.
// 
// while() {
// 
//		while()
// }
// 
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;//탈출용 변수
//	//탈출용 조건식
//	//탈출을 위한 연사자
//	while (i <= 10)
//	{
//		printf("Hello\n");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1; 
//	int sum = 0;
//
//	while (i <= 100) {
//		printf("i = %d\n", i);
//		sum += i;
//		i++;
//	}
//	printf("while 종료 이후 i = %d\n", i);
//	printf("1부터 100까지의 합 : %d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	int i = 1;
//	int sum = 0;
//
//	printf("숫자를 입력하세요 : ");
//	scanf_s("%d", &num);
//
//	while (i <= num) {
//		sum += i;
//		i++;
//	}
//	printf("%d", sum);
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	int dan = 2;
//
//	while (i < 10) {
//		printf("%d * %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int dan = 0;
//	int i = 1;
//
//	printf("출력하길 원하는 단을 입력하세요 : ");
//	scanf_s("%d", &dan);
//
//	while (i < 10) {
//		printf("%d * %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	//내가 짠 코드
//
//	//int odd = 1;
//	//int oddsum = 0;
//	//int even = 2;
//	//int evensum = 0;
//
//	//while (even < 102) {
//	//	evensum += even;
//	//	even += 2;
//	//}
//	//printf("짝수의 합은 %d 이다.\n", evensum);
//	//while (odd < 101) {
//	//	oddsum += odd;
//	//	odd += 2;
//	//}
//	//printf("홀수의 합은 %d 이다.", oddsum);
//
//	//선생님이 짠 코드
//	int i = 1;
//	int evensum = 0;
//	int oddsum = 0;
//
//	while (i <= 100) {
//		if (i % 2 == 0) {
//			evensum += i;
//		}
//		else {
//			oddsum += i;
//		}
//		i++;
//	}
//	printf("1부터 100까지 수중에 짝수합 = %d, 홀수합 = %d", evensum, oddsum);
//	return 0;
//}