#include <stdio.h>
#include <stdbool.h>

int input[100] = { 0, };
int numbers[100] = { 0, };
bool isVisited[100] = { 0, };

int N = 0;

void perm(int num);

int main(void)
{
	scanf("%d", &N);


	for (int i = 0; i < N; i++)
	{
		input[i] = i + 1;
	}

	perm(0);

}


void perm(int num)
{
	if (num == N)							// 기저조건 count == R이 되는 순간 출력후 RETURN
	{
		for (int i = 0; i < N; i++)			// 각 경우의 수 NUMBERS에 저장 후 N만큼 출력
		{
			printf("%d ", numbers[i]);
		}
		printf("\n");
		return;								// 그 전 자리수를 고정 수로하여 return 하면서 그 뒤의 배열 수를 바꿔줌
	}
	for (int i = 0; i < N; i++)
	{
		if (isVisited[i] == true)			// i번째 인덱스에 isSelected 배열이 true로 되어 있으면, 그 i번째 index의 numbers수는 고정 값으로 만약 false라면 continue하여 i를 증가시켜 input의 i+1 번째 값을 numbers[count]에 넣어줌 
		{
			continue;						// 즉, continue를 이용하여 고정 수(index)를 정하고 그 수 보다 높은 index에 계속 변화되는 값을 넣어주기 위함.
		}									
		isVisited[i] = true;				// 출력될 NUMBERS 배열에[COUNT변수를 인덱스로 잡고] INPUT[i]를 넣어줌
		perm(num + 1);						// numbers에 들어갔는지 확인 true 위의 if문에서 i번째 인덱스에 들어 있다는 것을 true로 나타내서 continue해서 다음 i+1 인덱스 input[i+1]로 접근해 numbers[count+1]에 넣어준다.
		isVisited[i] = false;				// 들어갔으니까 count 올리면서 재귀 호출, return되고 돌아오면 R = 2라면 __ 중 첫번째 자리를 바꿔주기 위해  
		numbers[num] = input[i];			// return 되어 그 전 index i에 한단계씩 전으로 돌아가면서 false를 넣어주어 다시 i를 올려주면서 input[i] 안의 데이터를 계속 바꾸어서 넣어줌
	}										
}


