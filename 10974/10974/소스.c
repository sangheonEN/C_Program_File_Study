#include <stdio.h>
#include <stdbool.h>

int N = 0;                       
int numbers[10] = { 0, };
int input[10] = { 0, };

bool isSelected[10] = { 0, };

void Permutation(int count);

int main(void)
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		input[i] = i + 1;
	}

	Permutation(0);
}

void Permutation(int count)
{
	if (count == N)                   // 기저조건 count == R이 되는 순간 출력후 RETURN
	{
		for (int i = 0; i < N; i++)     // 각 경우의 수 NUMBERS에 저장 후 R만큼 출력
		{
			printf("%d", numbers[i]);
		}
		printf("\n");
		return;                         // 그 전 자리수로 return
	}

	for (int i = 0; i < N; i++)
	{
		if (isSelected[i])              // i번째 인덱스에 이미 들어 있으면 
		{
			continue;
		}
		numbers[count] = input[i];    // 출력될 NUMBERS 배열에[COUNT변수를 인덱스로 잡고] INPUT[i]를 넣어줌
		isSelected[i] = true;         // numbers에 들어갔는지 확인 true 위의 if문에서 i번째 인덱스에 들어 있다는 것을 true로 나타내서 continue해서 다음 i+1 인덱스 input[i+1]로 접근해 numbers[count+1]에 넣어준다.
		Permutation(count + 1);       // 들어갔으니까 count 올리면서 재귀 호출, return되고 돌아오면 R = 2라면 __ 중 첫번째 자리를 바꿔주기 위해  
		isSelected[i] = false;        // return 되어 그 전 index i에 한단계씩 전으로 돌아가면서 false를 넣어주어 다시 i를 올려주면서 input[i] 안의 데이터를 계속 바꾸어서 넣어줌
	}

}


