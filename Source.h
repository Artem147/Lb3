#ifndef _Source_
#define _Source_
#include "Deque.h"
//Инициализация и ввод массива.
int* InputData(int n, int* A);
//Размещение нового элемента по неубыванию.
int Comparison(Deque* D);
//Удаление вышедших за подотрезок элементов.
int CleanDeque(Deque* D);
//Алгоритм.
int Function(Deque* D, int K, int* A,int n);
#endif //_Source_