#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
#include "Source.h"

int main()
{
	Deque* D;
	D = malloc(sizeof(Deque));
	//Длина разбиения.
	int K;
	//Количество элементов.
	int n;
	//Счетчики.
	int i;
	printf("Split length: ");
	scanf("%d",&K);
	printf("Number of elements: ");
	scanf("%d ", &n);
	if (n < K) return 0;
	//Исходный массив.
	int* A;
	A = NULL;
	printf("Origin Data ");
	A = InputData(n, A);
	Initialize(D,n);
	/*PrintData(D);*/
	//for (i = 0; i < n; i++)//Вывод исходного массива.
	//	printf("%d ", A[i]);
	system("pause");
	return 0;
}