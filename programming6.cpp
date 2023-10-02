#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    const int NUM_MONTHS = 3;
    const int NUM_DAYS = 30;
    char weatherData[NUM_MONTHS][NUM_DAYS];

    // Đọc dữ liệu thời tiết từ tệp RainOrShine.txt
    ifstream inputFile("RainOrShine.txt");
    if (!inputFile) {
        cerr << "Không thể mở tệp dữ liệu." << endl;
        return 1;
    }

    for (int month = 0; month < NUM_MONTHS; month++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            inputFile >> weatherData[month][day];
        }
    }

    // Tên các tháng
    string months[NUM_MONTHS] = { "June", "July", "August" };

    // Số ngày mưa, mây và nắng của từng tháng
    int rainyDays[NUM_MONTHS] = { 0 };
    int cloudyDays[NUM_MONTHS] = { 0 };
    int sunnyDays[NUM_MONTHS] = { 0 };

    // Tổng số ngày mưa của từng tháng và tháng có nhiều ngày mưa nhất
    int maxRainyMonthIndex = 0;
    int maxRainyDays = 0;

    // Xử lý dữ liệu thời tiết
    for (int month = 0; month < NUM_MONTHS; month++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            switch (weatherData[month][day]) {
                case 'R':
                    rainyDays[month]++;
                    break;
                case 'C':
                    cloudyDays[month]++;
                    break;
                case 'S':
                    sunnyDays[month]++;
                    break;
            }
        }
        
        // Tìm tháng có nhiều ngày mưa nhất
        if (rainyDays[month] > maxRainyDays) {
            maxRainyDays = rainyDays[month];
            maxRainyMonthIndex = month;
        }
    }

    // Hiển thị báo cáo thời tiết
    for (int month = 0; month < NUM_MONTHS; month++) {
        cout << "Tháng " << months[month] << " có:" << endl;
        cout << " - " << rainyDays[month] << " ngày mưa" << endl;
        cout << " - " << cloudyDays[month] << " ngày mây" << endl;
        cout << " - " << sunnyDays[month] << " ngày nắng" << endl;
    }

    cout << "Tháng có nhiều ngày mưa nhất: " << months[maxRainyMonthIndex] << " với " << maxRainyDays << " ngày mưa." << endl;

    return 0;
}
