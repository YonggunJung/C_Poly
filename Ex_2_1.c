# define _CRT_SECURE_NO_WARNINGS  // vs는 c++컴파일러라서 c랑 충돌이 있을수 있어서 무시한다는 것 scanf를 쓸때는 무조건 젤 윗줄에 써야함
# include <stdio.h>

int main(void)
{	
	//89p 5번
	int x, y, z;
	printf("정수 3개를 입력하세요:");
	scanf("%d %d %d", &x, &y, &z);
	printf("첫 번째와 두 번째 정수를 합한 후 세 번째 정수로 나눈 결과 : %d", (x+y)/z);

	//89p 4번
	//int a, b, c;
	//printf("정수를 입력하시오:");
	//scanf("%d", &a);
	//printf("정수를 입력하시오:");
	//scanf("%d", &b);
	//printf("정수를 입력하시오:");
	//scanf("%d", &c);
	//printf("평균은 %d입니다", (a+b+c)/3);
	

	//89p 3번
	//int age;
	//scanf("%d", &age);
	//printf("나이를 입력하시오 : %d\n", age);
	//printf("내년이면 %d살이 되시는군요.", age + 1);

	//89p 2번
	//int price, count;
	//scanf("%d %d", &price, &count);
	//printf("상품 가격을 입력하시오(원) : %d\n", price);
	//printf("개수를 입력하시오 : %d\n", count);
	//printf("총 가격은 %d원입니다.", price * count);

	//89p 1번
	//printf("#     #\n#     #\n#     #\n#######\n#     #\n#     #");
}


//int main(void)
//{
//	int wage, work, t, m, p;
//
//	scanf("%d %d %d %d %d", &wage, &work, &t, &m, &p);
//	printf("월급을 입력하시오 : %d\n", wage);
//
//	printf("한 달에 며칠 출근하나요 : %d\n", work);
//
//	printf("하루 교통비를 입력하시오 : %d\n", t);
//
//	printf("하루 식비를 입력하시오 : %d\n", m);
//
//	printf("하루 용돈을 입력하시오 : %d\n", p);
//
//
//	printf("월 저축액 %d:", wage - (t * work) - (m * work) - (p * work));
//
//
//}

//int main(void)
//{
//
//	int x, y; //한 줄에서 여러 개의 변수를 선언할 수도 있다.
//
//	printf("정수 2개를 입력하시오 :"); // 입력안애 메세지 출력
//	scanf("%d %d", &x, &y); // 여러개의 정수를 받을 수 있다
//
//	printf("%d + %d = %d\n", x, y, x + y);
//	printf("%d - %d = %d\n", x, y, x - y);
//	printf("%d * %d = %d\n", x, y, x * y);
//	printf("%d / %d = %d\n", x, y, x / y);
//	printf("%d mod %d = %d\n", x, y, x % y);
//
//}


//int main(void)
//{
//
//	int x, y, sum, dif, mul, div, remind;
//	long long mul1, x1, y1;
//	x = 100;
//	y = 200;
//	x1 = 100000;
//	y1 = 200000;
//	sum = x + y;
//	dif = x - y;
//	mul = x * y;
//	mul1 = x1 * y1;
//	div = y / x;
//	remind = x % y;
//
//	printf("x + y = %d\n", sum);
//	printf("x - y = %d\n", dif);
//	printf("x * y = %d\n", mul);
//	printf("x1 * y1 = %lld\n", mul1);
//	printf("y / x = %d\n", div);
//	printf("y mod x = %d\n", remind);
//	printf("y % x = %d\n", remind);
//
//	printf("%f\n", 1.23456789);   // 기본 소수점 6자리까지 나옴
//
//	return 0;

//}