// 1번 컴퓨터가 웜 바이러스에 걸렸다.
// 컴퓨터의 수와 네트워크 상에서 서로 연결되어 있는 정보가 주어질 때, 
// 1번 컴퓨터를 통해 웜 바이러스에 걸리게 되는 컴퓨터의 수를 출력하는 프로그램을 작성


#include <iostream>
#include <queue>

using namespace std;

int map[101][101] = { 0, };        // 맵

int computer = 0;        // 컴퓨터 수
int connect = 0;       // 연결고리 수
int infected = 0;      // 감염된 컴퓨터 수 카운팅

bool isVisitied[100] = { 0, };       // 방문 확인 배열 0 = FALSE 0이 아닌 수 = TRUE

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






