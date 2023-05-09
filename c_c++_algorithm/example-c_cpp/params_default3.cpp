#include <iostream>

// 부분적 디폴트 값 설정 && 부분적 디폴트 값은 오른쪽에서 왼쪽으로 작성하기
int BoxVolume(int length, int width = 1 , int height = 1);

int main(void){ 
    std:: cout << "[3, 3, 3] : " << BoxVolume(3,3,3) << std:: endl;

    std:: cout << "[5, 5, 1] : " << BoxVolume(5,5) << std:: endl;

    std:: cout << "[7, 1, 1] : " << BoxVolume(7) << std:: endl;

    // std:: cout << "[?, 1, 1] : " << BoxVolume(1) << std:: endl; 
}

int BoxVolume(int length, int width, int height) {
    return length * width * height;
}