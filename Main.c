#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
#include "Source.h"

int main()
{//������ �� ��������� �� ������ ����������.
	int* ans;
	ans = NULL;
	//���
	Deque* D;
	D = malloc(sizeof(Deque));
	//����� ���������.
	int K;
	//���������� ���������.
	int n;
	//��������.
	int i;
	printf("Split length: ");
	scanf("%d",&K);
	printf("Number of elements: ");
	scanf("%d ", &n);
	if (n < K) return 0;
	//�������� ������.
	int* A;
	A = NULL;
	printf("Origin Data ");
	A = InputData(n, n, A);
	Initialize(D,n);
	ans = Function(D,K,A,n);
	/*PrintData(D);*/
	for (i = 0; i < (n - K + 1); i++)//����� ������.
		printf("%d ", ans[i]);
	system("pause");
	return 0;
}