// 자신도 1이고 위, 아래, 좌, 우 중 1개라도 1이면 인접하는 것!

#include <iostream>
#include <queue>
#include<algorithm>

using namespace std;

int map[25][25] = { 0, };

bool inVisited[25][25] = { 0, };

int dir[4][2] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };

int danji[625] = { 0, };

int N = 0;

int step = 0;              // step 

queue<pair<int, int>> q;

int bfs(int , int );

int main(void)
{

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1 && !inVisited[i][j] == true)
			{
				danji[step++] = bfs(j, i);
			}
		}
	}


	sort(danji, danji + step);
	//단지갯수
	cout << step << endl;

	for (int i = 0; i < step; i++)
		cout << danji[i] << endl;


	return 0;

}


int bfs(int x, int y)
{
	int size = 0;

	int count = 0;

	q.push(make_pair(x, y));

	inVisited[x][y] = true;

	count++;

	while (!q.empty())
	{
		size = q.size();

		for (int i = 0; i < size; i++)
		{
			int dx = q.front().first;
			int dy = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++)
			{

				int dxx = dx + dir[i][0];
				int dyy = dy + dir[i][1];

				if (dxx >= 0 && dxx < N && dyy >= 0 && dyy < N && !inVisited[dxx][dyy] == true && map[dxx][dyy] == 1)
				{
					q.push(make_pair(dxx, dyy));
					inVisited[dxx][dyy] = true;
					count++;
				}

			}
		}
	}
	return count;
}


