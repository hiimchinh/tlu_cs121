#include <iostream>
using namespace std;

int main() {
    float firstItem = 15.59;
    float secondItem = 24.59;
    float thirdItem = 6.59;
    float fourthItem = 12.59;
    float fifthItem = 3.59;
    float totalBeforeTax = firstItem + secondItem + thirdItem + fourthItem + fifthItem;
    float totalTax = totalBeforeTax * 7 / 100;
    float totalAfterTax = totalBeforeTax + totalTax;


    cout << "Giá của món đồ thứ nhất là: " << firstItem << endl;
    cout << "Giá của món đồ thứ hai là: " << secondItem << endl;
    cout << "Giá của món đồ thứ ba là: " << thirdItem << endl;
    cout << "Giá của món đồ thứ tư là: " << fourthItem << endl;
    cout << "Giá của món đồ thứ năm là: " << fifthItem << endl;
    cout << "Tổng tạm tính của giỏ hàng là: " << totalBeforeTax << endl;
    cout << "Tổng số tiền thuế là: " << totalTax << endl;
    cout << "Tổng phải trả là: " << totalAfterTax << endl;
    return 0;
}