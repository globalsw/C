// 문자열과 포인터

// 문자 표현방법

// 컴퓨터에서는 각각의 문자에 숫자코드를 붙여서 표시한다.
// 아스키코드(ASCII code) : 표준적인 8비트 문자코드
// 0에서 127까지의 숫자를 이용한 문자표현
// 요즘은 유니코드를 사용

// 유니코드(Unicode) : 표준적인 16비트 문자코드
// 전세계의 모든 문자를 일관되게 표현하고 다룰 수 있도록 설계

// 문자 상수
//
//#include <stdio.h>
//
//int main(void)
//{
//	char cod1 = 'A';
//	char cod2 = 65;
//
//	//%c : 문자를 입력받거나 출력할 때 사용하는 서식 지정자이다.
//	printf("%c,  %d\n", cod1, cod1);
//	printf("%c, %d\n", cod2, cod2);
//
//	return 0;
//}

//아스키코드 출력
//#include <stdio.h>
//
//int main(void)
//{
//	char ascii = 'NUL';
//
//	for (int i = 0; i < 128; i++) {
//		printf("아스키코드 출력 : %c\n", ascii++);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	unsigned char code;
//	for (code = 0; code < 128; code++) {
//		printf("아스키코드 %d는 %c 입니다.\n", code, code);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char good[] = "Good";
//	char* bad = "Bad";
//
//	printf("%s %s\n", good, bad);
//
//	//아래와 같은 문장은 컴파일에서 경고나 에러를 발생시키지는 않지만 문자형 상수를 문자형 변수에 대입하려는 시도로 인해 잘못된 문장이다.
//
//	good[0] = "H"; //이상한 문자로 나옴
//	good[0] = 'H'; // 잘 나옴
//	printf("%s %s\n", good, bad);
//
//	//good = "New Good"; //불가능(컴파일 에러) // 배열기반 문자열은 새로운 주소값 할당 불가능 
//	bad[0] = 'S'; //불가능(실행은 되지만 값의 변화 없이 예외처리됨 // 포인터 기반 문자열은 개별 요솟값이 할당이 안된다.
//	printf("%s\n", bad);
//}

// 문자 입출력 라이브러리 

// int getchar(void) : 하나의 문자를 읽어서 반환한다.
// void putchar(int c) : 변수 c에 저장된 문자를 출력한다.
// scanf("%c", &c) : 하나의 문자를 읽어서 변수 c에 저장한다.
// printf("%c", c) : 변수 c에 저장된 문자를 출력한다.

//#include <stdio.h>
//
//int main(void)
//{
//	int ch;
//
//	while (1) {
//		ch = getchar();
//		if (ch == 'q') {
//			break;
//		}
//		putchar(ch);
//	}
//}

// 문자열 단위 입출력 함수
//
//#include <stdio.h>
//
//int main(void)
//{
//	char str[10];
//	printf("문자열을 입력하세요 >>> ");
//	fgets(str, sizeof(str), stdin); // fgets() 함수를 사용하여 문자열을 입력받음
//	// stdin : 기본적으로 키보드의 입력을 받아들인다.
//	puts(str);
//	return 0;
//}

// 문자열 처리 함수

//#include <stdio.h>
//#include <string.h> //C언어의 표준 라이브러리의 헤더 파일 중 하나이다.
//#pragma warning(disable:4996) //보안 취약점 경고 무시
//
//// string.h 주요함수
//
//// strlen(str) : 인자로 전달된 주소의 문자열에서 NULL문자를 제외한 문자열 길이를 반환
//// strcpy(str1, str2) : 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사
//// strncpy(str1, str2, count) : 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자의 주소에 복사하되 원하는 개수만큼을 복사
//// strcat(str1, str2) : 두 번째 인자로 전달된 주소의 문자열을 첫 번째 인자로 전달된 주소의 문자열에 이어 붙이기
//// strcmp(str1, str2) : 인자로 전달된 두 문자열을 비교하여 내용이 같다면 0을, 같지 않다면 0이 아닌 값을 반환
//
//int main(void)
//{
//	//strcpy() 함수와 strncpy() 함수는 C언어에서 문자열을 복사할 때 사용되는 함수
//	//strcpy() 함수는 첫 번째 인자로 전달된 문자열의 크기를 검사하지 않으므로, 복사할 문자의 크기가 두 번째 인자로 전달된 문자열보다 크면 버퍼 오버플로우(overflow)가 발생할 수 있다.
//	/*char src[] = "Hello, World";
//	char dest[20];
//	strcpy_s(dest, sizeof(dest), src);
//	printf("%s", dest);*/
//
//	// 버퍼 오버플로우를 방지 할 순 있지만 복사한 문자열이 널 종단문자 포함 X, 따라서 복사한 문자열 끝에 널 종단 문자를 추가해 주어야 한다.
//	char src[] = "Hello world";
//	char dest[20];
//	// strncpy : 복사할 문자열의 길이가 목표 버퍼의 크기보다 작거나 같으면, 그 문자열을 복사하고 남은 공간을 널 종단문자로 채운다.
//	strncpy(dest, src, sizeof(dest)); //sizeof : 변수 또는 자료형의 크기를 반환한다.
//	dest[sizeof(dest) - 1] = '\0'; // \0 : null 문자 ,복사한 문자열의 끝에 널 종단 문자 추가
//	printf("%s", dest);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	char str1[50] = "korea";
//	char str2[50] = "korea";
//	
//	// str1에 문자열 붙이기
//	
//	//strcat : 문자열을 이어붙일 때 사용되는 함수
//	strcat(str1, "It");
//	printf("%s", str1);
//	printf("\n");
//
//	//str2에 7개의 문자 붙이기 
//	strcat(str2, "It");
//	printf("%s\n", str2);
//
//	//str1과 str2의 비교
//	//strcmp : 문자열을 비교할 때 사용되는 함수
//	printf("비교 결과 : %d\n", strcmp(str1, str2));
//
//	return 0;
//
//}

//#include <stdio.h>
////문자열 입력받아, 같은지 비교 첫번째 hello 두번째 Hello 출력 두 문자열은 다릅니다 같습니다.
//int main(void)
//{
//	char str1[100];
//	char str2[100];
//	printf("첫 번째 문자열 입력 : ");
//	fgets(str1, sizeof(str1), stdin);
//	printf("두 번째 문자열 입력 : ");
//	fgets(str2, sizeof(str2), stdin);
//
//	if (strcmp(str1, str2) == 0) {
//		printf("두 문자열은 같습니다.");
//	}
//	else {
//		printf("두 문자열은 다릅니다.");
//	}
//	return 0;
//}
