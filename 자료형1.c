# define _CRT_SECURE_NO_WARNINGS  // vs는 c++컴파일러라서 c랑 충돌이 있을수 있어서 무시한다는 것 scanf를 쓸때는 무조건 젤 윗줄에 써야함
# include <stdio.h>
# include <math.h>
# define KMH_TO_MS (1000/3600.0)    // km/h를 m/s로 변환하기 위한 상수

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
//	printf("강속구가 홈플레이트에 도달하는 걸리는 시간 : %f초\n", time);
//	return 0;
//	// float을 써도 똑같다
//}

//int main(void) 
//{
//	double distance = 18.4;
//	double speed = 160 * KMH_TO_MS;
//	double time = distance / speed;
//
//	printf("강속구가 홈플레이트에 도달하는 걸리는 시간 : %lf초\n", time);
//	return 0;
//}


//int main(void)
//{
//	double num1, num2, num3;
//	double sum = 0;
//	double mean, variance, std;
//
//	printf("3개의 실수를 입력하세요 : ");
//	scanf("%lf %lf %lf", &num1, &num2, &num3);
//
//	sum = num1 + num2 + num3;
//	mean = sum / 3;
//	variance = (pow(num1 - mean, 2)) + (pow(num2 - mean, 2)) + (pow(num3 - mean, 2));
//	std = sqrt(variance) / 3;
//
//	printf("평균 : %.2lf\n", mean);
//	printf("표준편차 : %.2lf\n", std);
//
//	return 0;
//
//}