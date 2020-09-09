#include <iostream>
using namespace std;
class Circle{
    public:
        int radius;
        Circle();
        Circle(int r);
        ~Circle();
        double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {
    radius = r;
    cout << "반지름" << radius << "원 생성 함" << endl;
}

Circle::~Circle() {
    cout << "반지름" << radius << "원 소멸" << endl;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main() {
    f();
    Circle donut;
    Circle pizza(30);
    
    return 0;
}