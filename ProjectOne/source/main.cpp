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

#include <vector>
#include <algorithm>
int main()
{
	std::vector<int> my_vector{ 1,2,3,4,5 };
	std::fill(my_vector.begin(), my_vector.end(), 0);
	// memory leak test
	//for (size_t i = 0; i < 100000; i++)
	//{
		for (int i = 0; i < my_vector.size(); i++)
		{
			std::cout << my_vector[i] << ", ";
		}
		std::cout << std::endl;
	//}
}