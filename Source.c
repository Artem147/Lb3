#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
//Создание и заполнение массива. Очистка памяти вне функции.
int* InputData(int n, int N, int* A)
{
	int i;
	A = malloc(n * sizeof(int));
	if(n<N) return A;//Return для массива ans[].
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	return A;//Return для исходного массива.
}
int Comparison(Deque* D) 
{
	while (D->data[D->final]< D->data[(D->final)-1] && D->final != D->start)
	{
		D->data[(D->final) - 1] = D->data[D->final];
		D->final--;
	}
}
int CleanDeque(Deque* D, int* A, int K) 
{
	int i;
	if (isEmpty) return 0;
	if (D->data[D->start] == A[i - K])
		PopFront(D);
}
int Function(Deque* D, int K, int* A, int n)
{
	int i;
	int* ans=NULL;
	ans = InputData(n - K + 1, n, A);
	for (i = 0; i < n; i++)
	{
		if (i % K) CleanDeque(D,A,K);
		PushBack(D,A[i]);//Добавляем новый элемент в конец дека.
		Comparison(D);
	}
}