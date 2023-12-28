//01 c언어: 기본 구조

//주석 : 블럭지정 -> ctrl + k + c
//주석 해제 : 블럭지성 -> ctrl + k + u

//#include <stdio.h> // #include : 전처리문(예 ; 무엇을 추가하겠다.)
//					// <stdio.h> : 헤더파일(기본 입출력 함수호출용)
//					//  standard input output
//
//int main(void)		// main 함수 헤더
//{					// main함수 본체가 시작한다.
//	printf("Hello World"); // printf : C언어에서 제공하는 기본 라이브러리 함수, ; : 마침표
//	return 0;		// main 함수 종료시 전달되는 값(리턴값)
//}					// main 함수 본체 끝

// 함수 종료
// main함수 : 최초로 실행되는 함수(특수한 함수)
// 라이브러리 함수 : 개발 편의를 위해 미리 만들어져 제공되는 함수
// 예 : printf() 모니터 출력 함수, scanf() : 키보드 입력함수
// 사용자 정의 함수 : 프로그래머에 의해 제작된 함수 예) : int a = 10;

// 02 ESCAPE 문자
// 기존 문자 용도인(정보표시)에서 벗어나 특정기능 처리를 위해(제어문자) 사용되는 특수문자
// \를 앞에 붙여 특정 문자를 사용한다.
// \n 개행(줄바꿈)
// \b 백스페이스
// \a 알람음(비프음)
// \t 탭키만큼 이동(8칸)
// \r 캐리지 리턴(행의 처음으로 이동)

//#include <stdio.h>
//int main() {
//	printf("Hello World!\n");
//	printf("boy\tgirl");
//	printf("up \rdown");
//}

//#include <stdio.h>
//int main() {
//	printf("나의 이름은 서한녕 입니다\n나는 23 살이고\n사는 곳은 대구 입니다.\n\n");
//	printf("제품코드 제품명 수량 단가\n1010\t 노트북 10   100\n2020\t 휴대폰 20   110\n3030\t 태블릿 30   90\n");
//	return 0;
//}