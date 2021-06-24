#include <iostream>
using namespace std;

int main() {
    int speed, time;
    cout << "Tốc độ của xe là bao nhiêu dặm một giờ: ";
    cin >> speed;
    cout << "Xe đã đi được bao nhiêu giờ: ";
    cin >> time;
    cout << "Khoảng cách theo giờ mà xe đã đi:" << endl;
    cout << "-------------------------------------------" << endl;
    for (int i = 0; i < time; i++)
    {
        cout << i + 1 << "   " << speed * (i + 1) << endl;
    }
    
}