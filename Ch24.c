// �Լ� ��ȭ

// �迭�� ���޹޴� �Լ��� ���� 

// �迭�� ���� ���� �����͸� �ϳ��� ������ �����ϱ� ���� ����ϴ� �ڷ���
// �Լ����� �迭�� ���޹��� ������ �迭�� �̸��� �״�� �Լ��� ���ڷ� �����Ѵ�.
// �� �� �迭�� �̸��� 'ù ��° ����� �ּҸ� ��Ÿ����.'
// �Լ������� ���޹��� �迭�� ù ��° ��Ҹ� ����Ű�� ������ ������ �����Ͽ� ����Ѵ�.

//#include <stdio.h>
//
//void printArray(int *arr, int size)
//{
//	for (int i = 0; i < size; i++) {
//		printf("%d", *arr + i);
//	}
//	// �� �Լ��� �迭�� ù ��° ��Ҹ� ����Ű�� ������ ���� 'arr'��
//	// �迭�� ũ�� 'size'�� ���ڷ� ���޹޴´�. �׸��� for���� ����� �迭�� �� ��Ҹ� ���
//	//
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//
//	printArray(arr, 5);
//	//printArray �Լ������� 'arr' �迭�� ù ��° ��Ҹ� ����Ű��
//	// ������ ���� 'arr'�� ����Ͽ� �迭�� ��� ��Ҹ� ����� �� �ִ�.
//}

// Call - by - value, Call - by - reference

// Call - by - value : ���� ���� ȣ��
// �Լ� ȣ�� �� ���ڷ� ���޵Ǵ� ���� ����Ǿ� �Լ� ���η� ���޵ȴ�.
// �Լ� ���ο��� ���� ���� ����Ǿ, �Լ��� ȣ���� �������� ������ ���� �ʴ´�.

//#include <stdio.h>
//
//void swap(int x, int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//	// �� ���� ������ ���� �ٲٴ� �Լ�
//	// �� �Լ��� ���� �����ؼ� ó���ϱ� ������ �Լ��� ȣ���� �������� �ƹ� ��ȭ�� ����.
//}
//
//int main(void)
//{
//	int a = 10, b = 20;
//	swap(a, b);
//	printf("a = %d, b = %d\n", a, b);
//}

//Call - by - reference : ������ ���� ȣ��
// �Լ� ȣ�� �� ���ڷ� ���޵Ǵ� ���� �ּҰ� �Լ� ���η� ���޵ȴ�.
// �Լ� ���ο��� ���� ���� ����Ǹ�, �Լ��� ȣ���� �������� ������ ����.

//#include <stdio.h>
//
//void swap(int* x, int* y)
//{
//	printf("%d\n", *x);
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//	// �� �Լ��� �ΰ� �� ������ �޾Ƽ� ���� �ٲٴ� �Լ��̴�.
//	// ������ ������ ����Ͽ� ������ ���� �����Ѵ�.
//	// �̷��� �ϸ� �Լ��� ȣ���� �������� ������ �޴´�.
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	printf("%d \n %d\n", &a, &b);
//	swap(&a, &b);
//
//	printf("a = %d b = %d", a, b);
//}

//#include <stdio.h>
//#include <string.h>
//
//// �־��� ���� �迭���� ���� ū ���� ã�� �Լ� findMax�� �ۼ��Ͻÿ�
//int findMax(int* arr, int size)
//{
//	int max = arr[0];
//
//	for (int i = 1; i < size; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	return max;
//}
//
//int main(void)
//{
//	int arr[] = { 12,45,7,56,89,23,9 };
//	int size = sizeof(arr) / sizeof(arr[0]); //sizeof(int)�� �Ҽ� �� ������ sizeof(arr[0]) �ص� ��.
//	int max = findMax(arr, size);
//	printf("�迭���� ���� ū �� : %d\n", max);
//}

//#include <stdio.h>
//// ����ڷκ��� ��� ���� ũ�⸦ �Է¹��� �� , �ش� ũ���� 2���� ���� �迭�� �����ϰ� ����ڷκ��� ���� �Է¹޾�
//// �迭�� �ʱ�ȭ �� ����, �迭�� �� ��� ���� ����� ����ϴ� ���α׷� �ۼ�
//
//int main(void)
//{
//	int row, col;
//	int arr[100][100] = { 0 };
//	int rsum[100] = { 0 };
//	int csum[100] = { 0 };
//
//	printf("��� ���� ũ�⸦ �Է��ϼ��� : ");
//	scanf_s("%d %d", &row, &col);
//	printf("�迭�� �Է��ϼ��� : \n");
//
//	int arr[rows][cols];
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			scanf_s("%d", &arr[i][j]);
//			rsum[i] += arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < col; i++) {
//		for (int j = 0; j < row; j++) {
//			csum[i] += arr[j][i];
//		}
//	}
//
//	for (int i = 0; i < row; i++) {
//		printf("\nindex�� %d�� �� �� : %d\n", i, rsum[i]);
//		printf("index�� %d�� �� �� : %d\n", i, csum[i]);
//
//		printf("\n");
//	}
//}