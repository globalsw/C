// 02 복합대입 연산자(+=, -=, *=, /=, %=)
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20, c = 0;
//	a += b;		// a = a + b
//	printf("a = %d\n", a);
//	a -= b;		// a = a - b
//	printf("a = %d\n", a);
//	a *= b;		// a = a * b
//	printf("a = %d\n", a);
//	a /= b;		// a = a / b
//	printf("a = %d\n", a);
//
//	return 0;
//}

//03 비교 연산자

//참 : 0이 아닌 모든 값(대표값 : 1)
//거짓  : 0
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20, c = 0;
//	printf("a == b ? %d\n", a == b);
//	printf("a > b ? %d\n", a > b);
//	printf("a >= b ? %d\n", a >= b);
//	printf("a < b ? %d\n", a < b);
//	printf("a != b ? %d\n", a != b); // a는 b랑 다른가? ( !는 반대적인 성향을 지닌다)
//}

//04 논리연산자
//#include <stdio.h>

//int main(void)
//{
//	//AND연산자(&&)
//	//1. 왼쪽의 조건식이 거짓이면 오른쪽 조건식을 평가하지 않는다.
//	//2. "&&" 연산자는 일반적으로 "||"연산자보다 우선순위가 높다.
//	//3. "&&" 연산자의 결과는 논리값(참 또는 거짓)이다.
//	/*int a = 10, b = 20;
//	printf("a >= 10 && a > 20 ? %d\n", a >= 10 && a > 20);*/
//
//	//OR 연산자 ||
//	// 1. 둘중에 하나만 맞아도 참으로 인식한다.
//	/*int a = 5, b = 9;
//	printf(" a==b ||a < b ? %d\n", a == b || a < b);
//	printf(" a > 5 || b > 10 ? %d\n", a > 5 || b > 10);*/
//
//	//NOT연산자
//	printf("!참 ? %d\n", !10);
//	printf("!거짓 ? %d\n", !0);
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0, c = 0;
//
//	printf("정수값 세개를 입력하세요 : ");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	printf("%d\n", a == b && a > 10 && b > 10);
//	printf("%d\n", a > b && a != 0);
//	printf("%d\n", a > 5 || b < 10);
//	printf("%d\n", a > b && a > c && a != 0);
//}

//05 증감연산자(++, --)
//전치연산자(++a, --a) : 변수값을 1증가(혹은 1감소) 이후에 다른 연산 처리
//후치연산자(a++, a--) : 다른 연산 처리 이후에 1증가(혹은 1감소)

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20, c = 0, d = 0, e = 0;
//	c = ++a + ++b;	// a = 11, b = 21 c = 32
//	printf("%d\n", c);
//	d = a++ + b++;	// a = 11?,
//	printf("%d\n", d);
//	e = ++a + b-- + ++c + d--;
//	printf("%d\n", e);
//}

//06 응용 증감연산자 + 논리연산자
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1, b = 1, c = 0, d = 5;
//
//	c = --a && b++; // 이 시점의 b는 1 그대로 간다.
//	d = ++a && b++; // 이 시점의 a는 1이 된다. b는 1인 시점
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//}	return 0;

//07 삼항 연산자
// (조건식) 참인경우 실행코드 : 거짓인경우 실행코드

//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0;
//
//	printf("a , b값 일력 : ");
//	scanf_s("%d %d", &a, &b);
//
//	(a > b) ? printf("큰 수는 : %d\n", a) : printf("큰 수는 : %d\n", b);
//	// -> if문 대체
//
//}

//08 %연산자 정리
//#include <stdio.h>
//
//int main(void)
//{
//	//1. 짝/홀수 구분
//	int num = 0;
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &num);
//	// 삼항 연산자를 이용해서 짝수인지, 홀수인지를 출력하도록 하시오.
//	//(num % 2 == 0) ? printf("짝수입니다.") : printf("홀수입니다.");
//	
//	//삼항 연산자를 이용해서 3의 배수인지 아닌지를 출력해 보시오.
//	//(num % 3 == 0) ? printf("3의 배수입니다.") : printf("3의 배수가 아닙니다.");
//
//	//짝수이면서 3의 배수인지 확인해 보시오. and 연산자
//	//num % 2 == 0 && num % 3 == 0 ? printf("%d은 짝수이면서 3의 배수입니다.", num) : printf("%d은 짝수가 아닐수도 3의 배수가 아닐수도 있습니다.", num);
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int n = 54321;
//
//	printf("오른쪽 끝 한자리= %d\n", n % 10);
//	printf("오른쪽 끝 두자리= %d\n", n % 100);
//	printf("오른쪽 끝 세자리= %d\n", n % 1000);
//	printf("오른쪽 끝 네자리= %d\n", n % 10000);
//
//	printf("=====================\n");
//
//	printf("왼쪽 끝 한자리= %d\n", n / 10000);
//	printf("왼쪽 끝 두자리= %d\n", n / 1000);
//	printf("왼쪽 끝 세자리= %d\n", n / 100);
//	printf("왼쪽 끝 네자리= %d\n", n / 10);
//
//	return 0;
//}

//문제
//1. 다음은 실수형 변수 X에 대해 X를 2로 나눈 몫을 구하는 코드이다.

//#include <stdio.h>
//
//int main(void)
//{
//	float x = 5.6;
//	int y;
//
//	printf("x를 2로 나눈 몫: %d\n", (int)x / 2);
//}
