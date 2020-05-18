/*
	MinSearch
	Функции инициализации дека, реализация основных функций дека,
	функции для поиска минимума на каждом подотрезке данного массива А.
	Ширкунов А.В.
	ИВТ - 13БО
*/
#ifndef _MinSearch_
#define _MinSearch_
#include "Deque.h"

//Инициализация и ввод массива, очистка памяти в мейне..
int* InputData(int number, int origin_number, int* array);

//Размещение нового элемента по неубыванию.
int Comparison(Deque* D);

//Удаление вышедших за подотрезок элементов.
int CleanDeque(Deque* D, int* array, int sub_len, int i);

//Алгоритм.
int Algorithm(Deque* D, int sub_len, int* array, int number);
#endif //!_MinSearch_