#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
#include <cstdio>
using namespace std;

int list_result[4] = { 0, };

char list[101] = { 0, };
char* pch = NULL;
void calcul(int len);

int main(void)
{
	while (fgets(list,sizeof(list),stdin) != NULL)         // 
	{
		int len = strlen(list);

		calcul(len);

		for (int i = 0; i < 4; i++)
		{
			printf("%d ", list_result[i]);
		}
		printf("\n");
		list_result[0] = 0;
		list_result[1] = 0;
		list_result[2] = 0;
		list_result[3] = 0;
	}


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
//
//
//
//
//
//
//










//
//
//
//#include<stdio.h>
//#include<string>
//#include<string.h>
//#include<iostream>
//#include <cstdio>
//using namespace std;
//
//int list_result[4] = { 0, };
//
//char list[101] = { 0, };
//char* pch = NULL;
//void calcul(string s);
//
//int main(void)
//{
//	string s;
//	while (getline(cin, s))
//	{
//
//		calcul(s);
//
//		for (int i = 0; i < 4; i++)
//		{
//			printf("%d ", list_result[i]);
//		}
//		printf("\n");
//
//	}
//
//
//	return 0;
//
//}
//
//void calcul(string s)
//{
//	for (int i = 0; i < ; i++)
//	{
//		if (*pch >= 'A' && *pch <= 'Z')
//		{
//			list_result[1]++;
//		}
//		else if (*pch >= 'a' && *pch <= 'z')
//		{
//			list_result[0]++;
//		}
//		else if (*pch >= '0' && *pch <= '9')
//		{
//			list_result[2]++;
//		}
//		else
//		{
//			list_result[3]++;
//		}
//		pch++;
//	}
//}
//
//
