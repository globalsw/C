// �����Ϳ� �迭�� ����

// 1. �迭�� �̸��� ������ ���� ������ �ϸ� �迭�� ���۵Ǵ� �޸��� �ּҸ� Ȯ�� �� �� �ִ�.
// 2. �׷��� �迭�� �̸��� ���� ������ �� �� ����.

//#include <stdio.h>
//
//int main(void)
//{
//	int myarr[3] = { 1, 2,3 };
//	printf("%d", myarr[0]);
//	printf("%d", myarr[1]);
//	printf("%d", myarr[2]);
//}

// �ε��� ��ȣ�� ���� �� ��ҿ� ���������� ������ ������ ������ �迭�� �� ��Ұ� �޸� ������ ������ �����ֱ� ����
//#include <stdio.h>
//
//int main(void)
//{
//	int myarr[3] = { 1, 2,3 };
//	printf("�迭�� �� ����� �ּ� Ȯ��\n ");
//	printf("�迭�� �̸� : %p\n", myarr);
//	printf("%p\n", &myarr[0]);
//	printf("%p\n", &myarr[1]);
//	printf("%p\n", &myarr[2]);
//}

// ���� ����� ���� �迭�� �� ����� �ּҰ��� ù ��° ��Һ��� 4����Ʈ�� �����ϴ°� �� �� �ִ�.

// �迭�� �̸��� �� ��ü�� ������ ������ ������ �ϸ�, �迭�� ���۵Ǵ� �޸��� �ּҸ� Ȯ�� �� �� �ִ�.
// �迭�� �̸��� ������ �޸� ���� ������ �Ұ����� ���(Constant) ������ �������̴�.

//#include <stdio.h>
//
//int main(void)
//{
//	// ���ʶ� : �޸𸮿� ������ ������ Ȱ���Ѵ�.
//	// ����Ÿ���̶� : ��) int num = 3; ���� ��ü���� ���� �־���´�.
//	int arr[3] = { 3 };
//	int num = 3;
//	printf("%p\n", arr);
//	printf("%p\n", num);
//}

// �����͸� �迭ó�� ����ϴ¹�
//#include <stdio.h>
//
//int main(void)
//{
//	int a[5] = { 10,20,30,40,50 };
//	int* p;
//
//	//p = a;
//	// �� ��쿡 a�� �迭�� �̸��̸� �迭�� ù ��° ������ �ּҸ� ��Ÿ����. p = a �� ������ p�� �迭 a�� ù ��° ������ �ּҸ� ��Ÿ����.
//	
//	p = &a;
//	// �� ��쿡 &a�� �迭 a�� �����ּҿ� �����ϴ�. p���� a�� ù ��° ���Ҹ� ����Ű�� �ּҰ� �Ҵ�ȴ�.
//	
//	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
//	printf("p[0] = %d p[1] = %d p[2] = %d\n", p[0], p[1], p[2]);
//
//	p[0] = 60;
//	p[1] = 70;
//	p[2] = 80;
//
//	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
//	printf("p[0] = %d p[1] = %d p[2] = %d\n", p[0], p[1], p[2]);
//
//}
