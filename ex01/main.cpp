#include "iter.hpp"
#include <string>
#include <iostream>

// void print(int nbr) {
//     std::cout << nbr << std::endl;
// }

// // void print(const std::string& str) {
// //     std::cout << str << std::endl;
// // }

// int return_function(int nbr) {
//     return nbr;
// }


int main() {
    std::cout << "Testing on array of integers:" << std::endl;
    int intArray[5] = {1, 2, 3, 4, 5};
    iter(intArray, 5, print<int>);
    std::cout << "Testing on array of strings:" << std::endl;
    std::string stringArray[3] = {"test1", "test2", "test3"};
    iter(stringArray, 3, print<int>);
    return 0;
}