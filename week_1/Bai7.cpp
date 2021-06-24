#include <iostream>
using namespace std;

int main() {
    float amountWaterRiseAnnually = 1.5;
    float amountWaterRiseAfterFiveYears = amountWaterRiseAnnually * 5;
    float amountWaterRiseAfterSevenYears = amountWaterRiseAnnually * 7;
    float amountWaterRiseAfterTenYears = amountWaterRiseAnnually * 10;
    cout << "Số mm sẽ tăng lên so với mức nước biển hiện tại sau 5 năm là: ";
    cout << amountWaterRiseAfterFiveYears << endl;
    cout << "Số mm sẽ tăng lên so với mức nước biển hiện tại sau 7 năm là: ";
    cout << amountWaterRiseAfterSevenYears << endl;
    cout << "Số mm sẽ tăng lên so với mức nước biển hiện tại sau 10 năm là: ";
    cout << amountWaterRiseAfterTenYears << endl;
    return 0;
}