#include <stdio.h>		//�ٸ� ���� �ȿ� �������� <> �ε�ȣ�� ����.
#include "func.h"  // ���� ���� �ȿ� ������ "" ū ����ǥ�� ����.

void main() {
	int x = 35;
	int y = 19;

	printf("�� �� %d�� %d�� �� = %d\n", x, y, Sum(x, y));
	printf("�� �� %d�� %d�� �� = %d\n", x, y, Dif(x, y));
}