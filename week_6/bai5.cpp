#include <iostream>
using namespace std;

int main() {
    int monkeyFood[3][5];
    int totalFoodEachMonkeys[3] ={0, 0, 0};
    int totalFoodMonkeys = 0;
    int maxAmountMonkey = 0, minAmountMonkey = 0;

    for (int i = 0; i < 3; i++)
    {
        int monkeyNo = i + 1;
        int currentDayMonkeyFood;
        for (int j = 0; j < 5; j++)
        {
            do
            {
                cout << "Con khỉ thứ " << monkeyNo << " ngày thứ " << j + 1 << " ăn bao nhiêu pound thức ăn: ";
                cin >> currentDayMonkeyFood;
            } while (currentDayMonkeyFood < 0);
            monkeyFood[i][j] = currentDayMonkeyFood;
            totalFoodMonkeys += currentDayMonkeyFood;
            totalFoodEachMonkeys[i] += currentDayMonkeyFood;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Total food each monkey: " << i << " is: " << totalFoodEachMonkeys[i] << endl;
    }
    
    cout << "Lượng thức ăn trung bình mỗi ngày của gia đình khỉ là: " << totalFoodMonkeys / 5.0 << endl;
    
}