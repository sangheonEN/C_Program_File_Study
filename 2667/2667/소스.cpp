// 자신도 1이고 위, 아래, 좌, 우 중 1개라도 1이면 인접하는 것!

#include <iostream>
#include <queue>
#include<algorithm>

using namespace std;

int N = 0;                                 // N*N MAP 생성

int map[25][25] = { 0, };                  // 전체 map 배열

int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };      // 4방향 

int danji[625] = { 0, };                   // 각 단지의 안의 수를 저장하는 배열
 
bool isVisited[25][25] = { 0, };           // 방문 확인 배열

queue<pair<int, int> > q;

bool isIn_arr(int a, int b)                              // map 바깥으로 탈락하는지 안하는지 확인 함수
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

void bfs(int x, int y, int count)          // map[x][y] 에 1이 있는 첫번째 단지 부터 시작지점을 잡아서 bfs돌림. 
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

			danji[count-1] += 1;                                           // q.pop()할때 즉, 좌표를 방문했을때 마다 해당 단지의 단지 수를 1씩 올려주어 해당 단지의 총 단지수를 danji[]배열에 저장

			for (int i = 0; i < 4; i++) {

				int dxx = dx + dir[i][0];
				int dyy = dy + dir[i][1];

				if (isVisited[dxx][dyy] != true && isIn_arr(dxx, dyy)&& map[dxx][dyy] == 1)               //맵에 1이 있고 맵을 벗어나지 않고 방문하지 않았을때 또 q에 넣어서 4방향 탐색
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
	int count = 0;                             // 단지 수를 나타내기 위한 count변수

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%1d", &map[i][j]);             // 백준에서 컴파일 에러로 나타냄.. 방법 찾기
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1 && isVisited[i][j] != true)                    // i, j = x, y map i, j에 1이 있을때와 방문하지 않았을때 bfs의 시작지점으로 간다! 갈때 count 변수를 써서 해당 단지를 표시
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

