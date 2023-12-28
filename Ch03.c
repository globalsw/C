//(자료)형변환

//자동형변환(암시적 형변환) : 컴파일러에 의해 자동형변환		
//강제형변환(명시적 형변환) : 프로그래머에 의한 강제 형변환

//01 자동형변환
//자료형 변환시 데이터 손실가능성이 낮을 때 컴파일러(c언어 프로그램)에 의해 자동으로 자료형 변환
// ex) 큰 공간 = 작은값 
//
// 자동형변환 순서
// char < short < int < long < long long < float < double
//
//#include <stdio.h>
//
//int main(void)
//{
//	short svar = 10;
//	int ivar = svar; //자동형변환 (큰공간 == 작은값) 큰공간을 작은값에 대입
//
//	printf("invar = %d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar;
//	printf("ivar= %d\n", ivar);
//
//	long long lvar = ivar; //(주의) 자동형변환이 되기는 하나 좋은 방법은 아니다.
//	printf("lvar = %d\n", lvar);
//	
//	float fvar = lvar;
//	printf("fvar = %f\n", fvar);
//
//	double dvar = lvar;
//	printf("dvar = %f\n", dvar);
//}

//02 강제형변환
//프로그래머에 의해 특정한 자료형으로 강제 형변환 하는 경우
//단점 : 데이터 손실 가능성이 높다.
//#include <stdio.h>
//
//int main(void)
//{
//	//int : 약 -21억 ~ +21억까지 short : 약 -32000 ~ + 32000까지 char : -128 ~ +127
//	int ivar = 50000;
//	short svar = (short)ivar; //강제 형변환
//	char cvar = (char)ivar; //강제 형변환
//	printf("svar = %d\n", svar);
//	printf("cvar = %d\n", cvar);
//}

//03연산시 자동(강제) 형변환(나눗셈)

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	double r2 = (float)num / div;
//
//	printf("r1 = %f\n", r1);
//	printf("r2 = %f\n", r2);
//
//}