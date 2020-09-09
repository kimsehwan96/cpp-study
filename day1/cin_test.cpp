#include <iostream>
using namespace std;

int main () {
    cout << "너비를 입력하시오 >>";
    int width;
    cin >> width;
    cout << "높이를 입력하시오 >>";
    int height;
    cin >> height;
    int area = width * height;
    cout << "면적은" << area << "\n";
    return 0;
}