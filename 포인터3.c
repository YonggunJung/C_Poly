#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main31(void)
{
	//const������
	char s[] = "Barking dogs seldom bite.";
	char t[] = "A bad workman blames his tools";
	const char* p = s;	//p�� ����Ű�� ���� ������ ���� �Ұ�, p�� ���� ����
	char* const q = s;	// q�� ����Ű�� ���� ���� ���� ����, q�� ���� �Ұ�

	//p[3] = 'a';	p�� ����Ű�� ���� ������ ���� �Ұ�
	
	p = t;		// p�� ���� ����
	
	q[3] = 'a';		// q�� ����Ű�� ���� ���� ���� ����

	//q = t;	// q�� ���� �Ұ�

	return 0;
}