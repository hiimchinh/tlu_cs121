#include <iostream>
using namespace std;

int main() {
    int tickets[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    cout << "Mời bạn nhập con số trùng thưởng tuần này: ";
    int luckyNumber;
    cin >> luckyNumber;
    bool won = false;
    for (int i = 0; i < 10; i++)
    {
        if (tickets[i] == luckyNumber)
        {
            won = true;
            break;
        }
    }

    if (won)
    {
        cout << "Bạn đã trúng thưởng tuần này" << endl;
    }
    else
    {
        cout << "Bạn đã không trúng thưởng tuần này" << endl;
    }
    
    
    return 0;
}