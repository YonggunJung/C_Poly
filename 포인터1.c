#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main11(void) {
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ� : %p\n", &i);		//���� i�� �ּ� ���
	printf("c�� �ּ� : %p\n", &c);		//���� c�� �ּ� ���
	printf("f�� �ּ� : %p\n", &f);		//���� f�� �ּ� ���

	return 0;
}

int main12(void) {
	int number = 10;
	int* p;

	p = &number;

	printf("���� number�� �ּ� = %p\n", &number);	//������ �ּ� ���
	printf("�������� �� = %p\n", p);				//�������� �� ���
	printf("���� number�� �� = %d\n", number);		//������ �� ���
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);		//�����͸� ���� ���� ���� ���
}

