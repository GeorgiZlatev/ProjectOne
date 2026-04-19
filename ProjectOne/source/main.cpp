//#define C

#ifdef  C
extern "C" {
		#include <stdio.h>
	}
#else
		#include <iostream>
		#include <iomanip>
		#include "cpp/functions.hpp"
#endif



int main()
{
	//int a = 7; //stack
	//int* b = new int(7); //heap

	//delete b;
	//int* c = nullptr; //stack

	//int arr_a[10]; //stack
	//int* arr_b = new int[10]; //heap
	//delete[] arr_b;

	#define Base 1024
	#define _1KB(type) new type [Base/sizeof(type)]
	#define _1MB(type) new type [Base*Base/sizeof(type)]
	#define _1GB(type) new type [Base*Base*Base/sizeof(type)]

	int* numbers = nullptr;
	for (int i = 0; i < 500; i++)
	{
		numbers = _1MB(int);
	}
	delete[] numbers;
	std::cout << "";
}