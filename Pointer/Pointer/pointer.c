#include <stdio.h>

int main(void)
{
	int num = 9;

	int* nump = NULL;

	nump = &num;    // nump ������ ������ ������ ������ num ������ �ּҰ��� �����Ѵ�!

	printf("%d\n", nump);
	printf("%d\n", *nump);


	double num1 = 3.124;
	double num2 = 3.124;

	int* ptr_i = &num1;
	double* ptr_d = &num2;

	*ptr_i = 30;      // int�� �����ͺ����̴� �翬�� �޸� ���� ������ int�� �ν��Ͽ� int�� ������� ������.
	*ptr_d = 1.324;

	printf("%d\n%d", num1, num2);

	return 0;

}