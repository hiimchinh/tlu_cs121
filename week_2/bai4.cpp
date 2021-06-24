#include <iostream>
using namespace std;

int main() {
    int length1, width1, length2, width2;
    cout << "Nhập chiều dài hình chữ nhật thứ nhất: ";
    cin >> length1;
    cout << "Nhập chiều rộng hình chữ nhật thứ nhất: ";
    cin >> width1;
    cout << "Nhập chiều dài hình chữ nhật thứ hai: ";
    cin >> length2;
    cout << "Nhập chiều rộng hình chữ nhật thứ hai: ";
    cin >> width2;
    int area1 = length1 * width1;
    int area2 = length2 * width2;
    if (area1 > area2) {
        cout << "Diện tích hình chữ nhật thứ nhất lớn hơn.";
    } else if (area2 > area1) {
        cout << "Diện tích hình chữ nhật thứ hai lớn hơn.";
    } else {
        cout << "Hai hình chữ nhật có diện tích bằng nhau.";
    }
    cout << endl;

}