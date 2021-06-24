#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float salary = 0.01;
    int days;
    cout << "Số ngày người đó làm việc là: ";
    cin >> days;
    cout << left << setw(7) << "Ngày" << setw(10) << "Tiền lương ($)" << endl;
    for (int i = 0; i < days; i++)
    {
        int ngayLuong = i + 1;
        cout << setw(7) << ngayLuong << setw(10) << salary << endl;
        salary *= 2;
    }
    
}