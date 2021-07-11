#include <iostream>
using namespace std;
void displayMonths(int[], int);
void getRainAmount(double[], int);
void sortMonthsByRainAmount(double[], int[], int);


int main() {
    int numberOfMonths = 3;
    double rainAmounts[numberOfMonths];
    getRainAmount(rainAmounts, numberOfMonths);
    int sortedMonths[numberOfMonths];
    for (int i = 0; i < numberOfMonths; i++)
    {
        sortedMonths[i] = i;
    }
    sortMonthsByRainAmount(rainAmounts, sortedMonths, numberOfMonths);
    displayMonths(sortedMonths, numberOfMonths);
    return 0;
}

void getRainAmount(double amounts[], int size)
{
    for (int i = 0; i < size; i++)
    {
        double rainAmount;
        do
        {
            printf("Nhập vào lượng mưa tháng %i: ", i + 1);
            cin >> rainAmount;
        } while (rainAmount < 0);
        amounts[i] = rainAmount;
    }
    
}

void sortMonthsByRainAmount(double amounts[], int months[], int size)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (amounts[i + 1] > amounts[i])
            {
                swapped = true;
                int tempValue = amounts[i + 1];
                amounts[i + 1] = amounts[i];
                amounts[i] = tempValue;
            }
        }
        
    } while (swapped);   
}

void displayMonths(int months[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Tháng có lượng mưa lớn thứ " << i + 1 << " là tháng " << months[i] + 1 << endl;
    }
    
}