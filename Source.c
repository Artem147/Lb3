#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
//�������� � ���������� �������. ������� ������ ��� �������.
int* InputData(int n, int N, int* A)
{
	int i;
	A = malloc(n * sizeof(int));
	//Return ��� ������� ans[].
	if(n<N) return A;
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	//Return ��� ��������� �������.
	return A;
}
//������ ����� ������� � ��� � ������� ����������.
int Comparison(Deque* D) 
{//���� ����� ������� ������ �������� ��� ������ ������ �����.
	while (D->data[D->final]< D->data[(D->final)-1] && D->final != D->start)
	{//������� ������� ������ �� ����� ��������.
		D->data[(D->final) - 1] = D->data[D->final];
		D->final--;
	}
}
//������� ����������� ������� � ������� ��� �� ����, 
//���� �� ����� ������� �������� ����������
int CleanDeque(Deque* D, int* A, int sub_len, int i)
{//���� ��� ����
	if (!isEmpty) return 0;
	if (D->data[D->start] == A[i - sub_len])
		return PopFront(D);
	else return D->data[D->start];
}
//��������� ������� � ���. ���� ���������� �������, ������� ������� � ������ ans. 
int Algorithm(Deque* D, int sub_len, int* A, int n)
{
	int i,j=0;
	//������ � ���������� �� �����������.
	int* ans=NULL;
	//��������� ������ ������� � �������.
	ans = InputData(n - sub_len + 1, n, A);
	for (i = 0; i < n; i++)
	{
		//���� ������� ����������, ���������� ������� � �����. 
		if (i >= sub_len)
		{
			ans[j] = CleanDeque(D, A, sub_len, i);
			j++;
		}
		//��������� ����� ������� � ����� ����.
		PushBack(D, A[i]);
		//��������� ���������, ������� ����������� �� ������� ����.
		Comparison(D);
	}
	ans[j] = CleanDeque(D, A, sub_len, i);
	return ans;
}