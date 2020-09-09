#include <iostream>
using namespace std;

class Rectangle {
    public:
        int height;
        int width;
        bool isSqure();
        Rectangle();
        Rectangle(int h);
        Rectangle(int h, int w);
};

bool Rectangle::isSqure(){
    if (height == width){
        return true;
    }
    else
    {
        return false;
    }
}

Rectangle::Rectangle() : Rectangle(1,1) { }
Rectangle::Rectangle(int h) : Rectangle(h, h) { }
Rectangle::Rectangle(int h, int w){
    height = h;
    width = w;
    cout << "사각형 생성 됨" << height << width << "높이, 길이 \n";
}

int main () {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if(rect1.isSqure()) cout << "rect 1 은 정사각형이다." << endl;
    if(rect2.isSqure()) cout << "rect 2 은 정사각형이다." << endl;
    if(rect3.isSqure()) cout << "rect 3 은 정사각형이다." << endl;


}