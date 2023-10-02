#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_TYPES = 5;
    string salsaNames[NUM_TYPES] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_TYPES];

    // Nhập số lượng hủ salsa bán được cho từng loại
    for (int i = 0; i < NUM_TYPES; i++) {
        do {
            cout << "Nhập số lượng hủ " << salsaNames[i] << " bán được trong tháng qua (không âm): ";
            cin >> jarsSold[i];
            if (jarsSold[i] < 0) {
                cout << "Số lượng không thể là số âm. Vui lòng nhập lại.\n";
            }
        } while (jarsSold[i] < 0);
    }

    // Tìm sản phẩm bán chạy nhất và sản phẩm bán ít nhất
    int totalSales = 0;
    int maxSales = jarsSold[0];
    int minSales = jarsSold[0];
    string bestSelling = salsaNames[0];
    string worstSelling = salsaNames[0];

    for (int i = 0; i < NUM_TYPES; i++) {
        totalSales += jarsSold[i];
        if (jarsSold[i] > maxSales) {
            maxSales = jarsSold[i];
            bestSelling = salsaNames[i];
        }
        if (jarsSold[i] < minSales) {
            minSales = jarsSold[i];
            worstSelling = salsaNames[i];
        }
    }

    // Hiển thị báo cáo
    cout << "\nBáo cáo doanh số bán hàng cho các loại salsa:\n";
    for (int i = 0; i < NUM_TYPES; i++) {
        cout << salsaNames[i] << ": " << jarsSold[i] << " hủ\n";
    }
    cout << "Tổng doanh số bán hàng: " << totalSales << " hủ\n";
    cout << "Sản phẩm bán chạy nhất: " << bestSelling << "\n";
    cout << "Sản phẩm bán ít nhất: " << worstSelling << "\n";

    return 0;
}
