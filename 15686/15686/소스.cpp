// 도시의 치킨 거리 = 모든 집의	치킨 거리의 합 (r1, c1), (r2, c2) - 두 점 사이의 거리 : |r1-r2| + |c1-c2|
// 도시크기 : N X N => N by N 행렬
// 치킨 집 : M <= R_M <= 13   가정 집 : 1 <= R_N <= 2N
// 조합?
// 도시의 치킨 거리가 가장 작게 될지 구하는 프로그램

#include <stdio.h>
#include <vector>
#include <string>

using namespace std; 

int x, y = 0;   // 가정 집 x, y의 좌표 선정
int x1, y1 = 0; // 가정 집 x, y의 좌표 
int x2, y2 = 0; // 치킨 집 x1, y1의 좌표
int N, M = 0;   // 치킨 집의 수 : M, 가정 집의 수 : N
int Classfication = 0; // 가정집, 치킨집 분류
int count_result = 0;  // result index 사용할 count

int home[50][50] = { 0, };
int store[50][50] = { 0, };
int empty_home[50][50] = { 0, };
int result[50] = { 0, };

void Comb(int _);

int main(void)
{

	scanf("%d %d", &N, &M);

	for (int x = 0; x < N; x++)                                 // N * N 행렬 만큼 반복해서 x,y 좌표를 입력받자
	{
		for (int y = 0; y < N; y++)
		{
			scanf("%d", &Classfication);
			if (Classfication == 1)                             // 가정 집 배열에 저장
			{
				home[x][y] = Classfication;
			}
			else if (Classfication == 2)                        // 치킨 집 배열에 저장
			{
				store[x][y] = Classfication;
			}
			else if(Classfication == 0)                         // 빈 집 배열에 저장
			{
				empty_home[x][y] = Classfication;
			}
		}
	}

	// 가정집 home[x1][y1] == 1 기준으로 store[x2][y2] == 2 를 탐색해서 |x1 - x2| + |y1 - y2| = 치킨 집거리 최소가 되게

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			// 문제점 home과 store에 들어가는 x, y 인덱스가 다르므로 x1,y1  x2,y2를 배열로 만들어서 비교해야할거 같음.
			if (home[x][y] == 1)
			{
				x1 = x;
				y1 = y;
			}
			if (store[x][y] == 2)
			{
				x2 = x;
				y2 = y;
			}
			if (x1, y1, x2, y2 != 0) // x1,y1,x2,y2가 0이 아닐때
			{
				result[count_result] = (x1 - x2) + (y1 - y2);
				count_result++;
			}
			x1 = 0;
			x2 = 0;
			y1 = 0;
			y2 = 0;
		}
	}

	Comb(0);


}


void Comb(int _)
{

}