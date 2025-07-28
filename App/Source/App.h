#pragma once
#include <iostream>
#include <string>

void selector() {
    int choice;

    std::cout << "Enter 1 for Integer Printing...\nEnter 2 for String Printing...\nInput: ";
    std::cin >> choice;

    std::cout << "Switch [STARTED]\n";
    switch (choice) {
    case 1: {
        int print_int = 0;
        std::cout << "Integer to print: ";
        std::cin >> print_int;
        Core::print_int(print_int);
        break;
    }
    case 2: {
        std::string print_str = "";
        std::cout << "String to print: ";
        /*
        std::cin >> print_str;
        ^^ This code only reads input until first whitespace.
        */
        std::cin.ignore();
        std::getline(std::cin, print_str);
        Core::print_string(print_str);
        break;
    }
    default:
        std::cout << "[INVALID]\n";

    }
    std::cout << "Switch [FINISHED]\n";
}