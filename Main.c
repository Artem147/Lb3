#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
#include "Source.h"

int main(){
	Deque D;
	int K;//����� ���������.
	int n;//���������� ���������.
	int i;//��������.
	printf("Split length: ");
	scanf("%d",&K);
	printf("Number of elements: ");
	scanf("%d ", &n);
	if (n < K) return 0;
	int* A;//�������� ������.
	A = NULL;
	A = InputData(A, n);
	for (i = 0; i < n; i++)//����� ��������� �������.
		printf("%d ", A[i]);
	system("pause");
	return 0;
}