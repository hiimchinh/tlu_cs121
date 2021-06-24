#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout << "Nhập vào ngày: ";
    cin >> day;
    cout << "Nhập vào tháng: ";
    cin >> month;
    cout << "Nhập vào năm (chỉ nhập 2 số cuối): ";
    cin >> year;
    month * day == year ? cout << "Đó là một ngày phép thuật." : cout << "Đó không phải là ngày phép thuật";
    cout << endl;
}