#include <iostream>
using namespace std;

// Hàm hiển thị tất cả các số lớn hơn n trong mảng
void displayNumbersGreaterThanN(int arr[], int size, int n) {
    cout << "Các số trong mảng lớn hơn " << n << " là:\n";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 10; // Kích thước của mảng
    int numbers[SIZE];   // Mảng chứa các số nguyên

    // Nhập các số vào mảng
    cout << "Nhập " << SIZE << " số nguyên:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Số thứ " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int n; // Số n để so sánh
    cout << "Nhập số nguyên n: ";
    cin >> n;

    // Gọi hàm để hiển thị các số lớn hơn n trong mảng
    displayNumbersGreaterThanN(numbers, SIZE, n);

    return 0;
}
