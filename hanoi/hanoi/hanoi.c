#include <stdio.h>

int start = 1;
int middle = 2;
int target = 3;

void hanoi_move(int N, int start, int middle, int target);   // 원판의 개수가 짝수 

int main(void)
{
	int N = 0;

	scanf("%d", & N);

	hanoi_move(N, 1, 2, 3);

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
		printf("%d %d\n", start, target);
		hanoi_move(N - 1, middle, start, target);
		//hanoi_move(N - 1, )
	}
}

