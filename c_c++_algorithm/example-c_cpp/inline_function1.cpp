#include <iostream>

// 매크로 함수(복습)
#define SQUARE(x, y, z) ((x)*(x) + (y) * (z))

int main(void){
    std:: cout << SQUARE(5,3,1) << std::endl;
    std:: cout << SQUARE(2.7,3,3.1) << std::endl;
}

