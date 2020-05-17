#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"

int* InputData(int n)
{
	int*A;
	int i;
	A = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	return A;
}
int Comparison(Deque* D) 
{
	while (D->data[D->final]< D->data[(D->final)-1] && D->final != D->start)
	{
		D->data[(D->final) - 1] = D->data[D->final];
		D->final--;
	}
}
int CleanDeque(Deque* D) 
{

}
int Function(Deque* D, int K, int* A, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i % K) CleanDeque(D);
		PushBack(D,A[i]);//Добавляем новый элемент в конец дека.
		Comparison(D);
	}
}