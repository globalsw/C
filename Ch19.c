// ������ �迭

// ������ �迭�� 2���� �̻��� �迭�� �ǹ��Ѵ�.
// ���������� ����ϴ� �迭�� 2���� , 3���� �迭�̴�.

// int arr[10]; //���̰� 10�� 1���� �迭
// int arr[5][3]; //���� ���̰� 5 , ���� ���̰� 3�� 2�����迭
// int arr[2][3][4]; //���̰� 2, ���� ���̰� 3, ���� ���̰� 4�� 3�����迭

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[2][3] = {
//		{1,2,3},
//		{4,5,6}
//	};
//	// �迭�� ��� ��� ���
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	// �迭�� ��Ұ��� ��� 10���� ����, ���
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			arr[i][j] = 10;
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}    

// ������ �迭 �μ�
//#include <stdio.h>
//// #define : C���� ��ó���� ���ù��̴�. ������ ���� ������ �����Ǹ� �ַ� ���, ��ũ�� �Լ� ���� �����ϴµ� ����Ѵ�.
//#define years 3
//#define products 5
//int sum(int grade[years][products])
//{
//	int y, p;
//	int total = 0;
//	for (int y = 0; y < years; y++) {
//		for (int p = 0; p < products; p++) {
//			total += grade[y][p];
//		}
//	}
//	return total;
//}
//int main(void)
//{
//	int sales[years][products] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	int total_sale;
//	total_sale = sum(sales);
//	printf("�� ������ %d\n", total_sale);
//}


//���� : �б��� ��ռ����� ���ϰ�, ��ü �л����� ��ռ����� ���Ͻÿ�
//#include <stdio.h>
//#define Class 3
//#define Student 5 
//
//int main(void)
//{
//	int s[Class][Student] = {
//		{0,1,2,3,4},
//		{10,11,12,13,14},
//		{20,21,22,23,24}
//	};
//	int class1Avg = 0, class2Avg = 0, class3Avg = 0, allStuAvg = 0;
//	int class1Total = 0, class2Total = 0, class3Total = 0, allStuTotal = 0;
//
//	for (int j = 0; j < Student; j++) {
//		class1Total += s[0][j];
//		class2Total += s[1][j];
//		class3Total += s[2][j];
//		class1Avg = class1Total / Student;
//		class2Avg = class2Total / Student;
//		class3Avg = class3Total / Student;
//	}
//	allStuTotal = class1Total + class2Total + class3Total;
//	allStuAvg = allStuTotal / (Class * Student);
//
//	printf("1�б� �л����� ��ռ��� : %d\n2�б� �л����� ��ռ��� : %d\n3�б� �л����� ��ռ��� : %d\n", class1Avg, class2Avg, class3Avg);
//	printf("��ü �л����� ��ռ��� : %d", allStuAvg);
//
//	return 0;
//}


//#include <stdio.h>
//#define Class 3
//#define Student 5 
////���� : �б��� ��ռ����� ���ϰ�, ��ü �л����� ��ռ����� ���Ͻÿ�
//int main(void)
//{
//	int s[Class][Student] = {
//		{0,1,2,3,4},
//		{10,11,12,13,14},
//		{20,21,22,23,24}
//	};
//	int classAvg[10] = { 0 };
//	int classTotal[10] = { 0 };
//	int allStudentTotal = 0;
//	int allStudentAvg = 0;
//
//	for (int i = 0; i < Class; i++) {
//		for (int j = 0; j < Student; j++) {
//			classTotal[i] += s[i][j];
//			classAvg[i] = classTotal[i] / Student; 	
//		}
//	}
//	
//	allStudentTotal = classTotal[0] + classTotal[1] + classTotal[2];
//	allStudentAvg = allStudentTotal / (Class * Student);
//	printf("�б��� ��ռ��� : %d %d %d\n", classAvg[0], classAvg[1], classAvg[2]);
//	printf("��ü �л����� ��ռ��� : %d", allStudentAvg);
//	return 0;
//}


//#include <stdio.h>
//#define Class 3
//#define Student 5 
////���� : �б��� ��ռ����� ���ϰ�, ��ü �л����� ��ռ����� ���Ͻÿ�
//int main(void)
//{
//	int s[Class][Student] = {
//		{0,1,2,3,4},
//		{10,11,12,13,14},
//		{20,21,22,23,24}
//	};
//	int total = 0, subtotal;
//
//	for (int i = 0; i < Class; i++) {
//		subtotal = 0;
//		for (int j = 0; j < Student; j++) {
//			subtotal += s[i][j];
//		}
//		printf("�б� %d�� ��ռ��� : %d\n", i, subtotal / Student);
//		total += subtotal;
//	}
//	printf("��ü �л����� ��ռ��� : %d", total / (Class * Student));
//
//	return 0;
//}

//#include <stdio.h>
//#define MAX_SIZE 10
//// ���� : �迭�� �̿��ؼ� �����͸� �����Ͻÿ� ��) array[0] �� 1�� ���� ���ķ� +1�� �ǵ��� �Ѵ�.
//// �迭�� �̿��ؼ� �����͸� ���
//int main(void)
//{
//	int array[MAX_SIZE];
//	
//	for (int i = 0; i < MAX_SIZE; i++) {
//		array[i] = i + 1;
//		printf("%d ", array[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#define ROWS 3
//#define COLS 4
//// ���� : �迭�� �̿��ؼ� �����͸� �����Ͻÿ� ��) array[0] �� 1�� ���� ���ķ� +1�� �ǵ��� �Ѵ�.
//// �迭�� �̿��ؼ� �����͸� ���
//int main(void)
//{
//	int array[ROWS][COLS];
//
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			array[i][j] = i * COLS + j + 1;
//			printf("%d ", array[i][j]);
//		}
//	}
//}

//#include <stdio.h>
////ũ�Ⱑ 3x3dls 2���� �迭 ����, ����ڷκ��� 9���� ���� ���� �Է¹޾� �迭�� ������ ��, �迭 ���� ���
//#define ROWS 3
//#define COLS 3
//
//int main(void)
//{
//	int array[ROWS][COLS];
//
//	printf("���� 9���� �Է��ϼ��� : \n");
//
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			scanf_s("%d", &array[i][j]);
//			// &arr : �迭 ��ü�� ����Ű�� �ּҰ� �ȴ�. 
//			// arr : �迭�� ù��° ��Ҹ� ����Ű�� �ּҰ� �ȴ�. 1���� �迭�� ����Ű�� ������ �̴�.
//			// &�� ���� �ȵǴ� ��� : �������� �ڷ����� �ٸ��� �ǹǷ� �����Ϸ��� ������ �߻���Ű�� �ȴ�. Ȥ�� ��Ÿ�� ������ �߻��� �� �ִ�.
//			//						&�� ���� 2���� �迭�� �����Ϳ� 1���� �迭�� ������ ���� ���°� ��ġ���� �ʾ� �Ͼ�� �����̴�.
//		}
//	}
//	printf("�迭�� ����� �� : \n\n");
//	for (int i = 0; i < ROWS; i++) {
//		for (int j = 0; j < COLS; j++) {
//			printf("%d ", array[i][j]);
//;
//		}
//		printf("\n");
//	}
//
//	printf("%p\n", array);
//	printf("%p", &array);
//}