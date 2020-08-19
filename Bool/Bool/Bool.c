// 음식 재료 N개가 있고 각 재료의 신맛 S 쓴맛 B를 안다. 
// 그 음식의 신맛은 사용한 재료의 신맛의 곱, 쓴 맛은 합이다. 
// 재료는 적어도 1개 이상 사용해야함.
// 목표 : 신맛의 총합과 쓴맛의 총합의 차이가 가장 작은 값을 출력!


#include <stdio.h>

int count = 0;

void Taste_Score_Calcul(int N, int cur_size, int* arr_acidity, int index, int* arrS, int* arrB);

int main(void)
{
	int N = 0; //재료의수
	int arrS[10] = { 0, }; //신맛 재료
	int arrB[10] = { 0, };//쓴맛 재료
	int arr_acidity[10] = { 0, }; // 사용한 재료별 신맛 총합
	int arr_acerbity[10] = { 0, }; // 사용한 재료별 쓴맛 총합

	scanf("%d", &N); // 재료의 수 입력

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arrS[i], &arrB[i]);
	}

	Taste_Score_Calcul(N, 0, arr_acidity, 0, arrS, arrB);

	return 0;
}

void Taste_Score_Calcul(int N, int cur_size, int* arr_acidity, int index, int *arrS, int *arrB)
{

	if (N == index)
	{
		return;
	}
	int add = 0;
	for (int i = 0; i <= index; i++)
	{
		add += arrS[i];
	}
	arrS[index] = add;
	printf("%d\n", arrS[index]);
	arrS[index] = 0;
	//arr_acidity[cur_size] = index;

	Taste_Score_Calcul(N, cur_size + 1, arr_acidity, index + 1, arrS, arrB);
}