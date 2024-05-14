#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main22(void) {
	int a[3][5] = { {0, 1, 2, 3, 4}, {0, 1, 2, 3, 4} , {0, 1, 2, 3, 4} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("a[%d][%d] = %d\t", i, j, a[i][j]);
		}
		printf("\n");
	}

	a[2][3] = 90;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("a[%d][%d] = %d\t", i, j, a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int main21(void) {
	int a[] = { 15, -6, 3, 8, -2, 5, 4, -10, 21, 13, 16, -4, -9, -14, 7 };
	int psum = 0;
	int msum = 0;
	for (int i = 0; i < sizeof(a)/sizeof(int);i++) {
		if (a[i] > 0) psum += a[i];
		else msum += a[i];
	}

	printf("양수들의 합 : %d\n음수들의 합 : %d", psum, msum);
	return 0;
}