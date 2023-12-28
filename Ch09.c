//전체 구구단
//2단 ~ 9단까지 출력 1번

//#include <stdio.h>
//
//int main(void)
//{
//	int dan = 2;
//
//	while (dan <= 9) {
//		int i = 1;
//
//		printf("%d단 : \n", dan);
//		while (i <= 9) {
//			printf("%d * %d = %d\n", dan, i, dan * i);
//			i++;
//		}
//		printf("\n");
//		dan++;
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int dan = 9;
//
//	while (dan > 1) {
//		int i = 9;
//		printf("%d단 : \n", dan);
//		while (i >= 1) {
//			printf("%d * %d = %d\n", dan, i, dan * i);
//			i--;
//		}
//		printf("\n");
//		dan--;
//	}


//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0; //행증가
//	int j = 0; //열증가
//
//	while (i < 4) {
//		j = 0; 
//		while (j < 5) {
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}

//#include <stdio.h>
////높이를 입력받아 높이만큼의 삼각형 출력
//int main(void)
//{
//	int n = 0;
//	printf("높이 : ");
//	scanf_s("%d", &n);
//
//	int i = 0; //행
//	int j = 0; //열
//	while (i < n) {
//		j = 0;
//		while (j <= i) {
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//			
//	}
//}

//#include <stdio.h>
////2번 높이를 입력받아 높이 역순으로 출력
//int main(void)
//{
//
//}

//3번  입력받으면 높임ㄴ큼 정삼각형 출력

//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("높이 : ");
//	scanf_s("%d", &height);
//
//	int i = 0; //가로
//	int j = 0; //세로
//
//	while (j < height) {
//		i = 0;
//		while (i < height - 1) {
//			printf("O");
//			i++;
//			while (i == height - 1) {
//				printf("*");
//			}
//		}
//		printf("\n");
//		j++;
//	}


//2번 풀이
//#include <stdio.h>
//
//int main()
//{
//	int i = 1, j = 1, num;
//	printf("높이 입력 :");
//	scanf_s("%d", &num);
//	while (i <= num) {
//		j = num;
//		while (j >= i) {
//			printf("*");
//			j--;
//		}
//		printf("\n");
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//	printf("높이 입력 : ");
//	scanf_s("%d", &height);
//
//	int i = 0; 
//	while (i < height) { //몇 번 돌릴지
//		int j = 0;
//
//		//공백을 찍어내기 위한 while 이다.
//		while (j < height - i - 1) {
//			printf(" ");
//			j++;
//		}
//
//		int k = 0;
//		//별을 찍어내기 위한 while이다.
//		while (k < 2 * i + 1) {
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}