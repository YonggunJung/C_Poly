#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>		//system�Լ��� ����ϱ� ���� �������
#include <windows.h>	// Sleep �Լ��� ����ϱ� ���� �������

int main(void) {

	system("dir/w");	//���� ���丮�� ���� ����� ���
	
	Sleep(2000);	//2�ʰ� ���α׷��� �Ͻ�����

	system("cls");		//cmd ���� ����� ipconfig��ɾ� ����
	system("ipconfig/all");

	return 0;
}