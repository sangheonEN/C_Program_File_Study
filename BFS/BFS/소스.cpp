// BFS, DFS
// BFS = 너비우선탐색
// DFS = 깊이우선탐색

#include <iostream>
#include <queue>
using namespace std;

bool isVisited[10][10] = { 0, }; // 방문체크배열
int map[10][10] = { 0, };

int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };

int result;

// -1 0
// 0 1
// 1 0
// 0 -1

queue<pair<int, int>> q;

void bfs() {
	int step = 1;
	int size;
	while (!q.empty()) {
		size = q.size();

		for (int i = 0; i < size; i++) {
			int dx = q.front().first;
			int dy = q.front().second;
			q.pop();

			for (int d = 0; d < 4; d++) {
				int dxx = dx + dir[d][0];
				int dyy = dy + dir[d][1];

				if (dxx >= 0 && dxx < 10 && dyy >= 0 && dyy < 10 && isVisited[dxx][dyy] != true) {
					q.push(make_pair(dxx, dyy));
					if (map[dxx][dyy] == 100) {
						result = step;
						return;
					}
				}
			}
		}
		step++;
	}
}

int main() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> map[i][j];
		}
	}

	isVisited[0][0] = true;
	q.push(make_pair(0, 0));

	bfs();

	cout << result << endl;

}