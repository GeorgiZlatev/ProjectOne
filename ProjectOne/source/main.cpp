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

//#include <string> // cpp
//#include <cstring> // c

int main()
{
	//Value intialization
	int a{ 1 };

	//Direct intialization
	int b(2);

	//Copy intialization
	int c = 3;

	//Reference intialization
	int& d = a;

	//Direct List intialization
	int e[]{ 1,2,3 };

	//Copy list intialization
	int f[] = { 1,2,3 };
}