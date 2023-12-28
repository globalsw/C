// 포인터 연산

// 포인터의 증감은 일반 변수와는 약간 다르다. 가리키는 객체의 크기만큼 증가한다.

// 포인터 타입			++연산 후 증가되는 값
// char					1
// short				2
// int					4 (4만큼 증가)
// float				4
// double				8 (8만큼 증가)

//#include <stdio.h>
//
//int main(void)
//{
//	char* pc; 
//	int* pi;
//	double* pd;
//
//	pc = (char*)10000;
//	pi = (int*)10000;
//	pd = (double*)10000;
//	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//
//	pc++;
//	pi++;
//	pd++;
//	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//	//포인터 증감은 바이트 수만큼 증가된다.
//}

// 포인터간의 비교
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j, * p1, * p2;
//
//	p1 = &i;
//	p2 = &j;
//
//	if (p1 != NULL) {
//		printf("p1이 NULL이 아님\n");
//	}
//
//	if (p1 != p2) {
//		printf("p1과 p2가 같지 않음\n");
//	}
//	
//	if (p1 < p2) {
//		printf("p1이 p2보다 앞에있음\n");
//	}
//	else {
//		printf("p1이 p2보다 뒤에 있음\n");
//	}
//}