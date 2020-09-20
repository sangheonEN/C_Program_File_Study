// �ڽŵ� 1�̰� ��, �Ʒ�, ��, �� �� 1���� 1�̸� �����ϴ� ��!

#include <iostream>
#include <queue>
#include<algorithm>

using namespace std;

int N = 0;                                 // N*N MAP ����

int map[25][25] = { 0, };                  // ��ü map �迭

int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };      // 4���� 

int danji[625] = { 0, };                   // �� ������ ���� ���� �����ϴ� �迭
 
bool isVisited[25][25] = { 0, };           // �湮 Ȯ�� �迭

queue<pair<int, int> > q;

bool isIn_arr(int a, int b)                              // map �ٱ����� Ż���ϴ��� ���ϴ��� Ȯ�� �Լ�
{
	return (a >= 0 && a < N) && (b >= 0 && b < N);
}

void sort(int count)
{
	int* pint = NULL;
	int temp = 0;
	pint = danji;
	for (int i = 0; i < count; i++)
	{
		for (int j = i; j < count; j++)
		{
			if (*(pint + i) > *(pint + j))
			{
				temp = *(pint + i);
				*(pint + i) = *(pint + j);
				*(pint + j) = temp;
			}
		}
	}
}

void bfs(int x, int y, int count)          // map[x][y] �� 1�� �ִ� ù��° ���� ���� ���������� ��Ƽ� bfs����. 
{
	int size = 0;

	q.push(make_pair(x, y));
	isVisited[x][y] = true;

	size = q.size();             

	while (!q.empty())
	{
		for (int i = 0; i < size; i++)
		{
			int dx = q.front().first;
			int dy = q.front().second;

			q.pop();

			danji[count-1] += 1;                                           // q.pop()�Ҷ� ��, ��ǥ�� �湮������ ���� �ش� ������ ���� ���� 1�� �÷��־� �ش� ������ �� �������� danji[]�迭�� ����

			for (int i = 0; i < 4; i++) {

				int dxx = dx + dir[i][0];
				int dyy = dy + dir[i][1];

				if (isVisited[dxx][dyy] != true && isIn_arr(dxx, dyy)&& map[dxx][dyy] == 1)               //�ʿ� 1�� �ְ� ���� ����� �ʰ� �湮���� �ʾ����� �� q�� �־ 4���� Ž��
				{
					q.push(make_pair(dxx, dyy));
					isVisited[dxx][dyy] = true;
				}

			}
		}
	}
}

int main(void)
{
	int count = 0;                             // ���� ���� ��Ÿ���� ���� count����

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%1d", &map[i][j]);             // ���ؿ��� ������ ������ ��Ÿ��.. ��� ã��
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1 && isVisited[i][j] != true)                    // i, j = x, y map i, j�� 1�� �������� �湮���� �ʾ����� bfs�� ������������ ����! ���� count ������ �Ἥ �ش� ������ ǥ��
			{
				count++;
				bfs(i, j, count);
			}
		}
	}

	sort(count);

	cout << count << endl;

	for (int i = 0; i < count; i++)
	{
		cout << danji[i] << endl;
	}

	return 0;
}

