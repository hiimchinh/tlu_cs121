#include <iostream>
using namespace std;

int main() {
    cout << "Hãy nhập cân nặng của vật (kg): ";
    int weight;
    cin >> weight;
    float gravity = weight * 9.8;
    if (gravity > 100) {
        cout << "Vật quá nặng.";
    } else if (gravity < 10) {
        cout << "Vật quá nhẹ.";
    }
    cout << endl;
}