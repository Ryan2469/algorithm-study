#include <iostream>

// template 통한 임의의 자료형
template <typename T>
inline T SQUREA(T x) {
    return x*x;
}

int main(void){
    std:: cout << SQUREA(5) << std:: endl;
    std:: cout << SQUREA(7.154) << std:: endl;
}