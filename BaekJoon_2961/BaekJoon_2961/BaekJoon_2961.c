// ���� ��� N���� �ְ� �� ����� �Ÿ� S ���� B�� �ȴ�. 
// �� ������ �Ÿ��� ����� ����� �Ÿ��� ��, �� ���� ���̴�. 
// ���� ��� 1�� �̻� ����ؾ���.
// ��ǥ : �Ÿ��� ���հ� ������ ������ ���̰� ���� ���� ���� ���!


#include <stdio.h>

int N = 0; //����Ǽ�
int Min = 0; // �ְ��� ��!
int arrS[10] = { 0, }; //�Ÿ� ���
int arrB[10] = { 0, };//���� ���

void Taste_Score_accumulate_Calcul(int N, int index, int sour_sum, int bitter_sum);
void Taste_Score_individual_Calcul(int N, int index, int sour_sum, int bitter_sum);  

int main(void)
{
	//int arr_acidity[10] = { 0, }; // ����� ��Ằ �Ÿ� ����
	//int arr_acerbity[10] = { 0, }; // ����� ��Ằ ���� ����

	scanf("%d", &N); // ����� �� �Է�

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &arrS[i], &arrB[i]); // �� ����� �� �Է� �ް�
	}

	if (arrS[0] > arrB[0])       // Min ó�� �� ����ֱ� && ���ǹ����� ���밪 ó�� 
	{
		Min = arrS[0] - arrB[0];
	}
	else
	{
		Min = arrB[0] - arrS[0];
	}

	Taste_Score_accumulate_Calcul(N, 0, 1, 0);          // �ʱ��������� sour_sum�� 1�� ����� �������� 0�� �ȵ�
	Taste_Score_individual_Calcul(N, 0, 0, 0);          // ������ �˻��ϴϱ� 0�̾ ��

	printf("%d", Min);
	
	return 0;
}

void Taste_Score_accumulate_Calcul(int N, int index, int sour_sum, int bitter_sum)
{
	if (index > N)
	{
		return;
	}

	Taste_Score_accumulate_Calcul(N, index + 1, sour_sum * arrS[index], bitter_sum + arrB[index]);
	
	/* �� ���� ���� ���������� Debug
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

	if (sour_sum > bitter_sum)                           // �ܺ� ���ǹ� : ���밪 ����ֱ�
	{
		if (sour_sum - bitter_sum < Min)                 // ���� ���ǹ� : ����ϸ鼭 ���� �� ������ �����ϸ� Min���� ���ϴµ� �� �� ���� Min ������ ������ Min�� ���Ӱ� ����
		{
			Min = sour_sum - bitter_sum;
		}
	}
	else if (bitter_sum > sour_sum)
	{
		if (bitter_sum - sour_sum < Min)
		{
			Min = bitter_sum - sour_sum;
		}
	}
}

void Taste_Score_individual_Calcul(int N, int index, int sour, int bitter)
{

	if (index > N)
	{
		return;
	}

	Taste_Score_individual_Calcul(N, index + 1, arrS[index], arrB[index]);                  // �� ��� 1������  

	if (sour == 1 && bitter == 0)
	{
		return;
	}

	if (sour > bitter)                           // �ܺ� ���ǹ� : ���밪 ����ֱ�
	{
		if (sour - bitter < Min)                 // ���� ���ǹ� : ����ϸ鼭 ���� �� ������ �����ϸ� Min���� ���ϴµ� �� �� ���� Min ������ ������ Min�� ���Ӱ� ����
		{
			Min = sour - bitter;
		}
	}
	else if (bitter > sour)
	{
		if (bitter - sour < Min)
		{
			Min = bitter - sour;
		}
	}
	else
	{
		if (bitter - sour < Min)
		{
			Min = bitter - sour;
		}
	}
}
