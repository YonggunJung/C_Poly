#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int c = 0;
	for (int i = 2; i <= 100; i++) {
		int flag = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag = 0;
			}
		}
		if (flag) {
			printf("%3d", i);
			c++;
		}
	}
	printf("\n");
	printf("�Ҽ��� %d��", c);
}



int main8(void) {
	for (int i = 1; i <= 9;i++) {
		printf("%d��\n", i);
		for (int j = 1; j <= 9;j++) {
			printf("%d X %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}
}

int main7(void) {
	int n, sum;
	sum = 0;
	printf("�� �Է� : ");
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) 
	{
		if (i % 2 == 1)
			sum += i;
		else
			sum -= i;
	}
	printf("���� : %d", sum);

	return 0;
}


int main6(void) {
	int n;
	int f = 1;
	printf("�� �Է� : ");
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
		printf("%d�� �Ҽ��Դϴ�.", n);
		
	}
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.", n);
		
	
	return 0;
}


int main5(void)
{
	int n ,sum;
	n = 1;
	sum = 1;

	printf("�� �Է� : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) 
	{
		sum *= i;
	}
	printf("���� : %d", sum);
	return 0;
}


int main4(void) {
	int i, sum;
	sum = 0;

	for (i = 2; i <= 10; i += 2)
		sum += i;

	printf("���� : %d", sum);

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

	printf("���� %d�Դϴ�.\n", sum);
	printf("���ϴ� i�� : %d", (i-1));
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

	printf("���� %d�Դϴ�.\n", sum);
	printf("i�� : %d", i);
	return 0;
}