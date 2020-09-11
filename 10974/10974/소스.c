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
	if (count == N)                   // �������� count == R�� �Ǵ� ���� ����� RETURN
	{
		for (int i = 0; i < N; i++)     // �� ����� �� NUMBERS�� ���� �� R��ŭ ���
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
		isSelected[i] = false;        // return �Ǿ� �� �� index i�� �Ѵܰ辿 ������ ���ư��鼭 false�� �־��־� �ٽ� i�� �÷��ָ鼭 input[i] ���� �����͸� ��� �ٲپ �־���
	}

}


