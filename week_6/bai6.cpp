#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("../FileData/RainOrShine.txt");
    int weatherCountEachMonth[3][3];
    int monthNames[3] = {6, 7, 8};
    int totalRainDay = 0, totalCloudyDay = 0, totalSunnyDay = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            char weather;
            inputFile >> weather;
            if (weather == 'R')
            {
                weatherCountEachMonth[i][0]++;
            } else if (weather == 'C')
            {
                weatherCountEachMonth[i][1]++;
            } else if (weather == 'S') {
                weatherCountEachMonth[i][2]++;
            }
        }
        
    }
    int maxRainMonth = 0;
    for (int i = 0; i < 3; i++)
    {
        if (weatherCountEachMonth[i][0] > weatherCountEachMonth[maxRainMonth][0]) {
            maxRainMonth = i;
        }
        totalRainDay += weatherCountEachMonth[i][0];
        totalCloudyDay += weatherCountEachMonth[i][1];
        totalSunnyDay += weatherCountEachMonth[i][2];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Số ngày mưa cho tháng " << monthNames[i] << " là: " << weatherCountEachMonth[i][0] << endl;
        cout << "Số ngày mây cho tháng " << monthNames[i] << " là: " << weatherCountEachMonth[i][1] << endl;
        cout << "Số ngày nắng cho tháng " << monthNames[i] << " là: " << weatherCountEachMonth[i][2] << endl;
    }

    cout << "Số ngày mưa cho cả 3 tháng là: " << totalRainDay << endl;
    cout << "Số ngày mây cho cả 3 tháng là: " << totalCloudyDay << endl;
    cout << "Số ngày nắng cho cả 3 tháng là: " << totalSunnyDay << endl;
    
    cout << "Tháng có số ngày mưa nhiều nhất là tháng " << monthNames[maxRainMonth];
    cout << " với " << weatherCountEachMonth[maxRainMonth][0] <<  " ngày mưa." << endl;
    
    
    
}