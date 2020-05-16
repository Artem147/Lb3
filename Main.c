#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
	int K;//Длина разбиения.
	int n;//Количество элементов.
	int i;//Счетчики.
	printf("Split length: ");
	scanf("%d",&K);
	printf("Number of elements: ");
	scanf("%d ", &n);
	if (n < K) return 0;
	int* A;//Исходный массив.
	A = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)//Ввод исходного массива.
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)//Вывод исходного массива.
		printf("%d ", A[i]);
	system("pause");
	return 0;
}