#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib> // Thêm thư viện này để sử dụng hàm atoi

using namespace std;

int main() {
    string fileName;
    cout << "Nhập tên tệp chứa dãy số: ";
    cin >> fileName;

    ifstream inputFile(fileName); // Mở tệp đầu vào
    if (!inputFile) {
        cerr << "Không thể mở tệp." << endl;
        return 1;
    }

    vector<int> numbers;
    int number;

    // Đọc dữ liệu từ tệp vào vector
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    inputFile.close(); // Đóng tệp

    if (numbers.empty()) {
        cerr << "Tệp rỗng." << endl;
        return 1;
    }

    int minNumber = numbers[0];
    int maxNumber = numbers[0];
    int total = 0;

    // Tính giá trị nhỏ nhất, lớn nhất và tổng
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
        total += numbers[i];
    }

    double average = static_cast<double>(total) / numbers.size();

    // Hiển thị kết quả
    cout << "Giá trị nhỏ nhất: " << minNumber << endl;
    cout << "Giá trị lớn nhất: " << maxNumber << endl;
    cout << "Tổng các số: " << total << endl;
    cout << "Trung bình: " << average << endl;

    return 0;
}
