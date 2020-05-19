/*
	MinSearch
	функции для поиска минимума на каждом подотрезке данного массива А.
	Ширкунов А.В.
	ИВТ - 13БО
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"

//Выделение памяти массива. Очистка памяти вне функции.
int* MemoryData(int number, int* array)
{
	array = malloc(number * sizeof(int));
	if (!array)
		return NULL;
	return array;
}

//Заполнение массива. Ввод с клавиатуры.
int* InputData(int number, int* array)
{
	int i;
	for (i = 0; i < number; i++)
		scanf("%d", &array[i]);
	return array;
}

//Ставит новый элемент в дек в порядке неубывания. 
//Элементы больше перед ним заменяются новым элементом.
int Comparison(Deque* D, int exlast)
{
	int new_el = D->data[D->final];
	//Если последний элемент в деке больше предпоследнего, последний заменяет предпоследний.
	while (new_el < exlast && D->final != D->start)
	{
		//Меньший элемент встает на место большего.
		new_el = PopBack(D);
		PopBack(D);
		exlast= D->data[D->final];
		PushBack(D, new_el);
	}
}

//Выводит минимальный элемент и удаляет его из дека, 
//если он равен ушедшему из подотрезка элементу.
int CleanDeque(Deque* D, int* array, int sub_len, int i)
{
	//Если дек пуст
	if (IsEmpty==1) 
		return 0;
	//Если минимум на вершине равен ушедшему из
	//подотрезка элементу удаляем его из дека.
	if (D->data[D->start] == array[i - sub_len])
		return PopFront(D);
	//иаче возвращаем минимум
	else 
		return D->data[D->start];
}

//Добавляет элемент в дек. Если подотрезок пройден, выводит минимум в массив ans. 
int SubMin(Deque* D, int sub_len, int* array, int number)
{
	int i, j=0;
	//Предпоследний элемент.
	int exlast;
	//Массив с минимумами на подотрезках.
	int* ans=NULL;
	//Выделение памяти массива с ответом.
	ans = MemoryData(number - sub_len + 1, array);
	for (i = 0; i < number; i++)
	{
		//Если пройден подотрезок, записываем минимум в ответ. 
		if (i >= sub_len)
		{
			ans[j] = CleanDeque(D, array, sub_len, i);
			j++;
		}
		exlast = D->data[D->final];
		//Добавляем новый элемент в конец дека.
		PushBack(D, array[i]);
		//Сравнение элементов, минимум оказывается на вершине дека.
		Comparison(D,exlast);
	}
	ans[j] = CleanDeque(D, array, sub_len, i);
	return ans;
}