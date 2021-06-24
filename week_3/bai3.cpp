#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float currentWater = 0;
    cout << "| Water level |" << endl;
    for (int i = 0; i < 25; i++)
    {
        currentWater += 1.5;
        cout << "|" << setw(12) << currentWater << " |" << endl;
        
    }
    
}