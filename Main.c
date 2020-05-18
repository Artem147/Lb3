#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
#include "Source.h"

int main()
{
	//������ �� ��������� �� ������ ����������.
	int* ans;
	ans = NULL;
	//���
	Deque* D;
	D = malloc(sizeof(Deque));
	//����� ���������.
	int sub_len;
	//���������� ���������.
	int n;
	//�������.
	int i;
	printf("Split length: ");
	scanf("%d",&sub_len);
	printf("Number of elements: ");
	scanf("%d", &n," ");
	//���� ��������� ������ ���������� ���������.
	if (n < sub_len)
	{
		printf("Invalid value");
		return 0;
	}
	printf("Origin Data ");
	//�������� ������ �.
	int* A;
	A = NULL;
	//������������� ��������� �������.
	A = InputData(n, n, A);
	//������������� ����.
	Initialize(D, n);
	//���� ����� ���������� ����� 1, ������ ������� - ������� ����������.
	if (sub_len == 1) ans = A;
	//����� ����������� �������� �� ������ ��������. 
	else ans = Algorithm(D, sub_len, A, n);
	//����� ������.
	for (i = 0; i < (n - sub_len + 1); i++)
		printf("%d ", ans[i]);
	free(A);
	free(ans);
	system("pause");
	return 0;
}