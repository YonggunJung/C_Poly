#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>

int main31(void)
{
	//const포인터
	char s[] = "Barking dogs seldom bite.";
	char t[] = "A bad workman blames his tools";
	const char* p = s;	//p가 가리키는 곳의 내용을 변경 불가, p는 변경 가능
	char* const q = s;	// q가 가리키는 곳의 내용 변경 가능, q는 변경 불가

	//p[3] = 'a';	p가 가리키는 곳의 내용을 변경 불가
	
	p = t;		// p는 변경 가능
	
	q[3] = 'a';		// q가 가리키는 곳의 내용 변경 가능

	//q = t;	// q는 변경 불가

	return 0;
}