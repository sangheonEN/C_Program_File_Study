#include <stdio.h>
//test
int N = 0;
int count = 0;
int list = 0;

char arr[20] = { 0, };
char firstarr[20] = { 0, };
char secondarr[20] = { 0, };
char resultarr[20] = { 0, };

void divide(int N, char* arr);
void mix(int list, char* firstarr, char* secondarr);

int main(void)
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", &arr[i]);
	}

	divide(N, arr);

	mix(0, firstarr, secondarr);

	for (int i = 0; i < N; i++)
	{
		printf("%c", resultarr[i]);
	}
	return 0;
}

void divide(int N, char* arr)
{
	if (N % 2 != 0)
	{
		for (int i = 0; i < (N / 2) + 1; i++)
		{
			firstarr[i] = arr[i];
		}
		for (int i = (N / 2) + 1; i < N; i++)
		{
			secondarr[i] = arr[i];
		}
	}
	else
	{
		for (int i = 0; i < N / 2; i++)
		{
			firstarr[i] = arr[i];
		}
		for (int i = N / 2; i < N; i++)
		{
			secondarr[i] = arr[i];
		}
	}
}

void mix(int list, char* firstarr, char* secondarr)
{
	if (N = list)
	{
		return;
	}
	if (firstarr[list] != "")
	{
		resultarr[list] = firstarr[list];
	}
	if (secondarr[list] != "")
	{
		resultarr[list] = secondarr[list];
	}
	mix(list + 1, N, firstarr, secondarr);
}


//void mix(int count, int N)
//{
//	if (N = count)
//	{
//		return;
//	}
//	if(N % 2 == 0)
//	{
//		for (int i = 0; i < N / 2;)
//		{
//			resultarr[i] = firstarr[i];
//		}
//		for (int i = N / 2; i < N; i++)
//		{
//			resultarr[i] = secondarr[i];
//		}
//	}
//	else
//	{
//		for (int i = 0; i < (N / 2)+1;)
//		{
//			resultarr[i] = firstarr[i];
//		}
//		for (int i = (N / 2) + 1; i < N; i++)
//		{
//			resultarr[i] = secondarr[i];
//		}
//	}
//}