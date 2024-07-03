// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    int32_t unsgn;

    flt = -7.66f;
    sgn = flt;
    unsgn = sgn;

    std::cout << "Float Value: " << flt << std::endl;
    std::cout << "Signed Int: " << sgn << std::endl;
    std::cout << "Unsigned Int: " << unsgn << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
