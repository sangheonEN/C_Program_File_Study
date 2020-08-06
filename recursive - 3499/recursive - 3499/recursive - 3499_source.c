//// 3499. [S/W 문제해결 기본] 7일차 - 퍼펙트 셔플

//// case 1)

//#include <stdio.h>
//#include <string.h>
//
//int N = 0;
//int count = 0;        
//
//char arr[20] = { 0, };
//char firstarr[20] = { 0, };
//char secondarr[20] = { 0, };
//char resultarr[20] = { 0, };
//
//void divide(int N, char* arr);
//void mix(int N);
//
//int main(void)
//{
//    scanf("%d", &N);
//
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%s", &arr[i]);
//    }
//
//    divide(N, arr);
//
//    memmove(secondarr - (N / 2), secondarr, sizeof(char) * N);
//
//    mix(N);
//
//
//    for (int i = 0; i < N; i++)
//    {
//        printf("%c\n", resultarr[i]);
//    }
//    return 0;
//}
//
//void divide(int N, char* arr)
//{
//    if (N % 2 != 0)
//    {
//        for (int i = 0; i < (N / 2) + 1; i++)
//        {
//            firstarr[i] = arr[i];
//        }
//        for (int i = (N / 2) + 1; i < N; i++)
//        {
//            secondarr[i] = arr[i];
//        }
//    }
//    else
//    {
//        for (int i = 0; i < N / 2; i++)
//        {
//            firstarr[i] = arr[i];
//        }
//        for (int i = N / 2; i < N; i++)
//        {
//            secondarr[i] = arr[i];             // 
//        }
//    }
//}
//
//
//// firstarr[i] A배열      secondarr  B배열
//// resultarr 배열에 저장하자.
//// 
//
//void mix(int N)
//{
//    int i = 0;
//    if (N <= 0)
//    {
//        return;
//    }
//    else
//    {
//        if (N % 2 == 0)
//        {
//            resultarr[N - 1] = secondarr[(N/2) - 1];
//        }
//        else
//        {
//            resultarr[N - 1] = firstarr[N/2];
//        }
//    }
//    mix(N - 1);
//}
//
//

//// case 2)
//
//#include <stdio.h>
//#include <string.h>
//
//int N = 0;
//int count = 0;
//
//char arr[20] = { 0, };
//char firstarr[20] = { 0, };
//char secondarr[20] = { 0, };
//char resultarr[20] = { 0, };
//
//void divide(int N, char* arr);
//void mixeven(int N);
//void mixodd(int N);
//
//int main(void)
//{
//    scanf("%d", &N);
//
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%s", &arr[i]);
//    }
//
//    divide(N, arr);
//
//    if (N % 2 == 0)
//    {
//        memmove(secondarr - (N / 2), secondarr, sizeof(char) * N);
//    }
//    else
//    {
//        memmove(secondarr - ((N / 2)-1), secondarr, sizeof(char) * N);                   // 여기서 막힘 0 인덱스 까지 이동이 안됨
//    }
//
//
//    if (N % 2 == 0)
//    {
//        mixeven(N);
//    }
//    if (N % 2 == 1)
//    {
//        mixodd(N);
//    }
//
//    for (int i = 0; i < N; i++)
//    {
//        printf("%c\n", resultarr[i]);
//    }
//    return 0;
//}
//
//void divide(int N, char* arr)
//{
//    if (N % 2 != 0)
//    {
//        for (int i = 0; i < (N / 2) + 1; i++)
//        {
//            firstarr[i] = arr[i];
//        }
//        for (int i = (N / 2) + 1; i < N; i++)
//        {
//            secondarr[i] = arr[i];
//        }
//    }
//    else
//    {
//        for (int i = 0; i < N / 2; i++)
//        {
//            firstarr[i] = arr[i];
//        }
//        for (int i = N / 2; i < N; i++)
//        {
//            secondarr[i] = arr[i];             // 
//        }
//    }
//}
//
//
//// firstarr[i] A배열      secondarr  B배열
//// resultarr 배열에 저장하자.
//// 
//
//void mixeven(int N)
//{
//    int i = 0;
//    if (N <= 0)
//    {
//        return;
//    }
//    else
//    {
//        resultarr[N - 2] = firstarr[(N-1) / 2];
//    }
//
//    mixeven(N - 2);
//}
//
//void mixodd(int N)
//{
//    int i = 0;
//    if (N <= 0)
//    {
//        return;
//    }
//    else
//    {
//        resultarr[N - 2] = firstarr[N / 2];
//    }
//
//    mixodd(N - 2);
//}