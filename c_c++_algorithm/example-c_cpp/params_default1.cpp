#include <iostream>

// 함수의 매개 변수에 설정하는 디폴트 값의 의미
int Adder(int num1 = 1, int num2 = 2) {
    return num1 + num2;
}

int main(void) {
    std:: cout << Adder() << std:: endl;

    std:: cout << Adder(5) << std:: endl;

    std:: cout << Adder(3, 5) << std:: endl;
}

