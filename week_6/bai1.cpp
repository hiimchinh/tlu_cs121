#include <iostream>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; i++)
    {
       cout << "Mời bạn nhập vào giá trị thứ " << i + 1 << ": ";
       cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    cout << "Giá trị lớn nhất trong mảng đó là: " << max << endl;
    cout << "Giá trị nhỏ nhất trong mảng đó là: " << min << endl;
    
}