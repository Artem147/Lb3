#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int* InputData(int n)
{
	int*A;
	int i;
	A = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		scanf("%d", &A[i]);
	return A;
}
