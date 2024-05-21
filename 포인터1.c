#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main11(void) {
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소 : %p\n", &i);		//변수 i의 주소 출력
	printf("c의 주소 : %p\n", &c);		//변수 c의 주소 출력
	printf("f의 주소 : %p\n", &f);		//변수 f의 주소 출력

	return 0;
}

int main12(void) {
	int number = 10;
	int* p;

	p = &number;

	printf("변수 number의 주소 = %p\n", &number);	//변수의 주소 출력
	printf("포인터의 값 = %p\n", p);				//포인터의 값 출력
	printf("변수 number의 값 = %d\n", number);		//변수의 값 출력
	printf("포인터가 가리키는 값 = %d\n", *p);		//포인터를 통한 간접 참조 출력
}

