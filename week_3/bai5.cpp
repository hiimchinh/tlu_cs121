#include <iostream>
using namespace std;

int main() {
    float fee = 2500;
    for (int i = 0; i < 6; i++)
    {
        float addedFee = fee * 4 / 100;
        fee += addedFee;
        cout << "Mức phí dự kiến trong năm thứ " << i + 1 << " là: " << fee << endl;
    }
    
}