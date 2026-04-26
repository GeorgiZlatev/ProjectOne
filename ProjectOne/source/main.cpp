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

//int main()
//{
//	//Value intialization
//	int a{ 1 };
//
//	//Direct intialization
//	int b(2);
//
//	//Copy intialization
//	int c = 3;
//
//	//Reference intialization
//	int& d = a;
//
//	//Direct List intialization
//	int e[]{ 1,2,3 };
//
//	//Copy list intialization
//	int f[] = { 1,2,3 };
//}

//cpp
//int main()
//{
//	int a = 0;
//	char example[]{ 'H', 'e', 'l', 'l', 'o','\0'};
//	//char example2[]{ 'H', 'E', 'L', 'L', 'O','\0'};
//std::cout << example;
//}

//Copy c
//int main()
//{
//	char a[]{ "Hello" };
//	char b[50]{ };
//	printf("d\n", my_strlen(a));
//	printf("%llu\n", strlen(a));
//	
//	my_strcpy(b, a);
//	//strcpy_s(b, a);
//	printf("%s", b);
//}

////Cat c
//int main()
//{
//	char a[]{ "Hello" };
//	char b[]{ " World!" };
//	char c[50]{};
//
//	my_strcpy(c, a);
//	my_strcat(c, b);
//	//strcat_s(c, b);
//	printf("%s", c);
//}

//Comparison c
int main()
{
	char a[]{ "Hello" };
	char test_a[]{ "Hello" };

	//printf("%d", strcmp(a, test_a));
	printf("%d", my_strcmp(a, test_a));
}