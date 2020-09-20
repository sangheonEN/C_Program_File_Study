#include <iostream>
#include <stack>

using namespace std;

int map[5][5] = { { 0, 0, 0, 0, 0 }, { 0, 1, 1, 1, 0 }, { 0, 1, 1, 1, 1 }, { 0, 0, 1, 0, 0 }, { 1, 0, 0, 0, 0 } };

int dir[4][2] = { { -1, 0 }, { 0, 1 }, { 1, 0 }, { 0, -1 } };

int end = 0;

bool IsVisited[5][5] = { 0, };

bool IsIN_arr(int a, int b)
{
	return a >= 0 && a < 5 && b >= 0 && b < 5;
}

stack <pair<int, int> >s;


void dfs(int dx, int dy)
{
	int end = 0;

	IsVisited[0][0] = true;

	cout << "dx : " << dx << "\tdy : " << dy << endl;

	for (int i = 0; i < 4; i++)
	{
		int dxx = dx + dir[i][0];
		int dyy = dy + dir[i][1];

		if (IsIN_arr(dxx, dyy) && IsVisited[dxx][dyy] != true && map[dxx][dyy] != 1)
		{
			IsVisited[dxx][dyy] = true;

			if (dxx == 4 && dyy == 4)
			{
				end = 1;
				return;

			}
			dfs(dxx, dyy);

			if (end == 1)
			{
				return;
			}

		}
	}


}

int main(void)
{
	dfs(0, 0);

	return 0;
}