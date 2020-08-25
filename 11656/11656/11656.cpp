#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int* p = arr;

	printf("%d\n", * p);
	printf("%d\n", p[5]);


	for (int i = 0; i < sizeof(arr)/ sizeof(int); i++)
	{
		p = arr + i;
		printf("%d\n", *p);
	}
	return 0;
}