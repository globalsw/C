//#include <stdio.h>
//// 1. ���ǹ��� ����Ͽ� ������ �Է¹޾� ���, ���� ,0 �� ��� ������ Ȯ���ϴ� ���α׷��� �ۼ�
//int main(void)
//{
//	int num = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &num);
//
//	if (num > 0) {
//		printf("����Դϴ�.");
//	}
//	else if (num < 0) {
//		printf("�����Դϴ�.");
//	}
//	else {
//		printf("0�Դϴ�.");
//	}
//}

//#include <stdio.h>
//// 2. �ݺ����� ����Ͽ� 1���� 10������ ���� ���ϴ� ���α׷� �ۼ�
//int main(void)
//{
//	int sum = 0;
//	for (int i = 1; i < 11; i++) {
//		sum += i;
//	}
//	printf("1���� 10������ ���� %d�̴�.", sum);
//
//	return 0;
//}

//#include <stdio.h>
//// 3. 1���� �迭�� ����� 5���� ���� �Է¹ް�, �� ���� ���ϴ� ���α׷�
//int main(void)
//{
//	int arr[5];
//	int sum = 0;
//
//	printf("5���� ������ �Է��ϼ��� : ");
//	for (int i = 0; i < 5; i++) {
//		scanf_s("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("�Է¹��� 5�� ������ ���� : %d", sum);
//
//	return 0;
//}

//#include <stdio.h>
//// 4. �����͸� ����� �� ���� ������ �Է¹޾�, �� �հ� ���� ���ϴ� ���α׷�
//int main(void)
//{
//	int num1, num2, plus, minus;
//	int* p1;
//	int* p2;
//
//	p1 = &num1;
//	p2 = &num2;
//
//	printf("�� ���� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d", p1, p2);
//
//	plus = *p1 + *p2;
//
//	if (*p1 > *p2) {
//		minus = *p1 - *p2;
//	}
//	else {
//		minus = *p2 - *p1;
//	}
//
//	printf("�� ������ �� : %d\n�� ������ �� : %d", plus, minus);
//
//	return 0;
//}