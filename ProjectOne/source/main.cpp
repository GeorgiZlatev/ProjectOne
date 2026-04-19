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



//int main()
//{
//	// array
//	
//	////const int size = 3;
//	////int numbers[size] = { 50, 60, 70 };
//	////std::cout << numbers << std::endl; // 0x000000AB85EFF698
//	////std::cout << *numbers << std::endl;
//
//	////std::cout << numbers+1 << std::endl; // 000000E519F6F8AC
//	////std::cout << *(numbers+1) << std::endl;
//
//	//const int sizeX = 3;
//	//char word[sizeX + 1] = { 'a', 'b','c', '\0' };
//
//	////for (int i = 0; i < sizeX; i++)
//	////{
//	////	std::cout << word[i];
//	////}
//
//	////int index = 0;
//	////while (word[index] != '\0')
//	////{
//	////	std::cout << word[index];
//	////	index++;
//	////}
//
//	//std::cout << word << std::endl;
//
//	// matrix
//
//	const int sizeX = 3;
//	const int sizeY = 3;
//	//Raw arrays
//	int matrix[sizeX][sizeY] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	for (int i = 0; i < sizeX; i++)
//	{
//		for (int j = 0; j < sizeY; j++)
//		{
//			std::cout << matrix[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//}

// Cpp
#include <array>
int main()
{
	const int sizeX = 3;
	const int sizeY = 3;

	std::array<int, sizeX> row = { {1, 2, 3} };

	std::array<std::array<int, sizeY>, sizeX> matrix = 
	{ {
		{{1,2,3}},
		{{4,5,6}},
		{{7,8,9}}
	} };
}