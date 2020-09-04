// ������ ġŲ �Ÿ� = ��� ����	ġŲ �Ÿ��� �� (r1, c1), (r2, c2) - �� �� ������ �Ÿ� : |r1-r2| + |c1-c2|
// ����ũ�� : N X N => N by N ���
// ġŲ �� : M <= R_M <= 13   ���� �� : 1 <= R_N <= 2N
// ����?
// ������ ġŲ �Ÿ��� ���� �۰� ���� ���ϴ� ���α׷�

#include <stdio.h>
#include <vector>
#include <string>

using namespace std; 

int x, y = 0;   // ���� �� x, y�� ��ǥ ����
int x1, y1 = 0; // ���� �� x, y�� ��ǥ 
int x2, y2 = 0; // ġŲ �� x1, y1�� ��ǥ
int N, M = 0;   // ġŲ ���� �� : M, ���� ���� �� : N
int Classfication = 0; // ������, ġŲ�� �з�
int count_result = 0;  // result index ����� count

int home[50][50] = { 0, };
int store[50][50] = { 0, };
int empty_home[50][50] = { 0, };
int result[50] = { 0, };

void Comb(int _);

int main(void)
{

	scanf("%d %d", &N, &M);

	for (int x = 0; x < N; x++)                                 // N * N ��� ��ŭ �ݺ��ؼ� x,y ��ǥ�� �Է¹���
	{
		for (int y = 0; y < N; y++)
		{
			scanf("%d", &Classfication);
			if (Classfication == 1)                             // ���� �� �迭�� ����
			{
				home[x][y] = Classfication;
			}
			else if (Classfication == 2)                        // ġŲ �� �迭�� ����
			{
				store[x][y] = Classfication;
			}
			else if(Classfication == 0)                         // �� �� �迭�� ����
			{
				empty_home[x][y] = Classfication;
			}
		}
	}

	// ������ home[x1][y1] == 1 �������� store[x2][y2] == 2 �� Ž���ؼ� |x1 - x2| + |y1 - y2| = ġŲ ���Ÿ� �ּҰ� �ǰ�

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			// ������ home�� store�� ���� x, y �ε����� �ٸ��Ƿ� x1,y1  x2,y2�� �迭�� ���� ���ؾ��Ұ� ����.
			if (home[x][y] == 1)
			{
				x1 = x;
				y1 = y;
			}
			if (store[x][y] == 2)
			{
				x2 = x;
				y2 = y;
			}
			if (x1, y1, x2, y2 != 0) // x1,y1,x2,y2�� 0�� �ƴҶ�
			{
				result[count_result] = (x1 - x2) + (y1 - y2);
				count_result++;
			}
			x1 = 0;
			x2 = 0;
			y1 = 0;
			y2 = 0;
		}
	}

	Comb(0);


}


void Comb(int _)
{

}