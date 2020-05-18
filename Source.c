#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
//�������� � ���������� �������. ������� ������ ��� �������.
int* InputData(int number, int origin_number, int* array)
{
	int i;
	array = malloc(number * sizeof(int));
	if (!array) return NULL;
	//���������� ���������� ���������, � ����������� ���������
	//��������� �������. Return ��� ������� ans[].
	if(number< origin_number) return array;
	for(i=0; i< number; i++)
		scanf("%d", &array[i]);
	//Return ��� ��������� �������.
	return array;
}
//������ ����� ������� � ��� � ������� ����������.
int Comparison(Deque* D) 
{//���� ����� ������� ������ �������� ��� ������ ������ �����.
	while (D->data[D->final]< D->data[(D->final)-1] && D->final != D->start)
	{//������� ������� ������ �� ����� ��������.
		D->data[(D->final) - 1] = D->data[D->final];
		D->final--;
	}
}
//������� ����������� ������� � ������� ��� �� ����, 
//���� �� ����� ������� �������� ����������
int CleanDeque(Deque* D, int* array, int sub_len, int i)
{//���� ��� ����
	if (!isEmpty) return 0;
	if (D->data[D->start] == array[i - sub_len])
		return PopFront(D);
	else return D->data[D->start];
}
//��������� ������� � ���. ���� ���������� �������, ������� ������� � ������ ans. 
int Algorithm(Deque* D, int sub_len, int* array, int number)
{
	int i,j=0;
	//������ � ���������� �� �����������.
	int* ans=NULL;
	//��������� ������ ������� � �������.
	ans = InputData(number - sub_len + 1, number, array);
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