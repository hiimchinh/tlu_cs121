#include <iostream>
using namespace std;

int main() {
    int weight;
    float height;
    cout << "Hãy nhập cân nặng của bạn (kg): ";
    cin >> weight;
    cout << "Hãy nhập chiều cao của bạn (m): ";
    cin >> height;
    float bmi = weight / (height * height);
    if (bmi > 25) {
        cout << "Bạn bị thừa cân.";
    } else if (bmi < 18.5) { 
        cout << "Bạn hơi gầy một tý.";
    } else {
        cout << "Cân nặng của bạn hoàn toàn bình thường. Xin hãy giữ gìn sức khỏe.";
    }
    cout << endl;
}