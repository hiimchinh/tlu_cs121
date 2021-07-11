#include <iostream>
using namespace std;
int bubbleSort(int[], int);
int selectionSort(int[], int);

int main() {
    const int NUM_NUMBERS = 20;
    int numbers1[NUM_NUMBERS] = {49, 72, 96, 74, 22, 48, 70, 3, 17, 67, 18, 7, 83, 33, 44, 42, 12, 82, 81, 40};
    int numbers2[NUM_NUMBERS] = {49, 72, 96, 74, 22, 48, 70, 3, 17, 67, 18, 7, 83, 33, 44, 42, 12, 82, 81, 40};
    
    int countBubbleSort = bubbleSort(numbers1, NUM_NUMBERS);
    int countSelectionSort = selectionSort(numbers2, NUM_NUMBERS);
    cout << "Số lần đổi số của thuật toán sắp xếp nổi bọt là " << countBubbleSort << " lần." << endl;
    cout << "Số lần đổi số của thuật toán sắp xếp lựa chọn là " << countSelectionSort << " lần." << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << numbers2[i] << endl;
    }
    
    return 0;
}

int bubbleSort(int numbers[], int size)
{
    bool swapped;
    int count  = 0;
    do
    {
        swapped = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (numbers[i + 1] < numbers[i])
            {
                count + 1;
                int tmp = numbers[i + 1];
                numbers[i + 1] = numbers[i];
                numbers[i] = tmp;
            }
        }
        
    } while (swapped);
    
}

int selectionSort(int numbers[], int size)
{
    int count = 0;
    int minValue;
    int minIndex;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        minValue = numbers[i];
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[j] < minValue)
            {
                minIndex = j;
                minValue = numbers[j];
            }
        }
        if (minIndex != i) {
            count++;
            numbers[minIndex] = numbers[i];
            numbers[i] = minValue;
        }
    }
    
    return count;
}