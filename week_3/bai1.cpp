#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Mời bạn nhập một giá trị nguyên dương: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i + 1;
    }
    cout << "Tổng giá trị là: " << sum << endl;
}