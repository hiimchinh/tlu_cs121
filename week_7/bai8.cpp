#include <iostream>
using namespace std;
int linearSearch(int[], int, int);
int binarySearch(int[], int, int);

int main() {
    const int NUM_NUMBERS = 20;
    int numbers[NUM_NUMBERS] = {6, 8, 11, 14, 17, 28, 29, 33, 47, 48, 50, 54, 67, 70, 81, 90, 92, 93, 98, 100};
    int searchQuery = 33;
    int count1 = linearSearch(numbers, NUM_NUMBERS, searchQuery);
    int count2 = binarySearch(numbers, NUM_NUMBERS, searchQuery);
    cout << "Số lần so sánh khi dùng tìm kiếm tuần tự là: " << count1 << " lần." << endl;
    cout << "Số lần so sánh khi dùng tìm kiếm nhị phân là: " << count2 << " lần." << endl;
    return 0;
}

int linearSearch(int numbers[], int size, int searchQuery)
{
    int position = -1;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
        if (searchQuery == numbers[i]) {
            position = i;
            break;
        }
    }
    return count;
    
}

int binarySearch(int numbers[], int size, int searchQuery)
{
    int first = 0,
        last = size - 1,
        middle,
        position = -1;
    bool found = false;
    int count = 0;
    do
    {
        count ++;
        middle = (first + last) / 2;
        if (searchQuery == numbers[middle])
        {
            found = true;
            position = middle;
        } else if (searchQuery > numbers[middle])
        {
            first = middle + 1;
        } else
        {
            last = middle - 1;
        }
    } while (!found && first <= last);
    return count;
}