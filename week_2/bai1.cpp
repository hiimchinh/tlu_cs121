#include <iostream>
using namespace std;

int main() {
    int numberOne, numberTwo;
    cout << "Nhập vào số thứ 1: ";
    cin >> numberOne;
    cout << "Nhập vào số thứ 2: ";
    cin >> numberTwo;
    numberOne > numberTwo ? cout << "Số thứ 1 lớn hơn số thứ 2" : cout << "Số thứ 2 lớn hơn số thứ 1";
    cout << endl;
    return 0;
}