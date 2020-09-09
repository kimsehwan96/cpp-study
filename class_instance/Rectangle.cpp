#include <iostream>
using namespace std;

class Reactangle {
    public:
        int width;
        int height;
        int getArea();
};

int Reactangle::getArea(){
    return width * height;
}


int main() {
    Reactangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은" << rect.getArea() << "입니다 \n";
    return 0;
}