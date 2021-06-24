#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "Nhập phím 1 để đăng ký hoặc phím 2 để đăng nhập: ";
    int num;
    cin >> num;
    if (num == 1) {
        string signupUsername, signupPassword;
        cout << "Bạn hãy nhập username mình muốn đăng ký: ";
        cin >> signupUsername;
        cout << "Bạn hãy nhập password: ";
        cin >> signupPassword;
        ofstream File("Data.txt");
        File << signupUsername << endl << signupPassword;
        cout << "Đăng ký thành công!" << endl;
    } else if (num == 2) {
        string username, password, savedUsername, savedPassword;
        cout << "Bạn hãy nhập username: ";
        cin >> username;
        cout << "Bạn hãy nhập password: ";
        cin >> password;
        ifstream ReadFile("Data.txt");
        ReadFile >> savedUsername;
        ReadFile >> savedPassword;
        if (username == savedUsername && password == savedPassword) {
            cout << "Đăng nhập thành công!";
        } else {
            cout << "Đăng nhập thất bại!";
        }
        cout << endl;
    }
}