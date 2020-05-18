/*
	MinSearch
	Функция для поиска минимума на каждом подотрезке данного массива А.
	Ширкунов А.В.
	ИВТ - 13БО
*/
#ifndef _DEQUE_
#define _DEQUE_
#include <stdio.h>

typedef struct Deque 
{
	//Массив дека.
	int* data;
	//Указатель начала.
	int start;
	//Указатель конца.
	int final;
}Deque;

//Инициализация дека.
int Initialize(Deque* D, int number);

//Положить x в начало.
int PushFront(Deque* D, int x);

//Взять из начала.
int PopFront(Deque* D);

//Положить x в конец.
int PushBack(Deque* D, int x);

//Взять из конца.
int PopBack(Deque* D);

//Проверка пустой дек или нет.
int isEmpty(Deque* D);

//Вывод дека на экран.
void PrintData(Deque* D);

#endif //_DEQUE_