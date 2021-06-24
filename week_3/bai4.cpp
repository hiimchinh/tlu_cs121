#include <iostream>
using namespace std;

int main() {
    float caloriesBurnPerMinutes = 3.6;
    for (int i = 5; i <= 30; i += 5)
    {
        float caloriesBurn = i * caloriesBurnPerMinutes;
        cout << "Số calories được đốt cháy sau " << i << "phút là: " << caloriesBurn << " calories." << endl ;
    }
    
}