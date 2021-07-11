#include <iostream>
using namespace std;

int main()
{
    int empId[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[7];
    double payRate[7], wages[7];

    for (int i = 0; i < 7; i++)
    {
        int workHour;
        do
        {
            cout << "Nhập số giờ làm của nhân viên " << empId[i] << ": ";
            cin >> workHour;
        } while (workHour < 0);
        hours[i] = workHour;
        
        double employeePayRate;
        do
        {
            cout << "Nhập tỷ lệ trả lương của nhân viên " << empId[i] << ": ";
            cin >> employeePayRate;
        } while (employeePayRate < 0);
        payRate[i] = employeePayRate;
        wages[i] = employeePayRate * workHour;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << "Số tiền lương của nhân viên " << empId[i] << " là: " << wages[i] << endl;
    }
    
    
}