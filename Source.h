#ifndef UniqueSource
#define UniqueSource
#include "Deque.h"
//Инициализация и ввод массива.
int* InputD(int n);
//Размещение нового элемента по неубыванию.
int Comparison(Deque* D);
//Удаление вышедших за подотрезок элементов.
int CleanDeque(Deque* D);
//Алгоритм.
int Function(Deque* D, int K, int* A,int n);
#endif //UniqueSource