#include "Core.h"
#include <iostream>
#include <string>

namespace Core {

	void print_int(int value) {
		std::cout << value << "\n";
		std::cin.get();
	}

	/*
	void print_float(float value) {
		std::cout << value << "\n";
		std::cin.get();
	}
	*/
	
	void print_string(const std::string value) {
		std::cout << value << "\n";
		std::cin.get();
	}
}