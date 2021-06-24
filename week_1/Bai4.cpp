#include <iostream>
using namespace std;

int main() {
    float mealPrice = 88.67;
    float tax = 6.75 / 100 * mealPrice;
    float tip = (mealPrice + tax) * 20 / 100;
    float totalBill = mealPrice + tip + tax;
    cout << "Chi phí bữa ăn là: " << mealPrice << endl;
    cout << "Số tiền thuế của bữa ăn là: " << tax << endl;
    cout << "Số tiền tip của bữa ăn là: " << tip << endl;
    cout << "Tổng hóa đơn là: " << totalBill << endl;
    return 0;
}