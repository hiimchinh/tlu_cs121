#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <fstream>
#include <chrono>


using namespace std;
void selectionSort(int[], int);
int linearSearch(int[], int, int);
int binarySearch(int[], int, int);
const int SIZE = 10000;

int main() {
    ofstream randomFile("random.txt");
    srand (time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        randomFile << rand() % 1000000000 << endl;
    }
    
    ifstream readFile("random.txt");
    int numbers[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        readFile >> numbers[i];
    }
    int searchNum = numbers[9000];
    selectionSort(numbers, SIZE);
    int positionLinearSearch = linearSearch(numbers, SIZE, searchNum);
    int positionBinarySearch = binarySearch(numbers, SIZE, searchNum);
    return 0;
}

void selectionSort(int numbers[], int length)
{
    int minValue, minIndex;
    for (int i = 0; i < length - 1; i++)
    {
        minValue = numbers[i];
        minIndex = i;
        for (int j = i + 1; j < length; j++)
        {
            if (numbers[j] < minValue)
            {
                minIndex = j;
                minValue = numbers[j];
            }
        }
        if (minIndex != i)
        {
            numbers[minIndex] = numbers[i];
            numbers[i] = minValue;
        }
    }
}

int linearSearch(int numbers[], int size, int searchQuery)
{
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for (int i = 0; i < size; i++)
    {
        if (searchQuery == numbers[i])
        {
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "Sắp xếp tuần tự hết: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[nano giây]" << std::endl;
            return i;
        }
    }
    return -1;
}

int binarySearch(int numbers[], int size, int searchQuery)
{
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    int first = 0,
        last = size - 1,
        middle;
    bool found;
    do
    {
        found = false;
        middle = (first + last) / 2;
        if (numbers[middle] == searchQuery)
        {
            std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
            std::cout << "Sắp xếp nhị phân hết: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() << "[nano giây]" << std::endl;
            return middle;
        } else if (numbers[middle] > searchQuery)
        {
            last = middle - 1;
        } else 
        {
            first = middle + 1;
        }
    } while (!found && first <= last);
    return -1;
}