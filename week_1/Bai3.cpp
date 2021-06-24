#include <iostream>
using namespace std;

int main() {
    int cartValue = 95;
    float stateTax = 2 / 100.0;
    float districtTax = 4 / 100.0;
    float totalTaxValue = cartValue * stateTax + cartValue * districtTax;
    cout << totalTaxValue << endl;
    return 0;
}