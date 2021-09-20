/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4 
Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
#include <string>
#include "shapes.h"

int main() {
    // box(width, height); 
    std::cout << "box(3,5):\n";
    std::cout << box(3,5);

    std::cout << "box(7,4):\n";
    std::cout << box(7,4);

    std::cout << "box(6,6):\n";
    std::cout << box(6,6);

    std::cout << "\n------------------\n"; // seperator

    // checkerboard(width, height); 
    std::cout << "checkerboard(11, 6):\n";
    std::cout << checkerboard(11, 6);

    std::cout << "checkerboard(3, 8):\n";
    std::cout << checkerboard(3, 8);

    std::cout << "checkerboard(5, 5):\n";
    std::cout << checkerboard(5, 5);

    std::cout << "\n------------------\n"; // seperator

return 0;
}