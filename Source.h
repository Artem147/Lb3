#ifndef _Source_
#define _Source_
#include "Deque.h"
//Инициализация и ввод массива, очистка памяти в мейне..
int* InputData(int n, int N, int* A);
//Размещение нового элемента по неубыванию.
int Comparison(Deque* D);
//Удаление вышедших за подотрезок элементов.
int CleanDeque(Deque* D, int* A, int K, int i);
//Алгоритм.
int Algorithm(Deque* D, int K, int* A, int n);
#endif //_Source_