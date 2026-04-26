#define C

#ifdef  C
extern "C" {
		#include <stdio.h>
		#include <stdlib.h>
		//#include <string.h>
		#include "c/functions.h"
	}
#else
		#include <iostream>
		#include <iomanip>
		#include "cpp/functions.hpp"
#endif

//#include <string> // cpp
//#include <cstring> // c

char** create_char_matrix(int rows, int colums, char empty_symbol)
{
	//char** arr = new char* [rows + 1]; //c++
	char** arr = (char**)malloc(sizeof(char*) * rows + 1);
	for (int i = 0; i < rows; i++)
	{
		arr[i] = (char*)malloc(sizeof(char) * colums + 1);
		for (int j = 0; j < colums; j++)
		{
			arr[i][j] = empty_symbol;
		}
		arr[i][colums] = NULL;
	}
	arr[rows] = NULL;
	return arr;
}

int my_strlen(char** arr)
{
	int size = 0;
	while (arr[size] != NULL) {
		size++;
	}
	return size;
}

void print_char_matrix(char** arr, bool space)
{
	for (int i = 0; i < my_strlen(arr); i++)
	{
		for (int j = 0; j < my_strlen(arr[i]); j++)
		{
			if (space) {
				printf("%c ", arr[i][j]);
			}
			else {
				printf("%c", arr[i][j]);
			}
		}
		printf("\n");
	}
}

int chaeck_rows(char** arr, char empty_symbol)
{
	int rows = my_strlen(arr);
	int columns = my_strlen(arr[0]);
	for (int i = 0; i < rows; i++)
	{
		char first = arr[i][0];
		if (first == empty_symbol)
		{
			continue;
		}
		int count = 1;
		for (int j = 1; j < columns; j++)
		{
			if (first == arr[i][j]) {
				count++;
			}
			else {
				break;
			}
		}
		if (count == columns)
		{
			return 1;
		}
	}
	return 0;
}

int chaeck_columns(char** arr, char empty_symbol)
{
	int rows = my_strlen(arr);
	int columns = my_strlen(arr[0]);
	for (int i = 0; i < rows; i++)
	{
		char first = arr[0][i];
		if (first == empty_symbol)
		{
			continue;
		}
		int count = 1;
		for (int j = 1; j < columns; j++)
		{
			if (first == arr[j][i]) {
				count++;
			}
			else {
				break;
			}
		}
		if (count == columns)
		{
			return 1;
		}
	}
	return 0;
}

int chaeck_main_diagonal(char** arr, char empty_symbol)
{
	char first = arr[0][0];
	int rows = my_strlen(arr);
	if (first == empty_symbol) {
		return 0;
	}
	int count = 1;
	for (int i = 1; i < rows; i++)
	{
		if (first == arr[i][i]) {
			count++;
		}
		else {
			break;
		}
	}
	if (count == rows) {
		return 1;
	}
	return 0;
}

int check_secondary_diagonal(char** arr, char empty_symbol)
{
	int columns = my_strlen(arr[0]);
	char first = arr[0][columns - 1];
	if (first == empty_symbol) {
		return 0;
	}
	int count = 1;
	for (int i = 1; i < columns; i++)
	{
		if (first == arr[i][columns - 1 - i]) {
			count++;
		}
		else {
			break;
		}
	}
	if (count == columns) {
		return 1;
	}
	return 0;
}

int main(int argc, char* argv[])
{
	int rows = 3;
	int colums = 3;
	char empty_symbol = '*';
	char** matrix = create_char_matrix(rows, colums, empty_symbol);
	matrix[0][2] = 'A';

	for (int i = 0; i < rows; i++)
	{
		matrix[0][i] = 'A'; // rows
		matrix[i][0] = 'A'; // columns
		matrix[i][i] = 'A'; // diagonal
		matrix[i][rows -1 -i] = 'A'; // secondary diagonal
	}

	print_char_matrix(matrix, true);
	int test  = chaeck_rows(matrix, empty_symbol);
	int test1 = chaeck_columns(matrix, empty_symbol);
	int test2 = chaeck_main_diagonal(matrix, empty_symbol);
	int test3 = check_secondary_diagonal(matrix, empty_symbol);

	return 0;
}