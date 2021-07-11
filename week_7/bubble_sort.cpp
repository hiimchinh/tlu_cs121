#include <iostream>
using namespace std;
void bubbleSort(int[], int);

int main() {
    int list[5] = {1,3,2,5,4};
    bubbleSort(list, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << list[i] << endl;
    }
    
    return 0;
}

void bubbleSort(int list[], int size)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (list[i + 1] > list[i])
            {
                swapped = true;
                int tempValue = list[i + 1];
                list[i + 1] = list[i];
                list[i] = tempValue;
            }
        }
        
    } while (swapped);
    
}