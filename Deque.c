/*
	MinSearch
	Функция инициализации дека, реализация основных функций дека.
	Ширкунов А.В.
	ИВТ - 13БО
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"

//Инициализация дека. 
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

//Положить x в начало.
int PushFront(Deque *D, int x)
{
	D->start--;
	 D->data[D->start]=x;
	return 1;
}

//Положить x в конец.
int PushBack(Deque *D, int x)
{
	D->final++;
	D->data[D->final] = x;
	return 1;
}

//Взять из начала.
int PopFront(Deque *D)
{
	D->start++;
	return D->data[D->start - 1];
}

//Взять из конца.
int PopBack(Deque* D)
{
	D->final--;
	return D->data[D->final + 1];;
}
//проверка пустой дек или нет. 1 если пустой, 0 если непустой.
int isEmpty(Deque* D)
{
	if (D->start > D->final) return 1;
	else return 0;
}

//Вывод дека на экран.
void PrintData(Deque* D)
{
	int i;
	if (isEmpty == 1) return;
	//Если в деке один элемент.
	if (D->start == D->final) 
		printf(D->data[D->start]);
	//Если в деке не один элемент.
	else 
		for (i = D->start; i <= D->final; i++)
			printf("%d ", D->data[i]);
}