#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main(void) {
	int n, sum;
	sum = 0;
	printf("수 입력 : ");
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) 
	{
		if (i % 2 == 1)
			sum += i;
		else
			sum -= i;
	}
	printf("합은 : %d", sum);

	return 0;
}


int main6(void) {
	int n;
	int f = 1;
	printf("수 입력 : ");
	scanf("%d", &n);

	for (int i = 2;i<n;i++) 
	{
		
		if (n % i == 0)
		{
			f = 0;
		}
		
	}
	if (f == 1)
	{
		printf("%d는 소수입니다.", n);
		
	}
	else
		printf("%d는 소수가 아닙니다.", n);
		
	
	return 0;
}


int main5(void)
{
	int n ,sum;
	n = 1;
	sum = 1;

	printf("수 입력 : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) 
	{
		sum *= i;
	}
	printf("합은 : %d", sum);
	return 0;
}


int main4(void) {
	int i, sum;
	sum = 0;

	for (i = 2; i <= 10; i += 2)
		sum += i;

	printf("합은 : %d", sum);

	return 0;
}


int main3(void) {
	int i, sum;

	i = 1;
	sum = 0;

	while (sum <= 100000) {
		sum += i;
		i++;
	}

	printf("합은 %d입니다.\n", sum);
	printf("원하는 i는 : %d", (i-1));
	return 0;
}

int main2(void) {
	int i, sum;

	i = 1;
	sum = 0;

	while (i <= 1000) {
		sum += i;
		i++;
	}

	printf("합은 %d입니다.\n", sum);
	printf("i는 : %d", i);
	return 0;
}