#define C

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

int main()
{
	int size = 10;
	int fill = 3;
	// memory leak test 
	//for (int i = 0; i < 100000; i++)
	//{
		int* arr = new_array(size, fill);
		print_array(arr, size);
		fill_array(arr, size, 7);
		print_array(arr, size);
		delete_array(arr);
	//}
}