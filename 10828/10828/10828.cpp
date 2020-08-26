#include <stdio.h>
#include <string.h>

// 상수 선언
#define TRUE 1          
#define FALSE 0        
#define MINUS -1

int N = 0; // 명령 수
int stack[10000] = { 0, };
int top_num = 0;


void Push();
void Pop();
void size();
void empty();
void top();

int main(void)
{
	scanf("%d", &N);
	stackinit(&top_num);
}

void stackinit(int* top_num)
{
	*top_num = -1;
}

void Push()
{

}

void Pop()
{

}

void size()
{

}

int empty(int* top_num)
{
	if (*top_num == -1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void top() {

}