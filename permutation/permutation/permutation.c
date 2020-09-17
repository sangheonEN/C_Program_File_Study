#include <stdio.h>
#include <stdbool.h>

int N, R = 0;
int numbers[100] = { 0, };
int input[100] = { 0, };

bool isSelected[100] = { 0, };

void Permutation(int count);

int main(void)
{
	scanf("%d", &N);
	scanf("%d", &R);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
	}

	Permutation(0);
}

void Permutation(int count)
{
	if (count == R)                   // �������� count == R�� �Ǵ� ���� ����� RETURN
	{
		for (int i = 0; i < R; i++)     // �� ����� �� NUMBERS�� ���� �� R��ŭ ���
		{
			printf("%d", numbers[i]);
		}
		printf("\n");
		return;                         // �� �� �ڸ����� return
	}

	for (int i = 0; i < N; i++)
	{
		if (isSelected[i])              // i��° �ε����� �̹� ��� ������ 
		{
			continue;
		}
		numbers[count] = input[i];    // ��µ� NUMBERS �迭��[COUNT������ �ε����� ���] INPUT[i]�� �־���
		isSelected[i] = true;         // numbers�� ������ Ȯ�� true ���� if������ i��° �ε����� ��� �ִٴ� ���� true�� ��Ÿ���� continue�ؼ� ���� i+1 �ε��� input[i+1]�� ������ numbers[count+1]�� �־��ش�.
		Permutation(count + 1);       // �����ϱ� count �ø��鼭 ��� ȣ��, return�ǰ� ���ƿ��� R = 2��� __ �� ù��° �ڸ��� �ٲ��ֱ� ����  
		isSelected[i] = false;        // return�ǰ� ���ƿ��� R = 2��� __ �� ù��° �ڸ��� �ٲ��ֱ� ���� isSelected[i] = false�� �־��༭ continue�ؼ� 
	}

}
