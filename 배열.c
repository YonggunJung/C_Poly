#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5


int main(void) {
	int i, k;
	int list[SIZE] = { 16, 7, 9, 1, 3 };

	for (k = 0; k < SIZE; k++) {
		for (i = 0; i < SIZE - k - 1; i++) {
			if (list[i] > list[i + 1]) {
				int tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}
	for (i = 0; i < SIZE;i++) {
		printf("%3d", list[i]);
	}

}


int main2(void) {
	int scores[] = { 1, 2, 3, 4 ,5 ,6 };
	int i, size;

	size = sizeof(scores) / sizeof(scores[0]);
	printf("배열의 원소수 : %d\n", size);
	for (i = 0; i < size; i++) {
		printf("%3d", scores[i]);
	}
}


int main1(void) {
	int s[SIZE] = { 10, 20, 30 ,40 ,50 };
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("s[%d] = %d\n", i, s[i]);
	}
}
