#include <iostream>
#include <string>
using namespace std;
void selectionSort(string[], int);
void displayNames(string[], int);

int main()
{
const int NUM_NAMES = 20;
string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
"Griffin, Jim", "Stamey, Marty", "Rose, Geri","Taylor, Terri", "Johnson, Jill",
"Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", 
"Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
"Pike, Gordon", "Holland, Beth" };
selectionSort(names, NUM_NAMES);
displayNames(names, NUM_NAMES);

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
        string tmp = names[i];
        names[i] = names[minIndex];
        names[minIndex] = tmp;
    }
    
}

void displayNames(string names[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << endl;
    }
    
}