// 01 ������ �ޱ�

//#include <stdio.h>
//
//int main(void)
//{
//	int n1 = 0;
//	printf("���� 1 �Է� : ");
//	scanf_s("%d", &n1);
//	//scanf_s : ǥ���Է���ġ(���� Ű����)�κ��� ���α׷� �������� ���� ���� �� ���
//	// "%d" : ���� ���Ŀ� �°� ���� �ްڴ�.
//	// & : (���� ������) : ������ �ּҰ��� ��ȯ
//	// n1 : ������
//	printf("�Է��� �� : %d\n", n1);
//}

//#include <stdio.h>
//
//int main()
//{
//	int n1 = 0; 
//	int n2 = 0;
//	printf("���� 2�� �Է� : ");
//	scanf_s("%d %d", &n1, &n2); //���� �����̽��� Ȥ�� ����Ű�� �������� ������ Ȯ��
//
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//}
//
//#include <stdio.h>
//int main(void)
//{
//	int n1 = 0, n2 = 0, n3 = 0;
//
//	printf("���� 3���� �Է��ϼ��� : ");
//	scanf_s("%d %d %d", &n1, &n2, &n3);
//
//	printf("%d + %d + %d = %d\n", n1, n2, n3, n1 + n2 + n3);
//	printf("%d * %d * %d = %d\n", n1, n2, n3, n1 * n2 * n3);
//	printf("%d - %d - %d = %d\n", n1, n2, n3, n1 - n2 - n3);
//
//	return 0;
//}

//03 scanf_s ���Ĺ��ڿ� ���� �� �ޱ�

// %d 10�� ����
// %f �Ǽ�(float ��)
// %lf �Ǽ�(double ��)
// %c ���� ����
// %s ���ڿ� ����

//#include <stdio.h>
//
//int main(void)
//{
//	int n1;
//	double n2;
//	char ch;
//
//	printf("���� �Է� >> ");
//	scanf_s("%d", &n1);
//	printf("����� ���� : %d\n", n1);
//
//	printf("�Ǽ� �Է� >> ");
//	scanf_s("%lf", &n2);
//	printf("����� �Ǽ� : %lf\n", n2);
//
//// scanf�� �ݺ������� ����� �� ���ڰ� �Է°� ���ڰ� �Է� ���̿� ���� ������ �߻��Ѵ�.
//// ���� ���۰����� �ʱ�ȭ�������� ������ ���۰����� �����ִ� ���� or ���ڿ� ����
//// ���� scanf�� �Էµ� ������ �ؼ��Ǳ� ������ ������ �߻��Ѵ�.
//	//rewind(stdin); //�����ִ� ���� ������ �ʱ�ȭ �����ش�.
//	printf("���� �Է� >> ");
//	scanf_s("%c", &ch);
//	printf("����� ���� : %c\n", ch);
//}

//04 ���ڿ� �ޱ�
//#include <stdio.h>
//
//int main(void)
//{
//	char gender;
//	char name[20];
//
//	printf("���� (M/W) :");
//	scanf_s("%c", &gender); //���α׷��� gender ������ ũ������� ���� ����� �����̴�.
//
//	printf("�̸� : ");
//	scanf_s("%s", name); //���α׷����� ������ ũ�⸦ �˷��ش�.
//	// �迭�� &�� ������ �� �ִ�. (������ ��Ʈ���� ����)
//
//	printf("==== �Է� Ȯ�� ====\n");
//	printf("�̸� : %s\n ���� : %c\n", name, gender);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int korea = 0, english = 0, math = 0;
//	int total = 0;
//	double avg = 0.0;
//
//	printf("���� ���� ���� ������ �Է��ϼ��� : ");
//	scanf_s("%d %d %d", &korea, &english, &math);
//
//	total = korea + english + math;
//	avg = (double)total / 3;
//
//	printf("���� : %d\n", total);
//	printf("��� : %.2lf\n", avg);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int age = 0;
//	char name[20] = { 0, };
//	printf("����� �̸��� �����Դϱ�?");
//	scanf_s("%s", name, sizeof(name));
//	
//	printf("%s���� ���̴� ����Դϱ�?", name);
//	scanf_s("%d", &age);
//
//	printf("%s ���� ���̴� %d�� �Դϴ�", name, age);
//
//	return 0;
//}
