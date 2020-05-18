#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
#include "Source.h"

int main()
{
	//Массив из минимумов на каждом подотрезке.
	int* ans;
	ans = NULL;
	//дек
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
	Initialize(D, number);
	//Если длина подотрезка равна 1, каждый элемент - минимум подотрезка.
	if (sub_len == 1) 
		ans = array;
	//Иначе запускается алгоритм по поиску минимума. 
	else ans = Algorithm(D, sub_len, array, number);
	//Вывод ответа.
	for (i = 0; i < (number - sub_len + 1); i++)
		printf("%d ", ans[i]);
	free(array);
	free(ans);
	system("pause");
	return 0;
}