#include <stdio.h>

int N, R = 0;
int stepCount = 0;

int numbers[100] = { 0, };
int input[100] = { 0, };

void Combination(int count, int cur);

int main(void)
{
	scanf("%d %d", & N, &R);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
	}

	Combination(0, 0);

	printf("총 조합의 경우의 수 : %d\n", stepCount);
}

void Combination(int count, int cur)
{
	if (count == R)
	{
		stepCount++;
		for (int i = 0; i < R; i++)
		{
			printf("%d", numbers[i]);
		}
		printf("\n");
		return;
	}
	for (int i = cur; i < N; i++)
	{
		numbers[count] = input[i];
		Combination(count + 1, i + 1);
	}
}
