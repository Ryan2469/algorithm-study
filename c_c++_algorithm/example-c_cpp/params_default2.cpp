#include <iostream>

// 디폴트 값은 함수의 선언 부분에만 표현
int Adder(int num1 = 1, int num2 = 2);

int main(void) {
    std:: cout << Adder() << std:: endl;

    std:: cout << Adder(5) << std:: endl;

    std:: cout << Adder(3, 5) << std:: endl;
}

// int Adder(int num1 = 1, int num2 = 2) {
//     return num1 + num2;
// }