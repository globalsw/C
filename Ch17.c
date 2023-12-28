//문제 : 계산기를 만든다.

// 1. 1번은 덧셈, 2번은 뺄셈, 3번은 곱셈, 4번은 나눗셈, 5번은 나눈값의 나머지가 나오도록 만드시오.
// 2. 숫자는 임의의 숫자를 받아 나누도록 하시오.

//#include <stdio.h>
//
//int main(void)
//{
//	int choice, num1, num2 = 0;
//
//	printf("연산을 하고싶은 숫자 2개를 입력하세요 : ");
//	scanf_s("%d %d", &num1, &num2);
//	printf("1번 : 덧셈\n2번 : 뺄셈\n3번 : 곱셈\n4번 : 나눗셈\n5번 : 나머지\n");
//	printf("1 ~ 5번 중 하나를 입력하세요 : ");
//	scanf_s("%d", &choice);
//
//	switch (choice) {
//	case 1:
//		printf("%d + %d = %d입니다.", num1, num2, num1 + num2);
//		break;
//	case 2:
//		printf("%d - %d = %d입니다.", num1, num2, num1 - num2);
//		break;
//	case 3:
//		printf("%d x %d = %d입니다.", num1, num2, num1 * num2);
//		break;
//	case 4:
//		printf("%d / %d = %d입니다.", num1, num2, num1 / num2);
//		break;
//	case 5:
//		printf("%d % %d = %d입니다.", num1, num2, num1 % num2);
//		break;
//	}
//	return 0;
//}