#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(){
	int K;//����� ���������.
	int n;//���������� ���������.
	int i;//��������.
	printf("Split length: ");
	scanf("%d",&K);
	printf("Number of elements: ");
	scanf("%d ", &n);
	if (n < K) return 0;
	int* A;//�������� ������.
	A = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)//���� ��������� �������.
		scanf("%d", &A[i]);
	for (i = 0; i < n; i++)//����� ��������� �������.
		printf("%d ", A[i]);
	system("pause");
	return 0;
}