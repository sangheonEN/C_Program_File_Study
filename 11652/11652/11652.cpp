#include<stdio.h>

long long arr[1000001];

void sort(int n);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    sort(n);

    long long* ans = arr;
    int ans_cnt = 1;
    int count = 1;
    long long result_num = 0;
    for (long long i = 0; i < n; i++)                                        
    {
        if (*(ans + i) == *(ans + (i + 1)))  
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (ans_cnt < count)
        {
            ans_cnt = count;
            if (*(ans + i) < *(ans + (i + 1)))
            {
                result_num = *(ans + i);
            }
            else
            {
                result_num = *(ans + (i + 1));
            }
        }
    }

    printf("%lld\n", result_num);

    return 0;
}

void sort(int n)
{
    long long* ptr = NULL;
    ptr = arr;
    long long temp = 0;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}


// 1. 오름차순 정렬 w/ pointer
//void sort(int n, int* ptr)
//{
//    int temp = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (*(arr + i) > * (arr + j))
//            {
//                temp = *(arr + i);
//                *(arr + i) = *(arr + j);
//                *(arr + j) = temp;
//            }
//        }
//    }
//}

// 2. sort 검증
    //for (int i = 0; i < n; i++)
    //{
    //    printf("%d", arr[i]);
    //}