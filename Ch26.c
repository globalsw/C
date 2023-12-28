// 포인터의 포인터

// 포인터의 포인터란 : 포인터 변수를 가리키는 또 다른 변수를 의미하며 더블 포인터, 혹은 이중포인터 라고도 한다.

// 포인터 변수 : 메모리의 주소값을 저장하는 변수. 포인터 변수 또한 하나의 변수이므로 필요한 메모리 공간을 할당받아 사용하고 있다.
//				따라서 포인터 변수가 차지하고 있는 메모리 공간에 대한 주소값을 저장하는 것이 가능해진다.
// 이를 저장하는 변수를 두고 포인터의 포인터를 저장한다고 하여 더블 포인터라고 한다.

// 싱글포인터 : 기본적인 포인터의 개념이다.

// int x = 10;
// int* p = &x; // p는 x의 주소값을 가리키는 포인터.

// 더블포인터 : 포인터를 저장할 변수. 해당 포인터가 가리키는 메모리 주소를 참조하여 값을 읽거나 쓸 수 있다.
//				다시 말해, 더블 포인터는 포인터를 가리키는 포인터이다.

// int x = 10;
// int* p = &x; // p는 x의 주소값을 가리키는 포인터.
// int** q = &p; // q는 p의 주소를 가리키는 포인터.

// *p = 20;
//**q = 20; //x의 값을 20으로 변경;

// *q = p
// **q = x

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 3;
//	int* ptr1 = &num; //num의 주소를 저장하는 포인터 변수 ptr1
//	int** dptr = &ptr1; //int형 더블 포인터 변수를 선언, ptr1의 주소를 저장
//	
//	int* ptr2;
//
//	printf("%p %p\n", ptr1, dptr);
//	printf("%d %d\n", num, **dptr);
//
//	ptr2 = *dptr; //dptr이 가리키는 ptr1의 값을 ptr2에 대입한다. 따라서 ptr2는 num의 주소를 가리킨다.
//	*ptr2 = 9; //ptr2가 가리키는 변수에 9를 저장한다. 역참조된 변수는 num이므로 num의 값이 9로 변경된다.
//	printf("%d %d %d\n", num, **dptr, *ptr2);
//}

//#include <stdio.h>
//void swap(int **a, int **b)
//{
//	int temp = **a;
//	**a = **b;
//	**b = temp;
//}
//// 더블 포인터 'a'와 'b'를 인수로 받아서 'a'와 'b'가 가리키는 변수의 값을 서로 교환한다.
//// 매개변수 int **a는 ptr1의 주소값이 올라간 것이다.
//
//int main(void)
//{
//	int num1 = 10, num2 = 20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	printf("바뀌기 전\n");
//	printf("num1 = %d, num2 = %d\n", num1, num2);
//
//	swap(&ptr1, &ptr2); // ptr1의 주소값 
//	// swap 함수를 호출할 때는 포인터 변수의 주소를 넘겨주어야 하며, 이 함수 내에서는 포인터 변수가 가리키는 변수의 값을 서로 교환하는 함수이다.
//	printf("바뀐 후\n");
//	printf("num1 = %d, num2 = %d\n", num1, num2);
//	
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
////더블 포인터를 사용하여 문자열을 역순으로 출력한다.
//void printReverse(char** a)
//{
//	int len = strlen(*a); //문자열 길이 계산 : \n까지 계산
//
//	for (int i = 0; i < len; i++) {
//		printf("%c", *(*a + len - i - 1));
//	}
//	/*for (int i = len - 1; i >= 0; i--) {
//		printf("%c", *(*a + i));
//	}*/
//
//	// a : 문자열을 가리키는 포인터의 주소 : 더블포인터
//	// *a : a가 가리키는 포인터 : 문자열의 첫 번째 문자를 가리키는 포인터
//	// *(*a + i)) : *a + i 가 가리키는 주소에서 값을 역참조 한다. 문자열의 i번째 문자를 건드릴 수 있다.
//}
//
//int main(void)
//{
//	char* str = "hello world!";
//	printReverse(&str);
//	return 0;
//}

// 더블 포인터와 Call - by - reference

// 두 방법 모두 함수 호출 시, 인수로 전달된 값을 변경할 수 있다.
// 그러나 더블 포인터는 포인터 변수를 가리키는 포인터를 다루는 것에 비해 
// Call - by - reference는 변수의 주소를 전달하는 것이다. 그래서 더 간단하고 직관적인 방법이다. 
// 더블 포인터는 필요한 경우에만 사용하는 것이 좋다.

// 함수 포인터

// 함수 포인터 : 함수의 주소를 저장하기 위한 포인터를 의미한다. 함수 포인터를 이용하면 
// 함수를 가리키는 포인터를 선언하고 이를 활용하여 함수를 호출할 수 있다. 

//int (*fp)(int);

// 리턴타입 (*fp : 포인터 이름)(매개변수);
// 포인터 이름 = 함수이름

//#include <stdio.h>
//
//int square(int num)
//{
//	return num * num;
//}
//
//int main(void)
//{
//	// fp라는 함수 포인터를 선언
//	int (*fp)(int);
//	fp = square;
//
//	printf("square(5) = %d\n", square(5));
//	printf("(*fp)(5) = %d\n", (*fp)(5));
//}