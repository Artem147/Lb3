#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include "Deque.h"
#include "Source.h"

int main()
{
	//������ �� ��������� �� ������ ����������.
	int* ans;
	ans = NULL;
	//���
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
	Initialize(D, number);
	//���� ����� ���������� ����� 1, ������ ������� - ������� ����������.
	if (sub_len == 1) 
		ans = array;
	//����� ����������� �������� �� ������ ��������. 
	else ans = Algorithm(D, sub_len, array, number);
	//����� ������.
	for (i = 0; i < (number - sub_len + 1); i++)
		printf("%d ", ans[i]);
	free(array);
	free(ans);
	system("pause");
	return 0;
}