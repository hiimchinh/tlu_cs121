#include <iostream>
using namespace std;

int main() {
    double rainAmounts[12];
    int highestAmountMonth, lowestAmountMonth, highestMonth = 1, lowestMonth = 1;
    double totalRainAmount, averageRainAmount;
    for (int i = 0; i < 12; i++)
    {
        double rainAmount;
        do
        {
            cout << "Mời bạn nhập vào lượng mưa của tháng " << i + 1 << ": ";
            cin >> rainAmount;
        } while (rainAmount < 0);
        rainAmounts[i] = rainAmount;
        totalRainAmount += rainAmount;
    }
    averageRainAmount = totalRainAmount / 12;
    highestAmountMonth = rainAmounts[0];
    lowestAmountMonth = rainAmounts[0];
    

    for (int i = 0; i < 12; i++)
    {
        if (rainAmounts[i] > highestAmountMonth) {
            highestAmountMonth = rainAmounts[i];
            highestMonth = i + 1;
        } else if (rainAmounts[i] < lowestAmountMonth) {
            lowestAmountMonth = rainAmounts[i];
            lowestMonth = i + 1;
        }
    }
    cout << "Tổng lượng mưa 12 tháng là: " << totalRainAmount << endl;
    cout << "Trung bình lượng mưa 12 tháng là: " << averageRainAmount << endl;
    cout << "Tháng có lượng mưa lớn nhất là tháng " << highestMonth << " với lượng mưa là: " << highestAmountMonth << endl;
    cout << "Tháng có lượng mưa nhỏ nhất là tháng " << lowestMonth << " với lượng mưa là: " << lowestAmountMonth << endl;
    
}