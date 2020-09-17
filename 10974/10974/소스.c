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
	if (num == N)							// �������� count == R�� �Ǵ� ���� ����� RETURN
	{
		for (int i = 0; i < N; i++)			// �� ����� �� NUMBERS�� ���� �� N��ŭ ���
		{
			printf("%d ", numbers[i]);
		}
		printf("\n");
		return;								// �� �� �ڸ����� ���� �����Ͽ� return �ϸ鼭 �� ���� �迭 ���� �ٲ���
	}
	for (int i = 0; i < N; i++)
	{
		if (isVisited[i] == true)			// i��° �ε����� isSelected �迭�� true�� �Ǿ� ������, �� i��° index�� numbers���� ���� ������ ���� false��� continue�Ͽ� i�� �������� input�� i+1 ��° ���� numbers[count]�� �־��� 
		{
			continue;						// ��, continue�� �̿��Ͽ� ���� ��(index)�� ���ϰ� �� �� ���� ���� index�� ��� ��ȭ�Ǵ� ���� �־��ֱ� ����.
		}									
		isVisited[i] = true;				// ��µ� NUMBERS �迭��[COUNT������ �ε����� ���] INPUT[i]�� �־���
		perm(num + 1);						// numbers�� ������ Ȯ�� true ���� if������ i��° �ε����� ��� �ִٴ� ���� true�� ��Ÿ���� continue�ؼ� ���� i+1 �ε��� input[i+1]�� ������ numbers[count+1]�� �־��ش�.
		isVisited[i] = false;				// �����ϱ� count �ø��鼭 ��� ȣ��, return�ǰ� ���ƿ��� R = 2��� __ �� ù��° �ڸ��� �ٲ��ֱ� ����  
		numbers[num] = input[i];			// return �Ǿ� �� �� index i�� �Ѵܰ辿 ������ ���ư��鼭 false�� �־��־� �ٽ� i�� �÷��ָ鼭 input[i] ���� �����͸� ��� �ٲپ �־���
	}										
}


