// BFS 2606

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int a, b, n, m = 0;
int ans = 0;

vector<int> v[101];

queue<int> q;

bool isVisited[101] = { 0, };

void bfs(int start);

int main(void)
{
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	bfs(1);

	cout << ans << endl;
	
}

void bfs(int start)
{
	q.push(start);
	isVisited[start] = true;

	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		for (int i = 0; i < v[now].size(); i++)
		{
			if (!isVisited[v[now][i]]) {
				q.push(v[now][i]);
				isVisited[v[now][i]] = true;
				ans++;
			}
		}
	}
}