#include <iostream>

double area(int r);

int main() {
    int n = 3;
    char c ='#';
    std::cout << c << 5.5 << '-' << "hello" << true << std::endl;
    std::cout << "면적은" << area(n);
}

double area(int r){
    return 3.14*r*r;
}