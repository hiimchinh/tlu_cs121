#include <iostream>
using namespace std;

int main() {
    int numberOfSalsaTypes = 5, totalSold = 0, indexMaxSoldType = 0, indexMinSoldType = 0;
    string salsaTypes[numberOfSalsaTypes] = {"nhẹ", "vừa", "ngọt", "nóng", "vị chanh"};
    int soldNumbers[numberOfSalsaTypes];

    for (int i = 0; i < numberOfSalsaTypes; i++)
    {
        int soldNumber;
        do
        {
            cout << "Nhập số lọ salsa loại " << salsaTypes[i] << ": ";
            cin >> soldNumbers[i];
        } while (soldNumbers[i] < 0);
        totalSold += soldNumbers[i];
    }
    for (int i = 0; i < numberOfSalsaTypes; i++)
    {
        if (soldNumbers[i] > soldNumbers[indexMaxSoldType]) {
            indexMaxSoldType = i;
        }
        if (soldNumbers[i] < soldNumbers[indexMinSoldType]) {
            indexMinSoldType = i;
        }
        cout << "Số lọ salsa loại " << salsaTypes[i] << " đã bán được là: " << soldNumbers[i] << endl;
    }
    cout << "Tổng doanh số bán hàng được: " << totalSold << " lọ." << endl;
    cout << "Tên sản phẩm bán chạy nhất là: " << salsaTypes[indexMaxSoldType] << " với " << soldNumbers[indexMaxSoldType] << " lọ." << endl;
    cout << "Tên sản phẩm bán chậm nhất là: " << salsaTypes[indexMinSoldType] << " với " << soldNumbers[indexMinSoldType] << " lọ." << endl;
    
}