#include <iostream>
using namespace std;

int main()
{
    char answers[20] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    char attempts[20];
    int countCorrectAnswers = 0, countWrongAnswers = 0;
    string wrongAttempts;

    for (int i = 0; i < 20; i++)
    {
        char result;
        do
        {
            cout << "Nhập đáp án bạn chọn (A, B, C hoặc D) cho câu " << i + 1 << ": ";
            cin >> result;
        } while (result != 'A' && result != 'B' && result != 'C' && result != 'D');
        attempts[i] = result;
    }

    cout << "Các câu trả lời sai: ";
    for (int i = 0; i < 20; i++)
    {
        if (attempts[i] == answers[i]) {
            countCorrectAnswers++;
        } else {
            countWrongAnswers++;
            cout << " " << i + 1;
        }
    }
    cout << "." << endl;

    if (countCorrectAnswers >= 15) {
        cout << "Bạn đã vượt qua kỳ thi" << endl;
    } else {
        cout << "Bạn đã trượt kỳ thi" << endl;
    }

    cout << "Số câu bạn trả lời đúng là: " << countCorrectAnswers << " câu" << endl;
    cout << "Số câu bạn trả lời sai là: " << countWrongAnswers << " câu" << endl;
    
}