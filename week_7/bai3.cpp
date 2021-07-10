#include <iostream>
using namespace std;
int binarySearch(int [], int, int);

int main() {
    int tickets[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    cout << "Mời bạn nhập con số trùng thưởng tuần này: ";
    int luckyNumber;
    cin >> luckyNumber;
    int position = binarySearch(tickets, 10, luckyNumber);
    

    if (position != -1)
    {
        cout << "Bạn đã trúng thưởng tuần này" << endl;
    }
    else
    {
        cout << "Bạn đã không trúng thưởng tuần này" << endl;
    }
    
    
    return 0;
}

int binarySearch(int list[], int size, int searchValue)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (list[middle] == searchValue)
        {
            found = true;
            position = middle;
        } else if (list[middle] > searchValue)
        {
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return position;
    
}