#include <stdio.h>

int N, R = 0;
int stepCount = 0;

int numbers[100] = { 0, };
int input[100] = { 0, };

result[100] = { 0, };

void Combination(int count, int cur);
void sort();

int main(void)
{
	scanf("%d %d", & N, &R);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
	}

	Combination(0, 0);

	sort();

	for (int i = 0; i < R; i++)
	{
		printf("%d", result[i]);
		printf("\n");
	}

	printf("총 조합의 경우의 수 : %d\n", stepCount);
	
	return 0;
}

void Combination(int count, int cur)
{
	if (count == R)
	{
		stepCount++;
		for (int i = 0; i < R; i++)
		{
			result[i] = numbers[i];
		}
		return;
	}
	for (int i = cur; i < N; i++)
	{
		numbers[count] = input[i];
		Combination(count + 1, i + 1);
	}
}

void sort()
{
	int temp = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			if (result[i] > result[j])
			{
				temp = result[i];
				result[j] = result[i];
				result[i] = temp;
			}
		}
	}

}