#include <iostream>
using namespace std;

int countEven(int[], int);
void printInReverse(int[], int);
void checkHasTen(int[], int);
bool checkHasEqualNextNumber(int[], int);

int main() {
    cout << "Mời bạn nhập vào số n: ";
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Mời bạn nhập số ở vị trí thứ " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int sum = 0, sumOdd = 0;
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
        if (numbers[i] % 2 == 1)
        {
            sumOdd += numbers[i];
        }
    }
    int sumEven = countEven(numbers, n);
    cout << "Tổng " << n <<  " số vừa nhập là: " << sum << endl;
    cout << "Tổng các số lẻ vừa nhập là: " << sumOdd << endl;
    cout << "Tổng các số chẵn là: " << sumEven << endl;
    
    printInReverse(numbers, n);
    checkHasTen(numbers, n);
    bool hasEqual = checkHasEqualNextNumber(numbers, n);
    cout << (hasEqual ? "Có hai số bằng nhau đứng cạnh nhau." : "Không có hai số bằng nhau đứng cạnh nhau.");
    cout << endl;
    return 0;
}

int countEven(int numbers[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        int currentNum = numbers[i];
        if (currentNum % 2 == 0)
        {
            count += currentNum;
        }
    }
    return count;
}

void printInReverse(int numbers[], int length)
{
    for (int i = length - 1; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }
    
}
void checkHasTen(int numbers[], int length)
{
    bool hasTen = false;
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] % 10 == 0)
        {
            hasTen = true;
            break;
        }
    }
    if (hasTen)
    {
        cout << "Có số 10 trong danh sách này." << endl;
    } else {
        cout << "Không có số 10 trong danh sách này." << endl;
    }
}

bool checkHasEqualNextNumber(int numbers[], int length)
{
    bool hasEqualNextNumber = false;
    for (int i = 0; i < length - 1; i++)
    {
        if (numbers[i] == numbers[i + 1])
        {
            hasEqualNextNumber = true;
            break;
        }
    }
    return hasEqualNextNumber;
    
}