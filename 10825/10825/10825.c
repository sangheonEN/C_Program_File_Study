#include <stdio.h>
#include <string.h>

typedef struct {
	char c[11];
	int kor;
	int eng;
	int math;

} student;

void swap(student*a, student*b);

int n = 0;

int main(void)
{
	scanf("%d", &n);

	student *score; // student의 주소값을 score가 가지고 score로 접근가능. c# 생성자의 인스턴스 개념

	//동적생성. 학생 수 만큼 heap영역에 메모리를 할당
	score = (student*)malloc(n * sizeof(student));         

	for (int i = 0; i < n; i++)
	{
		scanf("%s", score->c);
		scanf("%d", &score->kor);
		scanf("%d", &score->eng);
		scanf("%d", &score->math);
		//*score->c = "abcdefgefh";
		//score->kor = 10;
		//score->eng = 20;
		//score->math = 30;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%s %d %d %d\n", score->c, score->kor, score->eng, score->math);
	}

	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%s %d %d %d", score[i].c, &score[i].kor, &score[i].eng, &score[i].math);
	//}

	//char* ptr = NULL;
	//ptr = c;

	//if(kor )

	//printf("%s", c);

	free(score);
	return 0;
}



void swap(student*a, student*b)
{

}