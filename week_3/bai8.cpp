#include <iostream>
using namespace std;

int main() {
    // luu lai va in ra 2 so ngau nhien
    // hien thi lua chon cho nguoi dung lua chon 4 phep toan cong tru nhan chia thoat
    // lap lai von neu nhap la thoat thi thoat, neu khong dung thi 
    srand(time(NULL));
    int random1 = rand();
    int random2 = rand();
    printf("Số ngẫu nhiên thứ nhất là: %i.\n", random1);
    printf("Số ngẫu nhiên thứ hai là: %i.\n", random2);
    string answer = "";
    do
    {
        cout << "Thực đơn bao gồm (cộng, trừ, nhân, chia, thoat). Chọn một lựa chọn: ";
        cin >> answer;
        if (answer == "cong")
        {
            cout << "Kết quả của phép cộng là: " << random1 + random2 << endl;
        }
        else if (answer == "tru")
        {
            cout << "Kết quả của phép trừ là: " << random1 - random2 << endl;
        }
        else if (answer == "nhan")
        {
            cout << "Kết quả của phép nhân là: " << random1 * random2 << endl;
        }
        else if (answer == "chia")
        {
            cout << "Kết quả của phép chia là: " << random1 / random2 << endl;
        }
        else if (answer == "thoat")
        {
            cout << "Cảm ơn bạn đã dùng chương trình" << endl;
        }
        else
        {
            cout << "Lựa chọn không có trong thực đơn. Mời bạn chọn lại." << endl;
        }
        
    } while (answer != "thoat");
}