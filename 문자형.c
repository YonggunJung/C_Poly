# define _CRT_SECURE_NO_WARNINGS  // vs�� c++�����Ϸ��� c�� �浹�� ������ �־ �����Ѵٴ� �� scanf�� ������ ������ �� ���ٿ� �����
# include <stdio.h>
# include <math.h>

int main(void)
{
	char name;
	int student_id, score1, score2, score3, score4;
	float avg;
	printf("�̸� : ");
	name = getchar();
	printf("�й� : ");
	scanf("%d", &student_id);
	printf("���� : ");
	scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
	avg = (score1 + score2 + score3 + score4) / 4.0;
	printf("�л� %c(�й�:%d)�� ��� ������ %2.1f", name, student_id, avg);
}

//int main(void) {
//	char c;
//	printf("���ڸ� �Է��Ͻÿ�:");
//	c = getchar();  //���ڸ� �Է¹޴� �Լ�. �̰� ���������� ���ʿ�
//	printf("%c�� �ƽ�Ű �ڵ� = %d\n", c, c);
//	return 0;
//}

//int main(void) {
//	char c = '9'; // ���� ����
//	printf("%c�� �ƽ�Ű �ڵ� = %d\n", c, c);	//���ڿ� �ƽ�Ű�ڵ� ���
//	printf("%c�� �ƽ�Ű �ڵ� = %d\n", c+1, c+1);
//	printf("%c�� �ƽ�Ű �ڵ� = %d\n", c+2, c+2);
//	return 0;
//}