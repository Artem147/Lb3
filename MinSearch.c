/*
	MinSearch
	������� ��� ������ �������� �� ������ ���������� ������� ������� �.
	�������� �.�.
	��� - 13��
*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"

//��������� ������ �������. ������� ������ ��� �������.
int* MemoryData(int number, int* array)
{
	array = malloc(number * sizeof(int));
	if (!array)
		return NULL;
	return array;
}

//���������� �������. ���� � ����������.
int* InputData(int number, int* array)
{
	int i;
	for (i = 0; i < number; i++)
		scanf("%d", &array[i]);
	return array;
}

//������ ����� ������� � ��� � ������� ����������. 
//�������� ������ ����� ��� ���������� ����� ���������.
int Comparison(Deque* D) 
{
	//���� ����� ������� ������ �������� ��� ������ ������ �����.
	while (D->data[D->final]< D->data[(D->final)-1] && D->final != D->start)
	{//������� ������� ������ �� ����� ��������.
		D->data[(D->final) - 1] = D->data[D->final];
		D->final--;
	}
}

//������� ����������� ������� � ������� ��� �� ����, 
//���� �� ����� �������� �� ���������� ��������.
int CleanDeque(Deque* D, int* array, int sub_len, int i)
{
	//���� ��� ����
	if (IsEmpty==1) 
		return 0;
	//���� ������� �� ������� ����� �������� �� ���������� �������� 
	//������� ��� �� ����.
	if (D->data[D->start] == array[i - sub_len])
		return PopFront(D);
	//���� ���������� �������
	else 
		return D->data[D->start];
}

//��������� ������� � ���. ���� ���������� �������, ������� ������� � ������ ans. 
int SubMin(Deque* D, int sub_len, int* array, int number)
{
	int i, j=0;
	//������ � ���������� �� �����������.
	int* ans=NULL;
	//��������� ������ ������� � �������.
	ans = MemoryData(number - sub_len + 1, array);
	for (i = 0; i < number; i++)
	{
		//���� ������� ����������, ���������� ������� � �����. 
		if (i >= sub_len)
		{
			ans[j] = CleanDeque(D, array, sub_len, i);
			j++;
		}
		//��������� ����� ������� � ����� ����.
		PushBack(D, array[i]);
		//��������� ���������, ������� ����������� �� ������� ����.
		Comparison(D);
	}
	ans[j] = CleanDeque(D, array, sub_len, i);
	return ans;
}