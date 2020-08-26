#include<stdio.h>
#include<string.h>
#include<iostream>
#include <cstdio>

using namespace std;

char list_result[4] = { 0, };

char list[100] = { 0, };
char* pch = NULL;
void calcul(int len);

int main(void)
{
	cin.getline(list,strlen(list));
	//scanf("%[^\]s", list);
	int len = strlen(list);

	calcul(len);

	cout << list_result[0] << ' ' << list_result[1] << ' ' << list_result[2] << ' ' << list_result[3] << endl;
	cout << endl;
	
	//for (int i = 0; i < strlen(list); i++)
	//{
	//	printf("%s", &list);
	//}

	return 0;

}

void calcul(int len)
{
	pch = list;
	for (int i = 0; i < len; i++)
	{
		if (*pch >= 'A' && *pch <= 'Z')
		{
			list_result[1]++;
		}
		else if(*pch >= 'a' && *pch <= 'z')
		{
			list_result[0]++;
		}
		else if(*pch >= '0' && *pch <= '9')
		{
			list_result[2]++;
		}
		else
		{
			list_result[3]++;
		}
		pch++;
	}
	
}


//#include<stdio.h>
//#include<string.h>
//
//int small, big, num, empty = 0;
//char arr[200];
//
//int main()
//{
//
//	scanf("%[^\n]s", arr);
//
//	int len = strlen(arr);
//
//	for (int i = 0; i < len; ++i)
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//			++big;
//		else if (arr[i] >= 'a' && arr[i] <= 'z')
//			++small;
//		else if (arr[i] >= '0' && arr[i] <= '9')
//			++num;
//		else
//			++empty;
//	}
//
//	printf("%d %d %d %d\n", small, big, num, empty);
//}


