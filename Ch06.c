//if 문
//조건문을 작성할 때 사용하는 구문이다. if문은 특정 조건이 참(true)경우에만 코드 블록을 
//실행하고 조건이 거짓(false)인 경우에는 해당 코드 블록을 건너뛰게 된다.

//if(조건식) {
//				//조건이 참인 경우 실행되는 코드 블럭
//}

//여기서 조건식은 참 또는 거짓을 판단할 수 있는 식, 조건식이 참이면 if문의 코드 블럭이
//실행되며, 조건식이 거짓이면 if문의 코드 블럭을 건너뛰게 된다.

//if문은 또한 else 문을 사용하여, 조건이 거짓인 경우에 실행할 코드 블럭도 지정할 수 있다.

//if(조건식) {
//				//조건이 참인 경우 실행되는 코드 블럭
//} else {
//				//조건이 거짓인 경우 실행되는 코드 블럭
//}

//if문은 중첩하여 사용할 수 도 있다. 이 경우에 조건식에 따라 다양한 코드 블럭이 실행된다.

//if(조건식) {
//				//조건이 참인 경우 실행되는 코드 블럭
//				if(조건식2) {
//						// 조건식 1과 조건식 2가 모두 참인 경우 실행되는 코드 블럭						
//			
// 
// 
//} else {
//				//조건이 거짓인 경우 실행되는 코드 블럭
//}

//01 if문 기본

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &num);
//	
//	if (num % 2 == 0)
//	{
//		printf("%d는 짝수입니다.\n", num);
//	}
//	printf("첫 번째 if문이 끝났습니다.\n");
//	if (num % 2 == 1)
//	{
//		printf("%d는 홀수입니다.\n", num);
//	}
//	printf("두 번째 if문이 끝났습니다.\n");
//}

//02 if-else

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &num);
//
//	if (num % 2 == 0) {
//		printf("%d는 짝수입니다.\n", num);
//	}
//	else {
//		printf("%d는 홀수입니다.\n", num);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 0, num2 = 0;
//
//	printf("두 정수를 입력하세요 : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	if ((num1 + num2) % 2 == 0) {
//		printf("두 정수의 합은 짝수입니다.");
//	}
//	else {
//		printf("두 정수의 합은 홀수입니다.");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &num);
//
//	if (num >= 1 && num <= 10) {
//		printf("정상범위 값 입력!\n");
//	}
//	else {
//		printf("잘못된 값을 입력하셨습니다.");
//	}
//	return 0;
//}

//03 IF 문 중첩
//짝수이면서 3의 배수이면 출력
//홀수이면서 5의 배수이면 출력

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("정수 : ");
//	scanf_s("%d", &num);
//	if (num % 2 == 0) {
//		if (num % 3 == 0) { //3의 배수이면서 짝수
//			printf("%d는 짝수이면서 3의 배수이다.\n", num);
//		}
//		else {
//			printf("짝수긴 한데 3의 배수는 X");
//		}
//	}
//	else {
//		if (num % 5 == 0) { //홀수이면서 5의 배수냐?
//			printf("%d는 홀수이면서 5의 배수이다.\n", num);
//		}
//		else {
//			printf("홀수이긴 한데 5의 배수는 X");
//		}
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &num);
//
//	if (num % 3 == 0) {
//		if (num % 4 == 0) {
//			printf("%d는 3의 배수이면서 4의 배수이다.", num);
//		}
//		else {
//			printf("%d는 3의 배수이지만 4의 배수는 아니다.", num);
//		}
//	}
//	else {
//		if (num % 5 == 0) {
//			printf("%d는 3의 배수가 아니면서 5의 배수이다.", num);
//		}
//		else {
//			printf("%d는 3의 배수가 아니면서 5의 배수도 아니다.", num);
//		}
//	}
//	return 0;
//}

//04 ELSE-IF //다중분기

//#include <stdio.h>
//
//int main(void)
//{
//	int age = 0;
//	printf("나이 입력 : ");
//	scanf_s("%d", &age);
//
//	if (age >= 20) {
//		printf("성이입니다.\n");
//	}
//	else if (age >= 8) {//아직 완전히 틀린것은 아닐 때 
//		printf("학생입니다.\n");
//	}
//	else {
//		printf("미취학 아동입니다.");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int score = 0;
//	printf("점수를 입력하세요 : ");
//	scanf_s("%d", &score);
//
//	if (score >= 90) {
//		printf("A학점\n");
//	}
//	else if (score < 90 && score >= 80) {
//		printf("B학점\n");
//	}
//	else if (score < 80 && score >= 70) {
//		printf("C학점\n");
//	}
//	else if (score < 70 && score >= 60) {
//		printf("D학점\n");
//	}
//	else {
//		printf("F학점");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 0, eng = 0, mat = 0;
//	int total = 0;
//	int avg = 0;
//
//	printf("국어, 영어, 수학 점수를 입력하세요 : ");
//	scanf_s("%d %d %d", &kor, &eng, &mat);
//
//	total = kor + eng + mat;
//	avg = total / 3;
//
//	if (kor >= 40 && eng >= 40 && mat >= 40) {
//		if (avg >= 60) {
//			printf("합격");
//		}
//		else {
//			printf("불합격");
//		}
//	}
//	else {
//		printf("불합격");
//	}
//	return 0;
//}

