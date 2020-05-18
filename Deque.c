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
int Initialize(Deque *D, int number)
{
	D->data = (int*)malloc(2*number*sizeof(int));
	if (!D->data) return 0;
	if (number == 1)
		D->start = 1;
	else D->start = number;
	D->final = D->start-1;
	return 1;
};

//�������� x � ������.
int PushFront(Deque *D, int x)
{
	D->start--;
	 D->data[D->start]=x;
	return 1;
}

//�������� x � �����.
int PushBack(Deque *D, int x)
{
	D->final++;
	D->data[D->final] = x;
	return 1;
}

//����� �� ������.
int PopFront(Deque *D)
{
	D->start++;
	return D->data[D->start - 1];
}

//����� �� �����.
int PopBack(Deque* D)
{
	D->final--;
	return D->data[D->final + 1];;
}
//�������� ������ ��� ��� ���. 1 ���� ������, 0 ���� ��������.
int isEmpty(Deque* D)
{
	if (D->start > D->final) return 1;
	else return 0;
}

//����� ���� �� �����.
void PrintData(Deque* D)
{
	int i;
	if (isEmpty == 1) return;
	//���� � ���� ���� �������.
	if (D->start == D->final) 
		printf(D->data[D->start]);
	//���� � ���� �� ���� �������.
	else 
		for (i = D->start; i <= D->final; i++)
			printf("%d ", D->data[i]);
}