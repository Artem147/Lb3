/*
	MinSearch
	������� ��� ������ �������� �� ������ ���������� ������� ������� �.
	�������� �.�.
	��� - 13��
*/
#ifndef _DEQUE_
#define _DEQUE_
#include <stdio.h>

typedef struct Deque 
{
	//������ ����.
	int* data;
	//��������� ������.
	int start;
	//��������� �����.
	int final;
	int size;
}Deque;

//������������� ����.
int Initialize(Deque* D, int number);

//�������� x � ������.
int PushFront(Deque* D, int x);

//����� �� ������.
int PopFront(Deque* D);

//�������� x � �����.
int PushBack(Deque* D, int x);

//����� �� �����.
int PopBack(Deque* D);

//�������� ������ ��� ��� ���. 1 ���� ������, 0 ���� ��������.
int IsEmpty(Deque* D);

//�������� ������ ��� ��� ���. 1 ���� ������, 0 ���� ��������.
int IsFull(Deque* D);

//����� ���� �� �����.
void PrintData(Deque* D);

#endif //_DEQUE_