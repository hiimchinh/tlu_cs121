#include <iostream>
using namespace std;
const int SIZE = 3;
int sumTotal(int[SIZE][SIZE]);
int countNumBiggerThanFive(int[SIZE][SIZE]);
void printMultiplyRow(int[SIZE][SIZE]);
void printSumColumn(int[SIZE][SIZE]);
int sumDiagonalLeft(int[SIZE][SIZE]);
int sumDiagonalRight(int[SIZE][SIZE]);
bool checkRowHasEqualNumber(int[SIZE][SIZE], int);
bool checkAllDiff(int[SIZE][SIZE]);

int main() {
    int matrix[SIZE][SIZE];
    for (int column = 0; column < SIZE; column++)
    {
        int currentColumn = column + 1;
        for (int row = 0; row < SIZE; row++)
        {
            int currentRow = row + 1;
            cout << "Nhập vào giá trị ma trận tại cột " << currentColumn;
            cout << " dòng " << currentRow << ": ";
            cin >> matrix[column][row];
        }
    }
    int sum = sumTotal(matrix);
    cout << "Tổng các phần tử trong ma trận là: " << sum << endl;
    int countNum = countNumBiggerThanFive(matrix);
    cout << "Tổng các phần tử trong ma trận lớn hơn 5 là: " << countNum << " phần tử." << endl;
    printMultiplyRow(matrix);
    printSumColumn(matrix);
    int sumLeftDiagonal = sumDiagonalLeft(matrix);
    cout << "Tổng các phần tử nằm trên đường chéo trái là: " << sumLeftDiagonal << endl;
    int sumRightDiagonal = sumDiagonalRight(matrix);
    cout << "Tổng các phần tử trên đường chéo phải là: " << sumRightDiagonal << endl;
    cout << "Nhập dòng bạn muốn kiểm tra có 2 số bằng nhau hay không: ";
    int rowWantToCheck;
    cin >> rowWantToCheck;
    bool rowHasEqual = checkRowHasEqualNumber(matrix, rowWantToCheck + 1);
    if (rowHasEqual)
    {
        cout << "Dòng " << rowWantToCheck << " có 2 số bằng nhau.";
    } else 
    {
        cout << "Dòng " << rowWantToCheck << " không có 2 số bằng nhau.";
    }
    cout << endl;
    bool allDiff = checkAllDiff(matrix);
    if (allDiff)
    {
        cout << "Tất cả giá trị không giống nhau" << endl;
    } else
    {
        cout << "Có giá trị giống nhau trong ma trận" << endl;
    }
    return 0;
}

int sumTotal(int matrix[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int countNumBiggerThanFive(int matrix[SIZE][SIZE])
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (matrix[i][j] >= 5)
            {
                count++;
            }
        }
        
    }
    return count;
    
}

void printMultiplyRow(int matrix[SIZE][SIZE])
{
    int multiplyRow1 = 1,
        multiplyRow2 = 1,
        multiplyRow3 = 1;
    for (int column = 0; column < SIZE; column++)
    {
        for (int row = 0; row < SIZE; row++)
        {
            if (row == 0)
            {
                multiplyRow1 *= matrix[column][row];
            } else if (row == 1)
            {
                multiplyRow2 *= matrix[column][row];
            } else
            {
                multiplyRow3 *= matrix[column][row];
            }
        }
    }
    cout << "Tích của dòng 1 là " << multiplyRow1 << endl;
    cout << "Tích của dòng 2 là " << multiplyRow2 << endl;
    cout << "Tích của dòng 3 là " << multiplyRow3 << endl;
    
}

void printSumColumn(int matrix[SIZE][SIZE])
{
    int sumCol1 = 0, sumCol2 = 0, sumCol3 = 0;
    for (int col = 0; col < SIZE; col++)
    {
        for (int row = 0; row < SIZE; row++)
        {
            int currentValue = matrix[col][row];
            if (col == 0)
            {
                sumCol1 += currentValue;
            } else if (col == 1)
            {
                sumCol2 += currentValue;
            } else
            {
                sumCol3 += currentValue;
            }
        }
    }

    cout << "Tổng giá trị cột 1 là " << sumCol1 << endl;
    cout << "Tổng giá trị cột 2 là " << sumCol2 << endl;
    cout << "Tổng giá trị cột 3 là " << sumCol3 << endl;
    
}

int sumDiagonalLeft(int matrix[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
        
    }
    return sum;
    
}

int sumDiagonalRight(int matrix[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (i + j == 2)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

bool checkRowHasEqualNumber(int matrix[SIZE][SIZE], int row)
{
    bool hasEqual = false;
    for (int column = 0; column < SIZE - 1; column++)
    {
        if (matrix[column][row] == matrix[column + 1][row])
        {
            hasEqual = true;
            break;
        }
    }
    return hasEqual;
    
}

bool checkAllDiff(int matrix[SIZE][SIZE])
{
    for (int col = 0; col < SIZE; col++)
    {
        for (int row = 0; row < SIZE; row++)
        {
            int currentValue = matrix[col][row];
            for (int otherCol = col; otherCol < SIZE; otherCol++)
            {
                for (int otherRow = row; otherRow < SIZE; otherRow++)
                {
                     int otherValue = matrix[otherCol][otherRow];
                     if (col != otherCol || row != otherRow)
                     {
                         if (otherValue == currentValue)
                         {
                             return false;
                         }
                     }
                }
                
                
            }
            
        }
        
    }
    return true;
}