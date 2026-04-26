#define C

#ifdef  C
extern "C" {
		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>
		#include "c/functions.h"
		#include "c/xo_game.h"
	}
#else
		#include <iostream>
		#include <iomanip>
		#include <algorithm>
		#include "cpp/functions.hpp"
#endif

int main(int argc, char* argv[])
{
#ifdef C
	//w - write
	//r - read
	//a - append

	// c
	const char filename[] = "main2.cpp";
	const char data[] = "#include <iostream>\n\nint main(){\n\tstd::cout<<\"Hello World!\" << std::endl;\n\tsystem(\"pause\");\n";
	write_to_file(filename, data);

	//system("g++ -o main2.cpp");
	//system("start main2.exe");

	char** fileInfo = read_from_file(filename);
	print_char_matrix(fileInfo, false);
#else
	std::string data = "#include <iostream>\n\nint main(){\n\tstd::cout<<\"Hello World!\" << std::endl;\n\tsystem(\"pause\");\n";
	std::string filename = "main2.cpp";

	writeToFile(filename, data);

	//ver1
	//std::vector<std::string> fileInfo = readFromFile(filename);
	//for (int i = 0; i < fileInfo.size(); i++)
	//{
	//	std::cout << fileInfo.at(i) << "\n";
	//}

	//ver2
	//std::vector<std::string> fileInfo = readFromFile(filename);
	//for (auto& it : fileInfo) {
	//	std::cout << it << "\n";
	//}

	//ver3
	auto fileInfo = readFromFile(filename);
	std::for_each(fileInfo.begin(), fileInfo.end(), [](std::string& str) {
		std::cout << str << "\n";
		});
#endif


	return 0;
}