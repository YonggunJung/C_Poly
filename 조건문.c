#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void)
{
	int a, b, c;
	float avg;
	int avgs;
	char grade;

	printf("���� �Է�: ");
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
	printf("����:%c", grade);
	return 0;
}


//���� ����
//int main(void)
//{
//	int a, b, c;
//	double d, x1, x2;
//	
//	printf("��� a, b, c �Է�: ");
//	scanf("%d %d %d", &a, &b, &c);
//	d = b * b - 4.0 * a * c;
//	if (d == 0) {
//		printf("����=%f\n", -c / (float)b);
//	}
//	else if (d < 0) {
//		x1 = (-b + sqrt(d) / (2.0 * a));
//		x2 = (-b - sqrt(d) / (2.0 * a));
//		printf("ù ��° �Ǳ�=%f\n", x1);
//		printf("�� ��° �Ǳ�=%f\n", x2);
//	}
//	else printf("������Դϴ�.\n");
//	return 0;
//}

// switch case��
//int ma/*in(void)
//{
//	int month, days;
//
//	printf("�ϼ��� �˰� ���� ���� �Է��Ͻÿ�: ");
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
//	printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);
//	return 0;
//}*/



//if else��
//int main(void) {
//	int year;
//
//	printf("���� : ");
//	scanf("%d", &year);
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
//		printf("%d���� �����Դϴ�.\n", year);
//	}
//	else {
//		printf("%d���� ����Դϴ�.\n", year);
//	}
//	return 0;
//}

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