// ���� ��� N���� �ְ� �� ����� �Ÿ� S ���� B�� �ȴ�. 
// �� ������ �Ÿ��� ����� ����� �Ÿ��� ��, �� ���� ���̴�. 
// ���� ��� 1�� �̻� ����ؾ���.
// ��ǥ : �Ÿ��� ���հ� ������ ������ ���̰� ���� ���� ���� ���!


#include <stdio.h>

void Taste_Score_Calcul(int N);

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
	Taste_Score_Calcul(N);
	
	return 0;
}

void Taste_Score_Calcul(int N)
{


}