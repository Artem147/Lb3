/*
	MinSearch
	������� ������������� ����, ���������� �������� ������� ����.
	������� ��� ������ �������� �� ������ ���������� ������� ������� �.
	�������� �.�.
	��� - 13��
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
	//������ �� ��������� �� ������ ����������.
	int* ans;
	ans = NULL;
	//���.
	Deque* D;
	D = malloc(sizeof(Deque));
	//����� ���������.
	int sub_len;
	//���������� ���������.
	int number;
	//�������.
	int i;
	printf("Split length: ");
	scanf("%d",&sub_len);
	printf("Number of elements: ");
	scanf("%d", &number," ");
	//���� ��������� ������ ���������� ���������.
	if (number < sub_len)
	{
		printf("Invalid value");
		return 0;
	}
	printf("Origin Data ");
	//�������� ������ �.
	int* array;
	array = NULL;
	//������������� ��������� �������.
	array = InputData(number, number, array);
	//������������� ����.
	if(!Initialize(D, number)) 
	{
		printf("Invalid value");
		return 0;
	}
	//���� ����� ���������� ����� 1, ������ ������� - ������� ����������.
	if (sub_len == 1) 
		ans = array;
	//����� ����������� �������� �� ������ ��������. 
	else 
		ans = Algorithm(D, sub_len, array, number);
	//����� ������.
	for (i = 0; i < (number - sub_len + 1); i++)
		printf("%d ", ans[i]);
	//������������ ������.
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