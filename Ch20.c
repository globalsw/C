// ���ڿ��� ������

// ���� ǥ�����

// ��ǻ�Ϳ����� ������ ���ڿ� �����ڵ带 �ٿ��� ǥ���Ѵ�.
// �ƽ�Ű�ڵ�(ASCII code) : ǥ������ 8��Ʈ �����ڵ�
// 0���� 127������ ���ڸ� �̿��� ����ǥ��
// ������ �����ڵ带 ���

// �����ڵ�(Unicode) : ǥ������ 16��Ʈ �����ڵ�
// �������� ��� ���ڸ� �ϰ��ǰ� ǥ���ϰ� �ٷ� �� �ֵ��� ����

// ���� ���
//
//#include <stdio.h>
//
//int main(void)
//{
//	char cod1 = 'A';
//	char cod2 = 65;
//
//	//%c : ���ڸ� �Է¹ްų� ����� �� ����ϴ� ���� �������̴�.
//	printf("%c,  %d\n", cod1, cod1);
//	printf("%c, %d\n", cod2, cod2);
//
//	return 0;
//}

//�ƽ�Ű�ڵ� ���
//#include <stdio.h>
//
//int main(void)
//{
//	char ascii = 'NUL';
//
//	for (int i = 0; i < 128; i++) {
//		printf("�ƽ�Ű�ڵ� ��� : %c\n", ascii++);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	unsigned char code;
//	for (code = 0; code < 128; code++) {
//		printf("�ƽ�Ű�ڵ� %d�� %c �Դϴ�.\n", code, code);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char good[] = "Good";
//	char* bad = "Bad";
//
//	printf("%s %s\n", good, bad);
//
//	//�Ʒ��� ���� ������ �����Ͽ��� ��� ������ �߻���Ű���� ������ ������ ����� ������ ������ �����Ϸ��� �õ��� ���� �߸��� �����̴�.
//
//	good[0] = "H"; //�̻��� ���ڷ� ����
//	good[0] = 'H'; // �� ����
//	printf("%s %s\n", good, bad);
//
//	//good = "New Good"; //�Ұ���(������ ����) // �迭��� ���ڿ��� ���ο� �ּҰ� �Ҵ� �Ұ��� 
//	bad[0] = 'S'; //�Ұ���(������ ������ ���� ��ȭ ���� ����ó���� // ������ ��� ���ڿ��� ���� ��ڰ��� �Ҵ��� �ȵȴ�.
//	printf("%s\n", bad);
//}

// ���� ����� ���̺귯�� 

// int getchar(void) : �ϳ��� ���ڸ� �о ��ȯ�Ѵ�.
// void putchar(int c) : ���� c�� ����� ���ڸ� ����Ѵ�.
// scanf("%c", &c) : �ϳ��� ���ڸ� �о ���� c�� �����Ѵ�.
// printf("%c", c) : ���� c�� ����� ���ڸ� ����Ѵ�.

//#include <stdio.h>
//
//int main(void)
//{
//	int ch;
//
//	while (1) {
//		ch = getchar();
//		if (ch == 'q') {
//			break;
//		}
//		putchar(ch);
//	}
//}

// ���ڿ� ���� ����� �Լ�
//
//#include <stdio.h>
//
//int main(void)
//{
//	char str[10];
//	printf("���ڿ��� �Է��ϼ��� >>> ");
//	fgets(str, sizeof(str), stdin); // fgets() �Լ��� ����Ͽ� ���ڿ��� �Է¹���
//	// stdin : �⺻������ Ű������ �Է��� �޾Ƶ��δ�.
//	puts(str);
//	return 0;
//}

// ���ڿ� ó�� �Լ�

//#include <stdio.h>
//#include <string.h> //C����� ǥ�� ���̺귯���� ��� ���� �� �ϳ��̴�.
//#pragma warning(disable:4996) //���� ����� ��� ����
//
//// string.h �ֿ��Լ�
//
//// strlen(str) : ���ڷ� ���޵� �ּ��� ���ڿ����� NULL���ڸ� ������ ���ڿ� ���̸� ��ȯ
//// strcpy(str1, str2) : �� ��° ���ڷ� ���޵� �ּ��� ���ڿ��� ù ��° ������ �ּҿ� ����
//// strncpy(str1, str2, count) : �� ��° ���ڷ� ���޵� �ּ��� ���ڿ��� ù ��° ������ �ּҿ� �����ϵ� ���ϴ� ������ŭ�� ����
//// strcat(str1, str2) : �� ��° ���ڷ� ���޵� �ּ��� ���ڿ��� ù ��° ���ڷ� ���޵� �ּ��� ���ڿ��� �̾� ���̱�
//// strcmp(str1, str2) : ���ڷ� ���޵� �� ���ڿ��� ���Ͽ� ������ ���ٸ� 0��, ���� �ʴٸ� 0�� �ƴ� ���� ��ȯ
//
//int main(void)
//{
//	//strcpy() �Լ��� strncpy() �Լ��� C���� ���ڿ��� ������ �� ���Ǵ� �Լ�
//	//strcpy() �Լ��� ù ��° ���ڷ� ���޵� ���ڿ��� ũ�⸦ �˻����� �����Ƿ�, ������ ������ ũ�Ⱑ �� ��° ���ڷ� ���޵� ���ڿ����� ũ�� ���� �����÷ο�(overflow)�� �߻��� �� �ִ�.
//	/*char src[] = "Hello, World";
//	char dest[20];
//	strcpy_s(dest, sizeof(dest), src);
//	printf("%s", dest);*/
//
//	// ���� �����÷ο츦 ���� �� �� ������ ������ ���ڿ��� �� ���ܹ��� ���� X, ���� ������ ���ڿ� ���� �� ���� ���ڸ� �߰��� �־�� �Ѵ�.
//	char src[] = "Hello world";
//	char dest[20];
//	// strncpy : ������ ���ڿ��� ���̰� ��ǥ ������ ũ�⺸�� �۰ų� ������, �� ���ڿ��� �����ϰ� ���� ������ �� ���ܹ��ڷ� ä���.
//	strncpy(dest, src, sizeof(dest)); //sizeof : ���� �Ǵ� �ڷ����� ũ�⸦ ��ȯ�Ѵ�.
//	dest[sizeof(dest) - 1] = '\0'; // \0 : null ���� ,������ ���ڿ��� ���� �� ���� ���� �߰�
//	printf("%s", dest);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	char str1[50] = "korea";
//	char str2[50] = "korea";
//	
//	// str1�� ���ڿ� ���̱�
//	
//	//strcat : ���ڿ��� �̾���� �� ���Ǵ� �Լ�
//	strcat(str1, "It");
//	printf("%s", str1);
//	printf("\n");
//
//	//str2�� 7���� ���� ���̱� 
//	strcat(str2, "It");
//	printf("%s\n", str2);
//
//	//str1�� str2�� ��
//	//strcmp : ���ڿ��� ���� �� ���Ǵ� �Լ�
//	printf("�� ��� : %d\n", strcmp(str1, str2));
//
//	return 0;
//
//}

//#include <stdio.h>
////���ڿ� �Է¹޾�, ������ �� ù��° hello �ι�° Hello ��� �� ���ڿ��� �ٸ��ϴ� �����ϴ�.
//int main(void)
//{
//	char str1[100];
//	char str2[100];
//	printf("ù ��° ���ڿ� �Է� : ");
//	fgets(str1, sizeof(str1), stdin);
//	printf("�� ��° ���ڿ� �Է� : ");
//	fgets(str2, sizeof(str2), stdin);
//
//	if (strcmp(str1, str2) == 0) {
//		printf("�� ���ڿ��� �����ϴ�.");
//	}
//	else {
//		printf("�� ���ڿ��� �ٸ��ϴ�.");
//	}
//	return 0;
//}
