//��ü ������
//2�� ~ 9�ܱ��� ��� 1��

//#include <stdio.h>
//
//int main(void)
//{
//	int dan = 2;
//
//	while (dan <= 9) {
//		int i = 1;
//
//		printf("%d�� : \n", dan);
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
//		printf("%d�� : \n", dan);
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
//	int i = 0; //������
//	int j = 0; //������
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
////���̸� �Է¹޾� ���̸�ŭ�� �ﰢ�� ���
//int main(void)
//{
//	int n = 0;
//	printf("���� : ");
//	scanf_s("%d", &n);
//
//	int i = 0; //��
//	int j = 0; //��
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
////2�� ���̸� �Է¹޾� ���� �������� ���
//int main(void)
//{
//
//}

//3��  �Է¹����� ���Ӥ�ŭ ���ﰢ�� ���

//#include <stdio.h>
//
//int main(void)
//{
//	int height = 0;
//
//	printf("���� : ");
//	scanf_s("%d", &height);
//
//	int i = 0; //����
//	int j = 0; //����
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


//2�� Ǯ��
//#include <stdio.h>
//
//int main()
//{
//	int i = 1, j = 1, num;
//	printf("���� �Է� :");
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
//	printf("���� �Է� : ");
//	scanf_s("%d", &height);
//
//	int i = 0; 
//	while (i < height) { //�� �� ������
//		int j = 0;
//
//		//������ ���� ���� while �̴�.
//		while (j < height - i - 1) {
//			printf(" ");
//			j++;
//		}
//
//		int k = 0;
//		//���� ���� ���� while�̴�.
//		while (k < 2 * i + 1) {
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//}