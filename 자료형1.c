# define _CRT_SECURE_NO_WARNINGS  // vs�� c++�����Ϸ��� c�� �浹�� ������ �־ �����Ѵٴ� �� scanf�� ������ ������ �� ���ٿ� �����
# include <stdio.h>
# include <math.h>
# define KMH_TO_MS (1000/3600.0)    // km/h�� m/s�� ��ȯ�ϱ� ���� ���

//int main(void)
//{
//	float a = 0.1f;
//	float b = 0.2f;
//	float c = a + b;
//
//	printf("%f + %f = %.10f\n", a, b, c);
//	return 0;
//}


//int main(void)
//{
//	float distance = 18.4;
//	float speed = 160 * KMH_TO_MS;
//	float time = distance / speed;
//
//	printf("���ӱ��� Ȩ�÷���Ʈ�� �����ϴ� �ɸ��� �ð� : %f��\n", time);
//	return 0;
//	// float�� �ᵵ �Ȱ���
//}

//int main(void) 
//{
//	double distance = 18.4;
//	double speed = 160 * KMH_TO_MS;
//	double time = distance / speed;
//
//	printf("���ӱ��� Ȩ�÷���Ʈ�� �����ϴ� �ɸ��� �ð� : %lf��\n", time);
//	return 0;
//}


//int main(void)
//{
//	double num1, num2, num3;
//	double sum = 0;
//	double mean, variance, std;
//
//	printf("3���� �Ǽ��� �Է��ϼ��� : ");
//	scanf("%lf %lf %lf", &num1, &num2, &num3);
//
//	sum = num1 + num2 + num3;
//	mean = sum / 3;
//	variance = (pow(num1 - mean, 2)) + (pow(num2 - mean, 2)) + (pow(num3 - mean, 2));
//	std = sqrt(variance) / 3;
//
//	printf("��� : %.2lf\n", mean);
//	printf("ǥ������ : %.2lf\n", std);
//
//	return 0;
//
//}