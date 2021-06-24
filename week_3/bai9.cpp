#include <iostream>
using namespace std;

int main() {
    int totalFloors, totalRooms, totalUsedRooms;
    while (true)
    {
        cout << "Khách sạn này có bao nhiêu tầng: ";
        bool isValid = true;
        cin >> totalFloors;
        if (totalFloors < 1)
        {
            isValid = false;
            cout << "Số tầng không được nhỏ hơn 1." << endl;
            continue;
        }
        for (int i = 0; i < totalFloors; i++)
        {
            int currentFloorNumber = i + 1;
            if (currentFloorNumber == 13) {
                continue;
            }
            int totalRoomCurrentFloor = 0;
            int totalRoomUsedCurrentFloor = 0;
            while (true)
            {
                printf("Nhập số phòng ở tầng %i: ", currentFloorNumber);
                cin >> totalRoomCurrentFloor;
                if (totalRoomCurrentFloor < 10) {
                    cout << "Số phòng ở mỗi tầng không được ít hơn 10." << endl;
                    continue;
                }
                totalRooms += totalRoomCurrentFloor;
                break;
            }
            while (true)
            {
                printf("Nhập số phòng được sử dụng ở tầng %i: ", currentFloorNumber);
                cin >> totalRoomUsedCurrentFloor;
                if (totalRoomUsedCurrentFloor < 1 || totalRoomUsedCurrentFloor > totalRoomCurrentFloor) {
                    cout << "Số phòng được sử dụng không được nhỏ hơn 1 hoặc lớn hơn số phòng ở tầng đó." << endl;
                    continue;
                }
                totalUsedRooms += totalRoomUsedCurrentFloor;
                break;
            }
        }
        break;
    }
    printf("Khách sạn có tổng cộng %i phòng, trong đó có %i đang được sử dụng. Tỷ lệ phòng có người là %.2f%%.\n",
        totalRooms,
        totalUsedRooms,
        totalUsedRooms * 100 / (float) totalRooms
    );
}