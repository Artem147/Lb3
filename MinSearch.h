/*
	MinSearch
	������� ������������� ����, ���������� �������� ������� ����,
	������� ��� ������ �������� �� ������ ���������� ������� ������� �.
	�������� �.�.
	��� - 13��
*/
#ifndef _MinSearch_
#define _MinSearch_
#include "Deque.h"

//���������� �������. ���� � ����������.
int* InputData(int number, int* array);

//��������� ������ �������. ������� ������ ��� �������.
int* MemoryData(int number, int* array);

//���������� ������ �������� �� ����������.
int Comparison(Deque* D);

//�������� �������� �� ���������� ���������.
int CleanDeque(Deque* D, int* array, int sub_len, int i);

//��������.
int SubMin(Deque* D, int sub_len, int* array, int number);
#endif //!_MinSearch_