#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 127; i++)
    {
        if (i != 0 && i % 16 == 0) {
            cout << endl;
        }
        cout << (char) i;
    }
    cout << endl;
    
}