//01 Switch문 (다중분기)
// 프로그래밍에서 조건문 중 하나로, 조건에 따라 다른 코드를 실행할 때 사용된다.
// switch문에서는 하나의 변수에 대해 여러가지 조건을 나열하여 각 조건마다 실행할
// 코드를 지정한다.

//switch (변수)
//{
//case 값1:
//			실행할 코드1;
//			break;
//case 값2:
//			실행할 코드2;
//			break;
//default:
//			break;

//case : if문이면서 else if문이기도 하다.
//break : 해당 코드를 실행하고 나서 멈추게 만든다.
//default : else문이다. (case에 대한 실행값이 아무것도 맞지 않을 시)

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("정수 입력 : ");
//	scanf_s("%d", &num);
//
//	switch (num) {
//	case 1:
//		printf("1 입력시 실행되는 코드블럭");
//		break;
//	case 2:
//		printf("2 입력시 실행되는 코드블럭");
//		break;
//	case 3:
//		printf("3 입력시 실행되는 코드블럭");
//		break;
//	default:
//		printf("그 외 나머지 실행되는 코드블럭");
//		break;
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//
//	printf("마지막 날짜를 알고싶은 달을 입력하세요 : ");
//	scanf_s("%d", &num);
//
//	switch (num) {
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		printf("마지막 날짜는 31일입니다.");
//		break;
//	case 2:
//		printf("마지막 날짜는 28 또는 29일 입니다.");
//		break;
//	case 4: case 6: case 11:
//		printf("마지막 날짜는 30일 입니다.");
//		break;
//	default:
//		printf("잘못된 숫자입니다.");
//	}
//} 