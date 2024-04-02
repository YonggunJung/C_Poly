#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void) {
	int year;
	printf("연도를 입력하세요 : ");
	scanf("%d", &year);
	int y = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	printf("윤년 여부 = %d\n", y);
	return 0;
}

//int main(void)
//{
//	double a, b;
//
//	a = 1.1 + 0.1;
//	b = 1.2;
//
//	printf("a==b의 결과: %d \n", a == b);
//	printf("fabs(a-b)<0.00001의 결과: %d \n", fabs(a - b) < 0.00001);
//	return 0;
//}


//int main(void)
//{
//    int x, y, pre, post;
//    x = 1;
//    y = 1;
//    pre = ++x;		// pre는 2가 된다.
//
//    post = y++;		// post는 1이 된다. 
//    printf("pre=%d post=%d\n", pre, post);
//    printf("x=%d y=%d\n", x, y);
//    return 0;
//}