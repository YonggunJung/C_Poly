#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void) {
	int year;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &year);
	int y = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	printf("���� ���� = %d\n", y);
	return 0;
}

//int main(void)
//{
//	double a, b;
//
//	a = 1.1 + 0.1;
//	b = 1.2;
//
//	printf("a==b�� ���: %d \n", a == b);
//	printf("fabs(a-b)<0.00001�� ���: %d \n", fabs(a - b) < 0.00001);
//	return 0;
//}


//int main(void)
//{
//    int x, y, pre, post;
//    x = 1;
//    y = 1;
//    pre = ++x;		// pre�� 2�� �ȴ�.
//
//    post = y++;		// post�� 1�� �ȴ�. 
//    printf("pre=%d post=%d\n", pre, post);
//    printf("x=%d y=%d\n", x, y);
//    return 0;
//}