#include <iostream>
using namespace std;

int main() {
    const int NUM_MONTHS = 12;
    double rainfall[NUM_MONTHS];

    // Yêu cầu người dùng nhập lượng mưa cho từng tháng
    for (int i = 0; i < NUM_MONTHS; i++) {
        do {
            cout << "Nhập lượng mưa cho tháng " << (i + 1) << " (không âm): ";
            cin >> rainfall[i];
            if (rainfall[i] < 0) {
                cout << "Lượng mưa không thể là số âm. Vui lòng nhập lại.\n";
            }
        } while (rainfall[i] < 0);
    }

    // Tính tổng lượng mưa trong năm
    double totalRainfall = 0;
    for (int i = 0; i < NUM_MONTHS; i++) {
        totalRainfall += rainfall[i];
    }

    // Tính lượng mưa trung bình hàng tháng
    double averageRainfall = totalRainfall / NUM_MONTHS;

    // Tìm tháng có lượng mưa cao nhất và thấp nhất
    double maxRainfall = rainfall[0];
    double minRainfall = rainfall[0];
    int maxMonth = 0, minMonth = 0;
    for (int i = 1; i < NUM_MONTHS; i++) {
        if (rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            maxMonth = i;
        }
        if (rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            minMonth = i;
        }
    }

    // Hiển thị thống kê
    cout << "\nTổng lượng mưa trong năm: " << totalRainfall << " inches." << endl;
    cout << "Lượng mưa trung bình hàng tháng: " << averageRainfall << " inches." << endl;
    cout << "Tháng có lượng mưa cao nhất: Tháng " << (maxMonth + 1) << " (" << maxRainfall << " inches)." << endl;
    cout << "Tháng có lượng mưa thấp nhất: Tháng " << (minMonth + 1) << " (" << minRainfall << " inches)." << endl;

    return 0;
}
