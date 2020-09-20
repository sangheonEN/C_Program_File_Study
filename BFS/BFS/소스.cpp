// BFS

#include <iostream>
#include <queue>

using namespace std;

bool inVisited[3][3] = { 0 , };                              // �� ����� ��ǥ�� �湮�ߴ��� üũ

int map[3][3] = { 0, };                                      // ��� map

int dir[4][2] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };        // 4���� Ž���� ���� ��ǥ

int result = 0;                                              // step�� ���

queue <pair<int, int>> q;                                    // q�� ������ ��ǥ�� push�ؼ� dir[][] �迭�� �̵��ϰ� inVisited�迭�� �湮�ߴ� ���� �ߺ� �湮���� �ʰ� ... ��� 

void bfs();

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> map[i][j];                                // map�� �Է��ϱ�
		}
	}

	q.push(make_pair(0, 0));                                 // 0,0 ���� ���� �ٵ� �ٸ� �κк��� ���۰����ұ�?

	inVisited[0][0] = true;                                  // 0,0�� �湮������ true

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
	while (!q.empty()) {          // !q.empty() ������� ������ ���� �ݺ�
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
	while (!q.empty()) // ��������� true�ϱ� ��� ���� ���������� �ݺ�
	{
		// ex 0,0 ���� (1, 0), (0, 1) �� ���µ� (1, 0) ������ �� (0,0), (1, 1), (2, 0) �� ���� �����ϱ�!
		size = q.size();                             // size�� �ϴ� ������ ���� �̵��� ��ǥ���� �� �ٸ� ��ǥ�� ���� ��� �������� ���� ���� size ��ŭ �ݺ���Ų��.

		for (int i = 0; i < size; i++)               // q�� ù��° ���� ��ǥ�� dx, dy�� �����Ѵ�!
		{
			// (pair�� ���� �� first, ���� �� second)
			int dx = q.front().first;                // q�� ���� ���� �� ��Ҹ� ��ȯ�Ѵ�. first�� x�� ��ǥ
			int dy = q.front().second;               //									      second�� y�� ��ǥ
			q.pop();								 // q�� ���� ���� �� ��Ҹ� ��������. ù ��° ������ ��ǥ�� �湮������ ����������!

			for (int j = 0; j < 4; j++)                  // 4���� Ž�����ϴµ�
			{
				int dxx = dx + dir[j][0];                // x�� ��ǥ�� 4���� Ž��
				int dyy = dy + dir[j][1];                // y�� ��ǥ�� 4���� Ž��

				if (dxx >= 0 && dxx < 3 && dyy >= 0 && dyy < 3 && !inVisited[dxx][dyy] == true)     // dxx, dyy ��ǥ�� ����� ���� ����� �ʾ����� and dxx, dyy ��ǥ�� �湮���� �ʾ�����! ����
				{
					q.push(make_pair(dxx, dyy));                                                    // q�� �ٽ� dxx, dyy ��ǥ�� �־ ���������� �ٲ۴�.
					inVisited[dxx][dyy] = true;
					if (map[dxx][dyy] == 3)                 // map�� �ش� ��ǥ�� 3�̶�� �� step��ŭ 
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
	q.push(make_pair(0, 0));         //  ���� 0, 0 �� �� PAIR�������

	bfs();

	cout << result << endl;
=======
>>>>>>> 6a9ba61124560b2b6e0f0fa6a4390dfbdc307d95

}



