#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void) {
	int year;

	printf("연도 : ");
	scanf("%d", &year);
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 평년입니다.\n", year);
	}
	return 0;
}

//int main(void) {
//	int t;
//
//	printf("온도 : ");
//	scanf("%d", &t);
//
//	if (t < 0) 
//		printf("영하의 날씨입니다.\n");
//	else
//		printf("영상의 날씨입니다.\n");
//
//	printf("현재 온도는 %d도 입니다.\n", t);
//
//	return 0;
//}