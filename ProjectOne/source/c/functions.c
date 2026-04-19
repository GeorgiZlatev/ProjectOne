#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int* new_array(int size, int fill)
{
	int* arr = (int*)malloc(size * sizeof(int));
	// int* arr = new int[size]; // cpp style
	if (arr != NULL) {
		for (int i = 0; i < size; i++)
		{
			arr[i] = fill;
		}
	}
	return arr;
}

void print_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("\n");
}
void fill_array(int* arr, int size, int fill)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = fill;
	}
}
void delete_array(int* arr)
{
	free(arr);
}