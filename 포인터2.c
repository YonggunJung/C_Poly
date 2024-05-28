#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main21(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("배열이름 = %u\n", a);
	printf("첫 번째 원소 = %u\n", &a[0]);
	
	return 0;
}

int main22(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int* p;

	p = a;
	printf("a[0] = %d a[1] = %d a[2] = %d \n", a[0], a[1], a[2]);
	printf("p[0] = %d p[1] = %d p[2] = %d \n", p[0], p[1], p[2]);

	return 0;
}

int main23(void)
{
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	printf("i = %d\n", i);

	**q = 300;
	printf("i = %d\n", i);

	return 0;
}

int main24(void)
{
	int arr1[] = {1, 2, 3};
	int arr2[] = {4, 5, 6};
	int arr3[] = {7, 8, 9};
	int* arr[] = {arr1, arr2, arr3};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
int add(int, int);
int sub(int, int);
int main25(void)
{
	int result;
	int (*pf)(int, int);

	pf = add;
	result = pf(10, 20);
	printf("%d", result);

	pf = sub;
	result = pf(10, 20);
	printf("%d", result);



	return 0;
}
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}