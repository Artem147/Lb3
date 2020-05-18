#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
//Создание и заполнение массива. Очистка памяти вне функции.
int* InputData(int n, int N, int* A)
{
	int i;
	A = malloc(n * sizeof(int));
	//Return для массива ans[].
	if(n<N) return A;
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	//Return для исходного массива.
	return A;
}
//Ставит новый элемент в дек в порядке неубывания.
int Comparison(Deque* D) 
{//Пока новый элемент меньше минимума или начало меньше конца.
	while (D->data[D->final]< D->data[(D->final)-1] && D->final != D->start)
	{//Меньший элемент встает на место большего.
		D->data[(D->final) - 1] = D->data[D->final];
		D->final--;
	}
}
//Выводит минимальный элемент и удаляет его из дека, 
//если он равен первому элементу подотрезка
int CleanDeque(Deque* D, int* A, int sub_len, int i)
{//Если дек пуст
	if (!isEmpty) return 0;
	if (D->data[D->start] == A[i - sub_len])
		return PopFront(D);
	else return D->data[D->start];
}
//Добавляет элемент в дек. Если подотрезок пройден, выводит минимум в массив ans. 
int Algorithm(Deque* D, int sub_len, int* A, int n)
{
	int i,j=0;
	//Массив с минимумами на подотрезках.
	int* ans=NULL;
	//Выделение памяти массива с ответом.
	ans = InputData(n - sub_len + 1, n, A);
	for (i = 0; i < n; i++)
	{
		//Если пройден подотрезок, записываем минимум в ответ. 
		if (i >= sub_len)
		{
			ans[j] = CleanDeque(D, A, sub_len, i);
			j++;
		}
		//Добавляем новый элемент в конец дека.
		PushBack(D, A[i]);
		//Сравнение элементов, минимум оказывается на вершине дека.
		Comparison(D);
	}
	ans[j] = CleanDeque(D, A, sub_len, i);
	return ans;
}