#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void) {
	int year;

	printf("���� : ");
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ����Դϴ�.\n", year);
	}
	return 0;
}

//int main(void) {
//	int t;
//
//	printf("�µ� : ");
//	scanf("%d", &t);
//
//	if (t < 0) 
//		printf("������ �����Դϴ�.\n");
//	else
//		printf("������ �����Դϴ�.\n");
//
//	printf("���� �µ��� %d�� �Դϴ�.\n", t);
//
//	return 0;
//}