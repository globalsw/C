//if ��
//���ǹ��� �ۼ��� �� ����ϴ� �����̴�. if���� Ư�� ������ ��(true)��쿡�� �ڵ� ����� 
//�����ϰ� ������ ����(false)�� ��쿡�� �ش� �ڵ� ����� �ǳʶٰ� �ȴ�.

//if(���ǽ�) {
//				//������ ���� ��� ����Ǵ� �ڵ� ��
//}

//���⼭ ���ǽ��� �� �Ǵ� ������ �Ǵ��� �� �ִ� ��, ���ǽ��� ���̸� if���� �ڵ� ����
//����Ǹ�, ���ǽ��� �����̸� if���� �ڵ� ���� �ǳʶٰ� �ȴ�.

//if���� ���� else ���� ����Ͽ�, ������ ������ ��쿡 ������ �ڵ� ���� ������ �� �ִ�.

//if(���ǽ�) {
//				//������ ���� ��� ����Ǵ� �ڵ� ��
//} else {
//				//������ ������ ��� ����Ǵ� �ڵ� ��
//}

//if���� ��ø�Ͽ� ����� �� �� �ִ�. �� ��쿡 ���ǽĿ� ���� �پ��� �ڵ� ���� ����ȴ�.

//if(���ǽ�) {
//				//������ ���� ��� ����Ǵ� �ڵ� ��
//				if(���ǽ�2) {
//						// ���ǽ� 1�� ���ǽ� 2�� ��� ���� ��� ����Ǵ� �ڵ� ��						
//			
// 
// 
//} else {
//				//������ ������ ��� ����Ǵ� �ڵ� ��
//}

//01 if�� �⺻

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &num);
//	
//	if (num % 2 == 0)
//	{
//		printf("%d�� ¦���Դϴ�.\n", num);
//	}
//	printf("ù ��° if���� �������ϴ�.\n");
//	if (num % 2 == 1)
//	{
//		printf("%d�� Ȧ���Դϴ�.\n", num);
//	}
//	printf("�� ��° if���� �������ϴ�.\n");
//}

//02 if-else

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &num);
//
//	if (num % 2 == 0) {
//		printf("%d�� ¦���Դϴ�.\n", num);
//	}
//	else {
//		printf("%d�� Ȧ���Դϴ�.\n", num);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num1 = 0, num2 = 0;
//
//	printf("�� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	if ((num1 + num2) % 2 == 0) {
//		printf("�� ������ ���� ¦���Դϴ�.");
//	}
//	else {
//		printf("�� ������ ���� Ȧ���Դϴ�.");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &num);
//
//	if (num >= 1 && num <= 10) {
//		printf("������� �� �Է�!\n");
//	}
//	else {
//		printf("�߸��� ���� �Է��ϼ̽��ϴ�.");
//	}
//	return 0;
//}

//03 IF �� ��ø
//¦���̸鼭 3�� ����̸� ���
//Ȧ���̸鼭 5�� ����̸� ���

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("���� : ");
//	scanf_s("%d", &num);
//	if (num % 2 == 0) {
//		if (num % 3 == 0) { //3�� ����̸鼭 ¦��
//			printf("%d�� ¦���̸鼭 3�� ����̴�.\n", num);
//		}
//		else {
//			printf("¦���� �ѵ� 3�� ����� X");
//		}
//	}
//	else {
//		if (num % 5 == 0) { //Ȧ���̸鼭 5�� �����?
//			printf("%d�� Ȧ���̸鼭 5�� ����̴�.\n", num);
//		}
//		else {
//			printf("Ȧ���̱� �ѵ� 5�� ����� X");
//		}
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &num);
//
//	if (num % 3 == 0) {
//		if (num % 4 == 0) {
//			printf("%d�� 3�� ����̸鼭 4�� ����̴�.", num);
//		}
//		else {
//			printf("%d�� 3�� ��������� 4�� ����� �ƴϴ�.", num);
//		}
//	}
//	else {
//		if (num % 5 == 0) {
//			printf("%d�� 3�� ����� �ƴϸ鼭 5�� ����̴�.", num);
//		}
//		else {
//			printf("%d�� 3�� ����� �ƴϸ鼭 5�� ����� �ƴϴ�.", num);
//		}
//	}
//	return 0;
//}

//04 ELSE-IF //���ߺб�

//#include <stdio.h>
//
//int main(void)
//{
//	int age = 0;
//	printf("���� �Է� : ");
//	scanf_s("%d", &age);
//
//	if (age >= 20) {
//		printf("�����Դϴ�.\n");
//	}
//	else if (age >= 8) {//���� ������ Ʋ������ �ƴ� �� 
//		printf("�л��Դϴ�.\n");
//	}
//	else {
//		printf("������ �Ƶ��Դϴ�.");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int score = 0;
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &score);
//
//	if (score >= 90) {
//		printf("A����\n");
//	}
//	else if (score < 90 && score >= 80) {
//		printf("B����\n");
//	}
//	else if (score < 80 && score >= 70) {
//		printf("C����\n");
//	}
//	else if (score < 70 && score >= 60) {
//		printf("D����\n");
//	}
//	else {
//		printf("F����");
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 0, eng = 0, mat = 0;
//	int total = 0;
//	int avg = 0;
//
//	printf("����, ����, ���� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d %d", &kor, &eng, &mat);
//
//	total = kor + eng + mat;
//	avg = total / 3;
//
//	if (kor >= 40 && eng >= 40 && mat >= 40) {
//		if (avg >= 60) {
//			printf("�հ�");
//		}
//		else {
//			printf("���հ�");
//		}
//	}
//	else {
//		printf("���հ�");
//	}
//	return 0;
//}

