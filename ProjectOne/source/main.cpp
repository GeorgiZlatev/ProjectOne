//#define C

#ifdef  C
extern "C" {
		#include <stdio.h>
	}
#else
		#include <iostream>
#endif //  C


using namespace std;

int main()
{
	// C
	//printf("Hello World!\n");
	// Cpp
	std::cout << "Hello World!\n";
	return 0;
}
