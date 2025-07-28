#include "Core/Core.h"
#include "App.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Main [STARTED]\n";
    selector();
    /*
    const double pi = 3.141592653;
    std::cout << pi;
    */
    int value = 67;
    int* ptr = &value;
    std::cout << ptr << "\n";
    return 0;
}