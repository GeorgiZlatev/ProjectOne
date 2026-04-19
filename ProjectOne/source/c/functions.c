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

int** new_2d_array(int rows, int columns, int fill)
{
	//int** arr = new int* [rows]; // cpp
	int** arr = (int**)malloc(sizeof(int*) * rows); // c
	for (int i = 0; i < rows; i++)
	{
		//arr[i] = new int[columns]; // cpp
		arr[i] = (int*)malloc(sizeof(int*) * columns); // c
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = fill;
		}
	}
	return arr;
}
void fill_2d_array(int** arr, int rows, int columns, int fill)
{
	for (int i = 0; i < rows; i++)
	{
		//arr[i] = new int[columns]; // cpp
		//arr[i] = (int*)malloc(sizeof(int*) * columns); // c
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = fill;
		}
	}
}
void print_2d_array(int** arr, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		//arr[i] = new int[columns]; // cpp
		//arr[i] = (int*)malloc(sizeof(int*) * columns); // c
		for (int j = 0; j < columns; j++)
		{
			printf("%d, ", arr[i][j]);
		}
		printf("\n");
	}
}
void delete_2d_array(int** arr, int rows) 
{
	for (int i = 0; i < rows; i++)
	{
		//delete[] arr[i]; // cpp
		free(arr[i]); // c
	}
	//delete[] arr; // cpp
	free(arr);
	//arr = nullptr;// cpp
}