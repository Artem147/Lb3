#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"

int Initialize(Deque *D, int n)
{
	D->data = (int*)malloc(2*n*sizeof(int));
	if (!D->data) return 0;
	if (n == 1)
		D->start = 1;
	else D->start = n;
	D->final = D->start-1;
	return 1;
};
int PushFront(Deque *D, int x)
{
	D->start--;
	 D->data[D->start]=x;
	return 1;
}
int PushBack(Deque *D, int x)
{
	D->final++;
	D->data[D->final] = x;
	return 1;
}
int PopFront(Deque *D)//взять из начала.
{
	D->start++;
	return D->data[D->start - 1];
}
int PopBack(Deque *D)//Взять из конца.
{
	D->final--;
	return D->data[D->final + 1];;
}
int isEmpty(Deque *D)//проверка пустой дек или нет.
{
	if (D->start > D->final) return 0;
	else return 1;
}
void PrintData(Deque *D)
{
	int i;
	if (D->start == D->final) printf(D->data[D->start]);
	else 
		for (i = D->start; i <= D->final; i++)
			printf("%d ", D->data[i]);
}