#include <iostream>
using namespace std;

int main() {
    int accounts[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
     8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
     1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
     cout << "Mời bạn nhập số tài khoản tính phí: ";
     int accountNumber;
     cin >> accountNumber;
     bool found = false;
     for (int i = 0; i < 18; i++)
     {
         if (accounts[i] == accountNumber)
         {
             found = true;
             break;
         }
     }
     if (found)
     {
         cout << "Số bạn nhập hợp lệ." << endl;
     } else
     {
         cout << "Sô bạn nhập không hợp lệ." << endl;
     }
     
     
    return 0;
}