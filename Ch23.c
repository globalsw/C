// �����ͷμ��� void 

// �����͸� ������ �� ������ Ÿ������ void�� ����ϸ�, � ������ Ÿ���� �޸� �ּҵ� ������ ������ �Ҵ� �� �� �ִ�.
// �̰��� �Ϲ� ������, �Ǵ� void �����Ͷ�� �Ѵ�.

// void �����ʹ� ������ ������ �Ұ���. �׷��� �ش� �޸��� ������ �аų� ���� ���ؼ��� ������ ������ Ÿ������ ĳ����(����ȯ)��
// ���־�� �Ѵ�.

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	float fnum = 3.14;
//
//	void* ptr;
//	ptr = &num;
//	printf("%d\n", *(int *)ptr);
//
//	ptr = &fnum;
//	printf("%f\n", *(float*)ptr);
//}

// Static ����

// static �̶�� Ű���带 ����Ͽ� static ������ ���� �� �� �ִ�. static�� ����������
// ���� ���� ��� ������ ����.

// static�� ���������� �Ϻ� �������ִ� ������ �ϱ� ����. 

// static�� ������� ���� �� : ����� ���� ������ ������ �Ҹ��� �ݺ�

// static�� ����� ��� : ����� ���� ������ ������ �Ҹ��� �ݺ������� static ������ �״�� �����ִ´�.

//#include <stdio.h>
//
//void test()
//{
//	int count = 0;
//	static int num = 0;
//	num++;
//	count++;
//	printf("The Count is %d\n", count);
//	printf("The num is %d\n\n", num);
//}
//
//int main(void)
//{
//	test();
//	test();
//	test();
//
//	return 0;
//}
//
//#include <stdio.h>
//
//static void printMessage() {
//	printf("This is a static functio nwith void return type.");
//}
//
//int main()
//{
//	printMessage();
//	return 0;
//}

//�� �ڵ�� void��ȯ���� ������ ���� �Լ��� ���� �� �����ϰ� �ִ�.
//���� �Լ������� printMessage�Լ��� ȣ���ϰ� �ִ�. ��ȯ���� ���� �Լ��̹Ƿ�, ȣ������ ������ �����ϰų� ������� �ʴ´�.
//static Ű����� �� �Լ��� ���ǵ� �Ҽ� ���Ͽ����� ����� �� �ֵ��� �����Ѵ�. CH23.c������ ����ǰ�. static�� ���ٸ� 58~60�ٿ� �ִ� �ڵ尡 CH01�� �־ �����
//void ��ȯ���� ��ȯ���� �ʿ����� ���� �Լ��� ��쿡 �ַ� ����Ѵ�.