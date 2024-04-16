#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void)
{
	int a, b, c;
	float avg;
	int avgs;
	char grade;

	printf("성적 입력: ");
	scanf("%d %d %d", &a, &b, &c);

	avg = (a + b + c) / 3.0;
	avgs = avg / 10;

	switch (avgs)
	{	
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
		default:
			grade = 'F';
			break;
		
	}
	printf("학점:%c", grade);
	return 0;
}


//근의 공식
//int main(void)
//{
//	int a, b, c;
//	double d, x1, x2;
//	
//	printf("계수 a, b, c 입력: ");
//	scanf("%d %d %d", &a, &b, &c);
//	d = b * b - 4.0 * a * c;
//	if (d == 0) {
//		printf("근은=%f\n", -c / (float)b);
//	}
//	else if (d < 0) {
//		x1 = (-b + sqrt(d) / (2.0 * a));
//		x2 = (-b - sqrt(d) / (2.0 * a));
//		printf("첫 번째 실근=%f\n", x1);
//		printf("두 번째 실근=%f\n", x2);
//	}
//	else printf("허수근입니다.\n");
//	return 0;
//}

// switch case문
//int ma/*in(void)
//{
//	int month, days;
//
//	printf("일수를 알고 싶은 달을 입력하시오: ");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 2:
//		days = 28;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		days = 30;
//		break;
//	default:
//		days = 31;
//		break;
//	}
//	printf("%d월의 일수는 %d입니다.\n", month, days);
//	return 0;
//}*/



//if else문
//int main(void) {
//	int year;
//
//	printf("연도 : ");
//	scanf("%d", &year);
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//		printf("%d년은 윤년입니다.\n", year);
//	}
//	else {
//		printf("%d년은 평년입니다.\n", year);
//	}
//	return 0;
//}

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