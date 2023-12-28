// 01 정수값 받기

//#include <stdio.h>
//
//int main(void)
//{
//	int n1 = 0;
//	printf("정수 1 입력 : ");
//	scanf_s("%d", &n1);
//	//scanf_s : 표준입력장치(보통 키보드)로부터 프로그램 방향으로 값을 받을 때 사용
//	// "%d" : 정수 서식에 맞게 값을 받겠다.
//	// & : (참조 연산자) : 공간의 주소값을 반환
//	// n1 : 변수명
//	printf("입력한 값 : %d\n", n1);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n1 = 0; 
//	int n2 = 0;
//	printf("정수 2개 입력 : ");
//	scanf_s("%d %d", &n1, &n2); //값은 스페이스바 혹은 엔터키를 기준으로 다음값 확인
//
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//}
//
//#include <stdio.h>
//int main(void)
//{
//	int n1 = 0, n2 = 0, n3 = 0;
//
//	printf("정수 3개를 입력하세요 : ");
//	scanf_s("%d %d %d", &n1, &n2, &n3);
//
//	printf("%d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
//	printf("%d * %d * %d = %d\n", n1, n2, n3, n1 * n2 * n3);
//	printf("%d - %d - %d = %d\n", n1, n2, n3, n1 - n2 - n3);
//
//	return 0;
//}

//03 scanf_s 서식문자에 따른 값 받기

// %d 10진 정수
// %f 실수(float 형)
// %lf 실수(double 형)
// %c 문자 서식
// %s 문자열 서식

//#include <stdio.h>
//
//int main(void)
//{
//	int n1;
//	double n2;
//	char ch;
//
//	printf("정수 입력 >> ");
//	scanf_s("%d", &n1);
//	printf("저장된 정수 : %d\n", n1);
//
//	printf("실수 입력 >> ");
//	scanf_s("%lf", &n2);
//	printf("저장된 실수 : %lf\n", n2);
//
//// scanf를 반복적으로 사용할 때 숫자값 입력과 문자값 입력 사이에 버퍼 공간이 발생한다.
//// 따라서 버퍼공간을 초기화시켜주지 않으면 버퍼공간에 남아있는 문자 or 문자열 값이
//// 다음 scanf의 입력된 값으로 해석되기 떄문에 문제가 발생한다.
//	//rewind(stdin); //남아있는 버퍼 공간을 초기화 시켜준다.
//	printf("문자 입력 >> ");
//	scanf_s("%c", &ch);
//	printf("저장된 문자 : %c\n", ch);
//}

//04 문자열 받기
//#include <stdio.h>
//
//int main(void)
//{
//	char gender;
//	char name[20];
//
//	printf("성별 (M/W) :");
//	scanf_s("%c", &gender); //프로그램이 gender 변수의 크기까지는 몰라서 생기는 문제이다.
//
//	printf("이름 : ");
//	scanf_s("%s", name); //프로그램에게 변수의 크기를 알려준다.
//	// 배열은 &가 생략될 수 있다. (포인터 파트에서 설명)
//
//	printf("==== 입력 확인 ====\n");
//	printf("이름 : %s\n 성별 : %c\n", name, gender);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int korea = 0, english = 0, math = 0;
//	int total = 0;
//	double avg = 0.0;
//
//	printf("국어 영어 수학 점수를 입력하세요 : ");
//	scanf_s("%d %d %d", &korea, &english, &math);
//
//	total = korea + english + math;
//	avg = (double)total / 3;
//
//	printf("총점 : %d\n", total);
//	printf("평균 : %.2lf\n", avg);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int age = 0;
//	char name[20] = { 0, };
//	printf("당신의 이름은 무엇입니까?");
//	scanf_s("%s", name, sizeof(name));
//	
//	printf("%s님의 나이는 몇살입니까?", name);
//	scanf_s("%d", &age);
//
//	printf("%s 님의 나이는 %d살 입니다", name, age);
//
//	return 0;
//}
