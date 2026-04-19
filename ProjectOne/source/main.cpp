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

void one(int argOne)
{
	argOne *= 2;
	std::cout << "One: " << argOne << std::endl;
}
void two(int& argOne)
{
	argOne *= 2;
	std::cout << "Two: " << argOne << std::endl;
}
void tree(int* argOne)
{
	(*argOne) *= 2;
	std::cout << "Tree: " << *argOne << std::endl;
}

int main()
{
	int a = 7;
	std::cout << "Before one: " << a << std::endl;
	one(a);
	std::cout << "After one: " << a << std::endl;

	std::cout << "Before two: " << a << std::endl;
	two(a);
	std::cout << "After two: " << a << std::endl;

	std::cout << "Before tree: " << a << std::endl;
	tree(&a);
	std::cout << "After tree: " << a << std::endl;

	//FindRoot(1, 2, -15);
	
	//int* ptr = nullptr;
	//int a = 7;
	//ptr = &a;

	//int& b = a;

	//a = 10;
	//*ptr = 10;
	//b = 10;

	//std::cout << "1: " << a << std::endl; // 7
	//std::cout << "2: " << &a << std::endl; // 0x000000928AAFF664
	//std::cout << "3: " << ptr << std::endl; // 0x000000928AAFF664
	//std::cout << "4: " << &ptr << std::endl; // 0x000000928AAFF648

	//std::cout << "5: " << *ptr << std::endl; // 7
	//std::cout << "6: " << b << std::endl; // 7
	//std::cout << "7: " << &b << std::endl; // 7
}
