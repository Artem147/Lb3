#include <stdio.h>
typedef struct Deque {
	int* data;
	int start;//Указатель начала.
	int final;//Указатель конца.
	int  size;//Размер дека.
}Deque;
int Initialize(Deque D, int n);//Инициализация дека.
int PushFront(Deque D, int x);//положить в начало.
int PopFront(Deque D);//взять из начала.
int PushBack(Deque D, int x);//положить в начало.
int PopBack(Deque D);//взять из конца.
int isEmpty(Deque D);//проверка пустой дек или нет.
void print(Deque D, int n);//вывод дека на экран.
