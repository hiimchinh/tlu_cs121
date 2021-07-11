#include <iostream>
using namespace std;
int binarySearch(string[], int, string);
void selectionSort(string[], int);
void displayNames(string[], int);

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Adam", "Eve", "James", "Dave", "Others"};
    selectionSort(names, NUM_NAMES);
    cout << "Mời bạn nhập tên muốn tìm kiếm: ";
    string nameQuery;
    cin >> nameQuery;
    int position = binarySearch(names, NUM_NAMES, nameQuery);
    if (position == -1)
    {
        cout << "Không tìm thấy tên bạn muốn tìm." << endl;
    } else
    {
        cout << "Tìm thấy tên bạn muốn tìm" << endl;
    }
    return 0;
}

void selectionSort(string names[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        string minValue = names[i];
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (names[j] < minValue)
            {
                minIndex = j;
                minValue = names[j];
            }
        }
        if (minIndex != i)
        {
            string tmp = names[i];
            names[i] = minValue;
            names[minIndex] = tmp;
        }
    }
    
}

int binarySearch(string names[], int size, string nameQuery)
{
    int firstIndex = 0,
        lastIndex = size - 1,
        middleIndex,
        position = -1;
    bool found = false;
    do
    {
        middleIndex = (firstIndex + lastIndex) / 2;
        if (nameQuery == names[middleIndex])
        {
            position = middleIndex;
            found = true;
        } else if (nameQuery > names[middleIndex])
        {
            firstIndex = middleIndex + 1;
        } else {
            lastIndex = middleIndex - 1;
        }
    } while (!found && firstIndex <= lastIndex);
    return position;
}