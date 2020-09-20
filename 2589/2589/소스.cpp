#include <iostream>
#include <vector>
#include <queue>
#include <istream>
#include <string>

using namespace std;

int row, column = 0;      // 가로, 세로

int step_time = 0;             // 칸 이동 변수

int dir[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} };

string map[50];

int map_real[50][50] = { 0, };

bool isVisited[50][50] = { 0, };

queue<pair<int, int> > q;

bool isIn_arr(int a, int b)                  // a = x b = y 넣을 거임.
{
	return a >= 0 && a < row && b >= 0 && b < column;
}

void map_arr_change()
{
	for (int i = 0; i < column; i++)                                 // 열 x ->
	{
		for (int j = 0; j < row; j++)                                // 행 y ↓
		{
			if (map[i][j] == 'L')
			{
				map_real[i][j] = 1;
			}
			if (map[i][j] == 'W')
			{
				map_real[i][j] = 0;
			}
		}
	}
}

int bfs(int x, int y)
{
	q.push(make_pair(x, y));
	isVisited[x][y] = true;

	int size = q.size();

	while (!q.empty())
	{
		for (int i = 0; i < size; i++)
		{
			int dx = q.front().first;
			int dy = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++)
			{
				int dxx = dx + dir[i][0];
				int dyy = dy + dir[i][1];

				if (map[dxx][dyy] = 'L' && isIn_arr(dxx, dyy) && isVisited[dxx][dyy] != true)
				{

				}

			}

		}
	}
	return 1;
}

int main(void)
{
	cin >> column >> row;

	for (int i = 0; i < column; i++)
	{
		cin >> map[i];
	}

	map_arr_change();                               // int형 맵으로 변환

	// 시작 점 잡기.

	return 0;

}



// Debug int 형 맵 변환
//for (int i = 0; i < column; i++)
//{
//	for (int j = 0; j < row; j++)
//	{
//		cout << map_real[i][j];
//	}
//	printf("\n");
//}