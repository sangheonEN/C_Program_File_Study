// ���� ��� N���� �ְ� �� ����� �Ÿ� S ���� B�� �ȴ�. 
// �� ������ �Ÿ��� ����� ����� �Ÿ��� ��, �� ���� ���̴�. 
// ���� ��� 1�� �̻� ����ؾ���.
// ��ǥ : �Ÿ��� ���հ� ������ ������ ���̰� ���� ���� ���� ���!


#include <stdio.h>

int count = 0;

void Taste_Score_Calcul(int N, int cur_size, int* arr_acidity, int index, int* arrS, int* arrB);

int main(void)
{
	int N = 0; //����Ǽ�
	int arrS[10] = { 0, }; //�Ÿ� ���
	int arrB[10] = { 0, };//���� ���
	int arr_acidity[10] = { 0, }; // ����� ��Ằ �Ÿ� ����
	int arr_acerbity[10] = { 0, }; // ����� ��Ằ ���� ����

	scanf("%d", &N); // ����� �� �Է�

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