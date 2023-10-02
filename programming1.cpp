#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int values[SIZE];

    // Yêu cầu người dùng nhập 10 giá trị
    cout << "Nhập 10 giá trị nguyên, mỗi giá trị một lần:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Giá trị thứ " << (i + 1) << ": ";
        cin >> values[i];
    }

    // Khởi tạo biến để theo dõi giá trị lớn nhất và nhỏ nhất
    int lon_nhat = values[0];
    int nho_nhat = values[0];

    // Tìm giá trị lớn nhất và nhỏ nhất trong mảng
    for (int i = 1; i < SIZE; i++) {
        if (values[i] > lon_nhat) {
            lon_nhat = values[i];
        }
        if (values[i] < nho_nhat) {
            nho_nhat = values[i];
        }
    }

    // Hiển thị giá trị lớn nhất và nhỏ nhất
    cout << "Giá trị lớn nhất là: " << lon_nhat << endl;
    cout << "Giá trị nhỏ nhất là: " << nho_nhat << endl;

    return 0;
}
