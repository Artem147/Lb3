/*
	MinSearch
	Функция инициализации дека, реализация основных функций дека.
	Функции для поиска минимума на каждом подотрезке данного массива А.
	Ширкунов А.В.
	ИВТ - 13БО
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
#include "MinSearch.h"

int main()
{
	printf("Deque initialization function, realization\n");
	printf("of the main functions of the deque.\n");
	printf("Functions for finding the minimum on each \n");
	printf("sub-section of given array A.\n");
	printf("Shirkunov Artem IVT-13BO\n");
	printf("\n");
	//Массив из минимумов на каждом подотрезке.
	int* ans;
	ans = NULL;
	//Дек.
	Deque* D;
	D = malloc(sizeof(Deque));
	//Длина разбиения.
	int sub_len;
	//Количество элементов.
	int number;
	//Счетчик.
	int i;
	printf("Split length: ");
	scanf("%d",&sub_len);
	printf("Number of elements: ");
	scanf("%d", &number," ");
	//Если разбиение больше количества элементов.
	if (number < sub_len)
	{
		printf("Invalid value");
		return 0;
	}
	printf("Origin Data ");
	//Исходный массив А.
	int* array;
	array = NULL;
	//Инициализация исходного массива.
	array = InputData(number, number, array);
	//Инициализация дека.
	if(!Initialize(D, number)) 
	{
		printf("Invalid value");
		return 0;
	}
	//Если длина подотрезка равна 1, каждый элемент - минимум подотрезка.
	if (sub_len == 1) 
		ans = array;
	//Иначе запускается алгоритм по поиску минимума. 
	else 
		ans = Algorithm(D, sub_len, array, number);
	//Вывод ответа.
	for (i = 0; i < (number - sub_len + 1); i++)
		printf("%d ", ans[i]);
	//Освобождение памяти.
	free(array);
	free(ans);
	free(D);
	printf("\n");
	system("pause");
	return 0;
}

/*tests
1)
Input:
3
6
5 2 3 8 9 7
Output:
2 2 3 7
2)
Input:
1
10
1 2 3 4 5 6 7 8 9 110
Output:
1 2 3 4 5 6 7 8 9 110
3)
Input:
10
1
1 2 3 4 5 6 7 8 9 110
Output:
Invalid value
*/