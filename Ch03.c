//(�ڷ�)����ȯ

//�ڵ�����ȯ(�Ͻ��� ����ȯ) : �����Ϸ��� ���� �ڵ�����ȯ		
//��������ȯ(����� ����ȯ) : ���α׷��ӿ� ���� ���� ����ȯ

//01 �ڵ�����ȯ
//�ڷ��� ��ȯ�� ������ �սǰ��ɼ��� ���� �� �����Ϸ�(c��� ���α׷�)�� ���� �ڵ����� �ڷ��� ��ȯ
// ex) ū ���� = ������ 
//
// �ڵ�����ȯ ����
// char < short < int < long < long long < float < double
//
//#include <stdio.h>
//
//int main(void)
//{
//	short svar = 10;
//	int ivar = svar; //�ڵ�����ȯ (ū���� == ������) ū������ �������� ����
//
//	printf("invar = %d\n", ivar);
//
//	char cvar = 'a';
//	ivar = cvar;
//	printf("ivar= %d\n", ivar);
//
//	long long lvar = ivar; //(����) �ڵ�����ȯ�� �Ǳ�� �ϳ� ���� ����� �ƴϴ�.
//	printf("lvar = %d\n", lvar);
//	
//	float fvar = lvar;
//	printf("fvar = %f\n", fvar);
//
//	double dvar = lvar;
//	printf("dvar = %f\n", dvar);
//}

//02 ��������ȯ
//���α׷��ӿ� ���� Ư���� �ڷ������� ���� ����ȯ �ϴ� ���
//���� : ������ �ս� ���ɼ��� ����.
//#include <stdio.h>
//
//int main(void)
//{
//	//int : �� -21�� ~ +21����� short : �� -32000 ~ + 32000���� char : -128 ~ +127
//	int ivar = 50000;
//	short svar = (short)ivar; //���� ����ȯ
//	char cvar = (char)ivar; //���� ����ȯ
//	printf("svar = %d\n", svar);
//	printf("cvar = %d\n", cvar);
//}

//03����� �ڵ�(����) ����ȯ(������)

//#include <stdio.h>
//
//int main(void)
//{
//	int num = 10;
//	int div = 4;
//	double r1 = num / div;
//	double r2 = (float)num / div;
//
//	printf("r1 = %f\n", r1);
//	printf("r2 = %f\n", r2);
//
//}