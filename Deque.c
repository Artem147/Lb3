/*
	MinSearch
	������� ������������� ����, ���������� �������� ������� ����.
	�������� �.�.
	��� - 13��
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"

//������������� ����. 
int Initialize(Deque* D, int number)
{
	D->size = 2 * number;
	D->data = (int*)malloc(D->size*sizeof(int));
	if (!D->data) return 1;
	if (number == 1)
		D->start = 1;
	else D->start = number;
	D->final = D->start-1;
	return 0;
};

//�������� x � ������. 1, ���� ��� ����������.
int PushFront(Deque* D, int x)
{
	if (IsFull == 1) return 1;
	D->start--;
	 D->data[D->start]=x;
	return 0;
}

//�������� x � �����. 1, ���� ��� ����������.
int PushBack(Deque* D, int x)
{
	if (IsFull == 1) return 1;
	D->final++;
	D->data[D->final] = x;
	return 0;
}

//����� �� ������. 
int PopFront(Deque* D)
{
	D->start++;
	return D->data[D->start - 1];
}

//����� �� �����.
int PopBack(Deque* D)
{
	D->final--;
	return D->data[D->final + 1];
}

//�������� ������ ��� ��� ���. 1 ���� ������, 0 ���� ��������.
int IsEmpty(Deque* D)
{
	if (D->start > D->final) return 1;
	else return 0;
}

//�������� ������ ��� ��� ���. 1 ���� ������, 0 ���� ��������.
int IsFull(Deque* D)
{
	if (D->start <=0 || D->final >= D->size) return 1;
	else return 0;
}

//����� ���� �� �����.
void PrintData(Deque* D)
{
	int i;
	if (IsEmpty == 1) return;
	//���� � ���� ���� �������.
	if (D->start == D->final) 
		printf(D->data[D->start]);
	//���� � ���� �� ���� �������.
	else 
		for (i = D->start; i <= D->final; i++)
			printf("%d ", D->data[i]);
}