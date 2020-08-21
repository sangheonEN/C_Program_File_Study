#include <stdio.h>

int start = 1;
int middle = 2;
int target = 3;
int arr_start[100000000] = { 0, };
int arr_target[100000000] = { 0, };
unsigned long long count = 0;

void hanoi_move(int N, int start, int middle, int target);   // 원판의 개수가 짝수 

int main(void)
{
	int N = 0;

	scanf("%d", & N);

	//arr_start= malloc(sizeof(unsigned long long));
	//arr_target= malloc(sizeof(unsigned long long));

	hanoi_move(N, 1, 2, 3);

	printf("%llu\n", count);

	if (N < 20)
	{
		for (int i = 0; i < count; i++)
		{
			printf("%d %d\n", arr_start[i], arr_target[i]);
		}

	}

	return 0;

}

void hanoi_move(int N, int start, int middle, int target)
{
	if (N == 0)
	{
		return;
	}
	else
	{
		hanoi_move(N - 1, start, target, middle);
		//printf("%d %d\n", start, target);
		arr_start[count] = start;
		arr_target[count] = target;
		count++;
		hanoi_move(N - 1, middle, start, target);
		//hanoi_move(N - 1, )
	}
}

