//����� ����

//1. �����ﰢ�� ����� ������� ����� ���� ��, �� ����ŭ ����Ⱑ �Ǵ� ����
//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("�� ���� �Է��ϼ��� : ");
//	scanf_s("%d", &height);
//
//	for (int i = 0; i < height; i++) {
//		for (int j = i; j < 2*i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}



//2. �� �����ﰢ�� ����� ������� ����� ���� ��, �� ����ŭ ����Ⱑ �Ǵ� ����

//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("�� ���� �Է��ϼ��� : ");
//	scanf_s("%d", &height);
//
//	for (int i = 0; i < height; i++) {
//		for (int j = i; j < height; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//������ �ڵ�
//for (i = height; i >= 1; i--) {
//	for (j = 1; j <= i; j++) {
//		printf("*");
//	}
//	printf("\n");
//}

//3. �Ƕ�̵� ����� ���̸� �Է¹޾� �Ƕ�̵� ���̸�ŭ ���� ������.
//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("�� ���� �Է��ϼ��� : ");
//	scanf_s("%d", &height);
//
//	for (int i = 0; i < height; i++) {
//		for (int j = i; j < height - 1; j++) {
//			printf(" ");
//		}
//		for (int k = i; k < 3*i + 1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//������ �ڵ�
//for (i = 1; i <= height; i++)[
//	for (j = 1; j <= height - i; j++) {
//		printf(" ");
//	}
//	for (k = 1; k <= 2 * i - 1; k++) {
//		printf("*");
//	}
//	printf("\n");
//]

