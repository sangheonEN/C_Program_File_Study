#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

int map[5][5] = { { 0, 0, 0, 0, 0 }, { 0, 1, 1, 1, 0 }, { 0, 1, 1, 1, 1 }, { 0, 0, 1, 0, 0 }, { 1, 0, 0, 0, 0 } };

int dir[4][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };        // 상, 우, 하, 좌 순번

bool isVisited[5][5] = { 0, };

bool isIN_arr(int a, int b)
{
	return a >= 0 && a < 5 && b >= 0 && b < 5;
}

stack<pair<int, int> > s;

void dfs()
{
	s.push(make_pair(0, 0));
	isVisited[0][0] = true;

	while (!s.empty())
	{
		int dx = s.top().first;
		int dy = s.top().second;

		s.pop();

		cout << "dx: " << dx << "\tdy: " << dy << endl;

		for (int i = 0; i < 4; i++)
		{
			int dxx = dx + dir[i][0];
			int dyy = dy + dir[i][1];

			if (isIN_arr(dxx, dyy) && map[dxx][dyy] != 1 && isVisited[dxx][dyy] != true)
			{
				s.push(make_pair(dxx, dyy));
				isVisited[dxx][dyy] = true;
				if (dxx == 4 && dyy == 4)
				{
					return;
				}
			}
		}
	}
}

int main(void)
{
	dfs();

	return 0;
}