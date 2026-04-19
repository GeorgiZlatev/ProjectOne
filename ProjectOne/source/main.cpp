//#define C

#ifdef  C
extern "C" {
		#include <stdio.h>
		#include <stdlib.h>
		#include "c/functions.h"
	}
#else
		#include <iostream>
		#include <iomanip>
		#include "cpp/functions.hpp"
#endif

////c
//int main()
//{
//	int rows = 10;
//	int columns = 10;
//	int fill = 6;
//
//	while (true) {
//		int** arr = new_2d_array(rows, columns, fill);
//		fill_2d_array(arr, rows, columns, fill);
//		print_2d_array(arr, rows, columns);
//		fill_2d_array(arr, rows, columns, 3);
//		print_2d_array(arr, rows, columns);
//		delete_2d_array(arr, rows);
//	}
//}

// cpp


int main()
{
	int rows = 10;
	int columns = 10;
	int fill = 6;

	while (true) {
		std::vector<std::vector<int>> matrix;

		Create2DMatrix(matrix, rows, columns, fill);
		Print2DMatrix(matrix);
		Fill2DMatrix(matrix, -3);
		Print2DMatrix(matrix);
		Delete2DMatrix(matrix);
	}
}