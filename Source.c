#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
//Создание и заполнение массива. Очистка памяти вне функции.
int* InputData(int number, int origin_number, int* array)
{
	int i;
	array = malloc(number * sizeof(int));
	if (!array) return NULL;
	//Сравниваем количество элементов, с количеством элементов
	//исходного массива. Return для массива ans[].
	if(number< origin_number) return array;
	for(i=0; i< number; i++)
		scanf("%d", &array[i]);
	//Return для исходного массива.
	return array;
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
int CleanDeque(Deque* D, int* array, int sub_len, int i)
{//Если дек пуст
	if (!isEmpty) return 0;
	if (D->data[D->start] == array[i - sub_len])
		return PopFront(D);
	else return D->data[D->start];
}
//Добавляет элемент в дек. Если подотрезок пройден, выводит минимум в массив ans. 
int Algorithm(Deque* D, int sub_len, int* array, int number)
{
	int i,j=0;
	//Массив с минимумами на подотрезках.
	int* ans=NULL;
	//Выделение памяти массива с ответом.
	ans = InputData(number - sub_len + 1, number, array);
	for (i = 0; i < number; i++)
	{
		//Если пройден подотрезок, записываем минимум в ответ. 
		if (i >= sub_len)
		{
			ans[j] = CleanDeque(D, array, sub_len, i);
			j++;
		}
		//Добавляем новый элемент в конец дека.
		PushBack(D, array[i]);
		//Сравнение элементов, минимум оказывается на вершине дека.
		Comparison(D);
	}
	ans[j] = CleanDeque(D, array, sub_len, i);
	return ans;
}