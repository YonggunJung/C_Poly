#include <stdio.h>		//다른 폴더 안에 있을때는 <> 부등호를 쓴다.
#include "func.h"  // 같은 폴더 안에 있을때 "" 큰 따옴표를 쓴다.

void main() {
	int x = 35;
	int y = 19;

	printf("두 수 %d와 %d의 합 = %d\n", x, y, Sum(x, y));
	printf("두 수 %d와 %d의 차 = %d\n", x, y, Dif(x, y));
}