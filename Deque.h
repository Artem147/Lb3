#include <stdio.h>
typedef struct Deque {
	int* data;
	int start;//��������� ������.
	int final;//��������� �����.
	int  size;//������ ����.
}Deque;
int Initialize(Deque D, int n);//������������� ����.
int PushFront(Deque D, int x);//�������� � ������.
int PopFront(Deque D);//����� �� ������.
int PushBack(Deque D, int x);//�������� � ������.
int PopBack(Deque D);//����� �� �����.
int isEmpty(Deque D);//�������� ������ ��� ��� ���.
void print(Deque D, int n);//����� ���� �� �����.
