# define _CRT_SECURE_NO_WARNINGS  // vs는 c++컴파일러라서 c랑 충돌이 있을수 있어서 무시한다는 것 scanf를 쓸때는 무조건 젤 윗줄에 써야함
# include <stdio.h>
# include <math.h>

int main(void)
{
	char name;
	int student_id, score1, score2, score3, score4;
	float avg;
	printf("이름 : ");
	name = getchar();
	printf("학번 : ");
	scanf("%d", &student_id);
	printf("성적 : ");
	scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
	avg = (score1 + score2 + score3 + score4) / 4.0;
	printf("학생 %c(학번:%d)의 평균 성적은 %2.1f", name, student_id, avg);
}

//int main(void) {
//	char c;
//	printf("문자를 입력하시오:");
//	c = getchar();  //문자를 입력받는 함수. 이건 서식지정자 불필요
//	printf("%c의 아스키 코드 = %d\n", c, c);
//	return 0;
//}

//int main(void) {
//	char c = '9'; // 변수 선언
//	printf("%c의 아스키 코드 = %d\n", c, c);	//문자와 아스키코드 출력
//	printf("%c의 아스키 코드 = %d\n", c+1, c+1);
//	printf("%c의 아스키 코드 = %d\n", c+2, c+2);
//	return 0;
//}