// 음식 재료 N개가 있고 각 재료의 신맛 S 쓴맛 B를 안다. 
// 그 음식의 신맛은 사용한 재료의 신맛의 곱, 쓴 맛은 합이다. 
// 재료는 적어도 1개 이상 사용해야함.
// 목표 : 신맛의 총합과 쓴맛의 총합의 차이가 가장 작은 값을 출력!


#include <stdio.h>

int N = 0; //재료의수
int Min = 0; // 최고의 맛!
int arrS[10] = { 0, }; //신맛 재료
int arrB[10] = { 0, };//쓴맛 재료

void Taste_Score_accumulate_Calcul(int N, int index, int sour_sum, int bitter_sum);
//void Taste_Score_individual_Calcul(int N, int index, int sour, int bitter);  

int main(void)
{
	scanf("%d", &N); // 재료의 수 입력

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arrS[i], &arrB[i]); // 각 재료의 맛 입력 받고
	}

	if (arrS[0] > arrB[0])       // Min 처음 값 잡아주기 && 조건문으로 절대값 처리 
	{
		Min = arrS[0] - arrB[0];
	}
	else
	{
		Min = arrB[0] - arrS[0];
	}

	Taste_Score_accumulate_Calcul(N, 0, 1, 0);          // 초기조건으로 sour_sum에 1을 해줘야 곱했을때 0이 안됨

	printf("%d", Min);
	
	return 0;
}

void Taste_Score_accumulate_Calcul(int N, int index, int sour_sum, int bitter_sum)
{
	if (index > N)
	{
		return;
	}

	Taste_Score_accumulate_Calcul(N, index + 1, sour_sum * arrS[index], bitter_sum + arrB[index]);                // 각 맛의 1부터 N개까지 순차적으로 누적된 차이 계산을 재귀적으로 불러옴
	Taste_Score_accumulate_Calcul(N, index + 1, sour_sum, bitter_sum);                                            // 순차적으로 누적된 차이를 계산할때 각 부모 index의 신맛, 쓴맛을 기준으로 인덱스 증가시키면서 상위에 있는 재료까지 비교되게함


	/* 각 맛의 총합 구해지는지 Debug
	//printf("%d %d\n", sour_sum, bitter_sum);   
	//if (sour_sum > bitter_sum && sour_sum - bitter_sum < Min)
	//{
	//	Min = sour_sum - bitter_sum;
	//}
	//else if(bitter_sum > sour_sum && bitter_sum - sour_sum < Min)
	//{
	//	Min = bitter_sum - sour_sum;
	//}
	*/

	if (sour_sum == 1 && bitter_sum == 0)
	{
		return;
	}

	if (sour_sum > bitter_sum)                           // 외부 조건문 : 절대값 잡아주기
	{
		if (sour_sum - bitter_sum < Min)                 // 내부 조건문 : 재귀하면서 각각 맛 점수에 접근하면 Min값이 변하는데 앞 전 계산된 Min 값보다 작을때 Min에 새롭게 저장
		{
			Min = sour_sum - bitter_sum;
		}
	}
	else
	{
		if (bitter_sum - sour_sum < Min)
		{
			Min = bitter_sum - sour_sum;
		}
	}
}

//void Taste_Score_individual_Calcul(int N, int index, int sour, int bitter)
//{
//
//	if (index > N)
//	{
//		return;
//	}
//
//	Taste_Score_individual_Calcul(N, index + 1, arrS[index], arrB[index]);                  // 각 재료 1개마다  
//
//	if (sour == 0 && bitter == 0)
//	{
//		return;
//	}
//
//	if (sour > bitter)                           // 외부 조건문 : 절대값 잡아주기
//	{
//		if (sour - bitter < Min)                 // 내부 조건문 : 재귀하면서 각각 맛 점수에 접근하면 Min값이 변하는데 앞 전 계산된 Min 값보다 작을때 Min에 새롭게 저장
//		{
//			Min = sour - bitter;
//		}
//	}
//	else if (bitter > sour)
//	{
//		if (bitter - sour < Min)
//		{
//			Min = bitter - sour;
//		}
//	}
//	else
//	{
//		if (bitter - sour < Min)
//		{
//			Min = bitter - sour;
//		}
//	}
//}
