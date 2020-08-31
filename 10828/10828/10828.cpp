#include <stdio.h>
#include <string.h>

// ��� ����
#define TRUE 1          
#define FALSE 0        
#define MINUS -1

int N = 0; // ��� ��
int stack[10000] = { 0, };
int top_num = -1;                // top_num �ʱ� �� stack�� �ƹ� ���� ���� ������ -1���� ����

void Push(int x);
int Pop();
void size();
int empty(int* top_num);
int top();

void command(char arr_str[], int x);

int main(void)
{
	//�Է¹޴� ��� ã��
	int x = 0;
	char str[10] = { 0, };

	stackinit(&top_num);

	scanf("%d", &N);

	command(str, x);

	Push(x);

}

void stackinit(int* top_num)
{
	*top_num = -1;
}

void Push(int x)
{
	stack[++top_num] = x;
}

void command(char arr_str[], int x)
{
	if (arr_str == "push")
	{
		Push(x);
	}
	else if (arr_str == "pop")
	{
		Pop();
	}

}

int Pop()
{
	int* ptr = NULL;
	ptr = stack;
	if (empty(&top_num) == 1)
	{
		return -1;
	}
	else
	{
		printf("%d", ptr[top_num--]);
		return 0;
	}
}

void size()
{
	int* ptr = NULL;
	ptr = stack;
	printf("%d\n", sizeof(stack));
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

int top() 
{
	int* ptr = NULL;
	ptr = stack;
	if (empty(&top_num) == 1)
	{
		return -1;
	}
	else
	{
		printf("%d\n", ptr[top_num]);
		return 0;
	}

}