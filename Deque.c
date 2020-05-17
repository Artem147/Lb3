#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"

int Initialize(Deque D, int n)
{
	D.data = (int*)malloc(n * sizeof(int));
	D.start = n / 2;
	D.final = D.start;
};
int PushFront(Deque D, int x) 
{
	D.start--;
	x = D.data[D.start];
}
int PushBack(Deque D, int x)
{
	D.final++;
	x = D.data[D.final];
}
int PopFront(Deque D)//взять из начала.
{
	D.start++;
	return D.data[D.start - 1];;
}
int PopBack(Deque D)//Взять из конца.
{
	D.final--;
	return D.data[D.final + 1];;
}
int isEmpty(Deque D)//проверка пустой дек или нет.
{
	if (D.start > D.final) return 0;
	else return 1;
}
void print(Deque D, int n)
{
	int i;
	for (i = D.start; i <= D.final; i++)
		printf("%d ", D.data[i]);
}