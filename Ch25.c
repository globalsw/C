// ���ȣ�� �Լ�

// ��� : ���� �ڱ� �ڸ��� ����. ȸ���ϴ�
// ����Լ� : �Լ� ������ �ڱ� �ڽ��� ȣ���Ѵ�.

// ���丮�� �Լ�
//#include <stdio.h>
//
//int factorial(int n)
//{
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return n * factorial(n - 1);
//	}
//}
// n�� 0�� ���� 1�� ��ȯ�ϰ� �� �ܿ��� n�� factorial(n-1)�� ���� ���� ��ȯ�Ѵ�.
// 
//int main(void)
//{
//	int n = 5;
//	int result = factorial(n);
//	printf("%d = %d\n", n, result);
//
//	return 0;
//}

// �Ǻ���ġ

//#include <stdio.h>
//
//long long int fibonacci(int n)
//{
//	if (n <= 1) {
//		return n;
//	}
//	else {
//		return fibonacci(n - 1) + fibonacci(n - 2);
//	}
//}
//int main(void)
//{
//	int n, j;
//
//	printf("�� ���� �Ǻ���ġ ������ �����ұ��? ");
//	scanf_s("%d", &n);
//
//	printf("�Ǻ���ġ ���� : ");
//	for (int i = 0; i < n; i++) {
//		printf("%lld ", fibonacci(i));
//	}
//}

//#include <stdio.h>
//
//void sayHello()
//{
//	printf("Hello\n");
//	sayHello();
//}
//
//int main(void)
//{
//	sayHello();
//
//	return 0;
//}

// ����Լ��� count ������ �δ°� ����.

//#include <stdio.h>
//
//int sayHello(int cnt)
//{
//	printf("Hello\n");
//
//	//cnt�� 50�� �Ǹ� �� �̻� ���ȣ���� ���� ���ϰ� ���´�.
//	if (cnt != 50) {
//		sayHello(cnt+ 1);
//	}
//}
//
//int main(void)
//{
//	sayHello(1);
//
//	return 0;
//}

//#include <stdio.h>
//// �ڿ��� n�� �Է¹޾� 1 ���� n������ ���� ���ϴ� sum�� ��� �Լ��� ����
//int sum(int n)
//{
//	if (n == 0) {
//		return 0;
//	}
//	else {
//		return n + sum(n - 1);
//	}
//}
//
//int main(void)
//{
//	int num;
//	printf("���ڸ� �Է��Ͻÿ� : ");
//	scanf_s("%d", &num);
//
//	printf("1���� �Է��� ���ڱ����� ���� : ");
//	printf("%d", sum(num));
//
//	return 0;
//}

//#include <stdio.h>
//// ���� : ����ڷκ��� ���� ���� n�� �Է¹޾Ƽ� n���� 1������ ���ڸ� �������� ����ϴ� �Լ�
////		����Լ� ���, ������ ������ �� : ������ ���丮���� ����� �� �����ϴ�. �� �����Ѵ�.
//void print(int n)
//{
//	if (n < 0) {
//		printf("������ ���丮���� ����� �� �����ϴ�.");
//	}
//
//	if (n > 0) {
//		printf("%d ", n);
//		print(n - 1);
//	}
//}
//int main(void)
//{
//	int n;
//	printf("���� ������ �Է��Ͻÿ� : ");
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}

#include <stdio.h>
//���� : ������ ���� 2���� �迭�� �־�����. 
// �� �迭�� �̿��Ͽ� ������ �۾��� �����ϴ� ���α׷� �ۼ�
//1. �迭 �����͸� ����Ͽ� �迭�� ��� ������ ���
//2. �迭 �����͸� ����Ͽ� �迭�� �� ���� ���� ����ϰ� ���
//3. �迭 �����͸� ����Ͽ� �迭�� �� ���� ����� ����ϰ� ���(����� �Ҽ������� �޾ƾ� �Ѵ�.)
//int main(void)
//{
//	int arr[3][4] = {
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//
//	int(*p)[4] = arr;
//	int csum = 0, rsum = 0;
//	double ravg = 0;
//	printf("1. �迭 �����͸� ����Ͽ� �迭�� ��� ������ ���\n");
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d ", *(*(p + i) +j));
//		}
//		printf("\n");
//	}
//
//	printf("\n2. �迭 �����͸� ����Ͽ� �迭�� �� ���� ���� ����ϰ� ���\n");
//	for (int i = 0; i < 3; i++) {
//		csum = 0;
//		for (int j = 0; j < 4; j++) {
//			csum += *(*(p + i) + j);
//		}
//		printf("%d���� ���� : %d\n", i, csum);
//	}
//
//	printf("\n3. �迭 �����͸� ����Ͽ� �迭�� �� ���� ����� ����ϰ� ���(����� �Ҽ������� �޾ƾ� �Ѵ�.)\n");
//	for (int j = 0; j < 4; j++) {
//		rsum = 0;
//		for (int i = 0; i < 3; i++) {
//			rsum += *(*(p + i) + j);
//			ravg = rsum / 3;
//		}
//		//printf("%d���� ���� : %d\n", j, rsum);
//		printf("%d���� ����� : %.2lf\n", j, ravg);
//	}
//	return 0;
//}

