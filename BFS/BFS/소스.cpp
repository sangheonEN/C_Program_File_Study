// BFS

#include <iostream>
#include <queue>

using namespace std;

bool inVisited[3][3] = { 0 , };                              // 그 행렬의 좌표를 방문했는지 체크

int map[3][3] = { 0, };                                      // 행렬 map

int dir[4][2] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };        // 4방향 탐색을 위한 지표

int result = 0;                                              // step의 결과

queue <pair<int, int>> q;                                    // q에 각각의 좌표를 push해서 dir[][] 배열로 이동하고 inVisited배열로 방문했던 곳을 중복 방문하지 않고 ... 등등 

void bfs();

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> map[i][j];                                // map에 입력하기
		}
	}

	q.push(make_pair(0, 0));                                 // 0,0 부터 시작 근데 다른 부분부터 시작가능할까?

	inVisited[0][0] = true;                                  // 0,0은 방문했으니 true

	bfs();

	cout << result << endl;

	return 0;
}

void bfs()
{
	int size = 0;
	int step = 1;
<<<<<<< HEAD
	int size;
	while (!q.empty()) {          // !q.empty() 비어있지 않을때 까지 반복
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
					if (map[dxx][dyy] == 3) {
=======
	while (!q.empty()) // 비어있으면 true니까 비어 있지 않을때까지 반복
	{
		// ex 0,0 에서 (1, 0), (0, 1) 을 가는데 (1, 0) 에서는 또 (0,0), (1, 1), (2, 0) 을 갈수 있으니까!
		size = q.size();                             // size를 하는 이유는 내가 이동한 좌표에서 또 다른 좌표로 갈때 모든 방향으로 가기 위해 size 만큼 반복시킨다.

		for (int i = 0; i < size; i++)               // q에 첫번째 시작 좌표를 dx, dy에 저장한다!
		{
			// (pair의 앞의 수 first, 뒤의 수 second)
			int dx = q.front().first;                // q에 가장 먼저 들어간 요소를 반환한다. first는 x의 좌표
			int dy = q.front().second;               //									      second는 y의 좌표
			q.pop();								 // q에 가장 먼저 들어간 요소를 빼버린다. 첫 번째 시작한 좌표는 방문했으니 빼버려야함!

			for (int j = 0; j < 4; j++)                  // 4방향 탐색을하는데
			{
				int dxx = dx + dir[j][0];                // x의 좌표에 4방향 탐색
				int dyy = dy + dir[j][1];                // y의 좌표에 4방향 탐색

				if (dxx >= 0 && dxx < 3 && dyy >= 0 && dyy < 3 && !inVisited[dxx][dyy] == true)     // dxx, dyy 좌표가 행렬의 끝을 벗어나지 않았을때 and dxx, dyy 좌표에 방문하지 않았을때! 실행
				{
					q.push(make_pair(dxx, dyy));                                                    // q에 다시 dxx, dyy 좌표로 넣어서 시작지점을 바꾼다.
					inVisited[dxx][dyy] = true;
					if (map[dxx][dyy] == 3)                 // map에 해당 좌표가 3이라면 그 step만큼 
					{
>>>>>>> 6a9ba61124560b2b6e0f0fa6a4390dfbdc307d95
						result = step;
						return;
					}

				}
			}
		}
		step++;
	}
<<<<<<< HEAD
}

int main() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> map[i][j];
		}
	}

	isVisited[0][0] = true;
	q.push(make_pair(0, 0));         //  변수 0, 0 가 들어간 PAIR만들어줌

	bfs();

	cout << result << endl;
=======
>>>>>>> 6a9ba61124560b2b6e0f0fa6a4390dfbdc307d95

}



