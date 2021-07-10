#include <iostream>
using namespace std;
int binarySearch(int[], int, int);
void selectionSort(int[], int);

int main() {
    int accounts[] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002
    };
    selectionSort(accounts, 18);
    cout << "Mời bạn nhập tài khoản tính phí: ";
    int inputAccount;
    cin >> inputAccount;

    int position = binarySearch(accounts, 18, inputAccount);
    if (position != -1)
    {
        cout << "Số tài khoản hợp lệ." << endl;
    } else
    {
        cout << "Số tài khoản đó không hợp lệ." << endl;
    }
    return 0;
}

void selectionSort(int list[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i,
            minValue = list[i];
        for (int j = i + 1; j < size; j++)
        {
            if (list[j] < minValue)
            {
                minIndex = j;
                minValue = list[j];
            }
        }
        int temp = list[i];
        list[i] = minValue;
        list[minIndex] = temp;
    }
    
}

int binarySearch(int list[], int size, int searchQuery)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first  + last) / 2;
        if (searchQuery == list[middle])
        {
            found = true;
            position = middle;
        } else if (searchQuery < list[middle])
        {
            last = middle - 1;
        } else 
        {
            first = middle + 1;
        }
    }
    return position;
    
}