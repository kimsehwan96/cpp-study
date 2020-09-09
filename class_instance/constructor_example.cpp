#include <iostream>
using namespace std;

class Circle {
    public:
        int radius;
        Circle(); // 매개 변수 없을 때의 생성자
        Circle(int r); // 매개 변수가 있을 때의 생성자
        double getArea();
};

Circle::Circle() { //매개변수 없을때의 생성자 동작 구현
    radius = 1;
    cout << "반지름" <<radius << "원 생성" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
} 

double Circle::getArea(){
    return 3.14 * radius * radius;
}


int main () {
    Circle donut;
    double area = donut.getArea(); // 매개변수 없는 생성자
    cout << "donut 면적은 " << area << endl;
    Circle pizza(30); // 매개변수 있는 생성자
    area = pizza.getArea();
    cout << "pizza 면적은" << area << endl;
 }