//�ݺ���
//���α׷����� �ݺ������� ����Ǵ� �ڵ带 �ۼ��� �� ����Ѵ�.

// 1. while��

// ������ ���� ���� �ݺ������� �ڵ带 �����Ѵ�. while���� ������
// ������ ����.

// while(����)
//{
//		�ݺ������� ����� �ڵ� ��) : ������ ���̸� �ݺ������� ����� �ڵ带 �����ϰ�,
//������ �����̸� �ݺ����� �����Ѵ�.
//}

// 2. do - while��

// do - while�� while���� ���������� ���� �˻縦 �ݺ����� ������ �����Ѵ�.
// ��) �ϴ� �ѹ��� �ݺ����� ������ �� ������ �˻��Ѵ�.

//do
//{
//		�ݺ������� ����� �ڵ�
//} while(����)

//3. ��øwhile
// 
// while�� �ȿ� ��ø�� �����ϴ�.
// 
// while() {
// 
//		while()
// }
// 
//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;//Ż��� ����
//	//Ż��� ���ǽ�
//	//Ż���� ���� ������
//	while (i <= 10)
//	{
//		printf("Hello\n");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1; 
//	int sum = 0;
//
//	while (i <= 100) {
//		printf("i = %d\n", i);
//		sum += i;
//		i++;
//	}
//	printf("while ���� ���� i = %d\n", i);
//	printf("1���� 100������ �� : %d\n",sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	int i = 1;
//	int sum = 0;
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf_s("%d", &num);
//
//	while (i <= num) {
//		sum += i;
//		i++;
//	}
//	printf("%d", sum);
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int i = 1;
//	int dan = 2;
//
//	while (i < 10) {
//		printf("%d * %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int dan = 0;
//	int i = 1;
//
//	printf("����ϱ� ���ϴ� ���� �Է��ϼ��� : ");
//	scanf_s("%d", &dan);
//
//	while (i < 10) {
//		printf("%d * %d = %d\n", dan, i, dan * i);
//		i++;
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	//���� § �ڵ�
//
//	//int odd = 1;
//	//int oddsum = 0;
//	//int even = 2;
//	//int evensum = 0;
//
//	//while (even < 102) {
//	//	evensum += even;
//	//	even += 2;
//	//}
//	//printf("¦���� ���� %d �̴�.\n", evensum);
//	//while (odd < 101) {
//	//	oddsum += odd;
//	//	odd += 2;
//	//}
//	//printf("Ȧ���� ���� %d �̴�.", oddsum);
//
//	//�������� § �ڵ�
//	int i = 1;
//	int evensum = 0;
//	int oddsum = 0;
//
//	while (i <= 100) {
//		if (i % 2 == 0) {
//			evensum += i;
//		}
//		else {
//			oddsum += i;
//		}
//		i++;
//	}
//	printf("1���� 100���� ���߿� ¦���� = %d, Ȧ���� = %d", evensum, oddsum);
//	return 0;
//}