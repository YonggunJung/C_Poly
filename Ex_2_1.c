# define _CRT_SECURE_NO_WARNINGS  // vs�� c++�����Ϸ��� c�� �浹�� ������ �־ �����Ѵٴ� �� scanf�� ������ ������ �� ���ٿ� �����
# include <stdio.h>

int main(void)
{	
	//89p 5��
	int x, y, z;
	printf("���� 3���� �Է��ϼ���:");
	scanf("%d %d %d", &x, &y, &z);
	printf("ù ��°�� �� ��° ������ ���� �� �� ��° ������ ���� ��� : %d", (x+y)/z);

	//89p 4��
	//int a, b, c;
	//printf("������ �Է��Ͻÿ�:");
	//scanf("%d", &a);
	//printf("������ �Է��Ͻÿ�:");
	//scanf("%d", &b);
	//printf("������ �Է��Ͻÿ�:");
	//scanf("%d", &c);
	//printf("����� %d�Դϴ�", (a+b+c)/3);
	

	//89p 3��
	//int age;
	//scanf("%d", &age);
	//printf("���̸� �Է��Ͻÿ� : %d\n", age);
	//printf("�����̸� %d���� �ǽô±���.", age + 1);

	//89p 2��
	//int price, count;
	//scanf("%d %d", &price, &count);
	//printf("��ǰ ������ �Է��Ͻÿ�(��) : %d\n", price);
	//printf("������ �Է��Ͻÿ� : %d\n", count);
	//printf("�� ������ %d���Դϴ�.", price * count);

	//89p 1��
	//printf("#     #\n#     #\n#     #\n#######\n#     #\n#     #");
}


//int main(void)
//{
//	int wage, work, t, m, p;
//
//	scanf("%d %d %d %d %d", &wage, &work, &t, &m, &p);
//	printf("������ �Է��Ͻÿ� : %d\n", wage);
//
//	printf("�� �޿� ��ĥ ����ϳ��� : %d\n", work);
//
//	printf("�Ϸ� ����� �Է��Ͻÿ� : %d\n", t);
//
//	printf("�Ϸ� �ĺ� �Է��Ͻÿ� : %d\n", m);
//
//	printf("�Ϸ� �뵷�� �Է��Ͻÿ� : %d\n", p);
//
//
//	printf("�� ����� %d:", wage - (t * work) - (m * work) - (p * work));
//
//
//}

//int main(void)
//{
//
//	int x, y; //�� �ٿ��� ���� ���� ������ ������ ���� �ִ�.
//
//	printf("���� 2���� �Է��Ͻÿ� :"); // �Է¾Ⱦ� �޼��� ���
//	scanf("%d %d", &x, &y); // �������� ������ ���� �� �ִ�
//
//	printf("%d + %d = %d\n", x, y, x + y);
//	printf("%d - %d = %d\n", x, y, x - y);
//	printf("%d * %d = %d\n", x, y, x * y);
//	printf("%d / %d = %d\n", x, y, x / y);
//	printf("%d mod %d = %d\n", x, y, x % y);
//
//}


//int main(void)
//{
//
//	int x, y, sum, dif, mul, div, remind;
//	long long mul1, x1, y1;
//	x = 100;
//	y = 200;
//	x1 = 100000;
//	y1 = 200000;
//	sum = x + y;
//	dif = x - y;
//	mul = x * y;
//	mul1 = x1 * y1;
//	div = y / x;
//	remind = x % y;
//
//	printf("x + y = %d\n", sum);
//	printf("x - y = %d\n", dif);
//	printf("x * y = %d\n", mul);
//	printf("x1 * y1 = %lld\n", mul1);
//	printf("y / x = %d\n", div);
//	printf("y mod x = %d\n", remind);
//	printf("y % x = %d\n", remind);
//
//	printf("%f\n", 1.23456789);   // �⺻ �Ҽ��� 6�ڸ����� ����
//
//	return 0;

//}