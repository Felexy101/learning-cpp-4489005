// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>


int main() {
    std::string w;
    std::cout << "Please Enter a Word: " << std::flush;
    std::cin >> w;

    std::cout << "The Word Enetered Was: " << w << std::endl;

    return 0;
}