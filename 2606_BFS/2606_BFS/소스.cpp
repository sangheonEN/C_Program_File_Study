// 1�� ��ǻ�Ͱ� �� ���̷����� �ɷȴ�.
// ��ǻ���� ���� ��Ʈ��ũ �󿡼� ���� ����Ǿ� �ִ� ������ �־��� ��, 
// 1�� ��ǻ�͸� ���� �� ���̷����� �ɸ��� �Ǵ� ��ǻ���� ���� ����ϴ� ���α׷��� �ۼ�


#include <iostream>
#include <queue>

using namespace std;

int map[101][101] = { 0, };        // ��

int computer = 0;        // ��ǻ�� ��
int connect = 0;       // ����� ��
int infected = 0;      // ������ ��ǻ�� �� ī����

bool isVisitied[100] = { 0, };       // �湮 Ȯ�� �迭 0 = FALSE 0�� �ƴ� �� = TRUE

queue<int> q;

void bfs(int index);

int main(void)
{
	cin >> computer;
	cin >> connect;

	int first, second = 0;

	for (int i = 0; i < connect; i++)
	{
		cin >> first >> second;
		map[first][second] = 1;
	}

	bfs(1);

	return 0;
}

void bfs(int index)
{
	isVisitied[index]
}






