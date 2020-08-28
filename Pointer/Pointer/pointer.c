#include <stdio.h>

int main(void)
{
	int num = 9;

	int* nump = NULL;

	nump = &num;    // nump 정수형 포인터 변수에 정수형 num 변수의 주소값을 저장한다!

	printf("%d\n", nump);
	printf("%d\n", *nump);


	double num1 = 3.124;
	double num2 = 3.124;

	int* ptr_i = &num1;
	double* ptr_d = &num2;

	*ptr_i = 30;      // int형 포인터변수이니 당연히 메모리 안의 정보도 int로 인식하여 int를 저장시켜 버린다.
	*ptr_d = 1.324;

	printf("%d\n%d", num1, num2);

	return 0;

}