#include <iostream>
using namespace std;

const int SIZE = 3;

bool isMagicSquare(int arr[SIZE][SIZE]) {
    // Tính tổng của hàng đầu tiên và sử dụng nó để so sánh với các hàng khác
    int sumRow1 = 0;
    for (int col = 0; col < SIZE; col++) {
        sumRow1 += arr[0][col];
    }

    // Kiểm tra tổng của các hàng
    for (int row = 1; row < SIZE; row++) {
        int sumRow = 0;
        for (int col = 0; col < SIZE; col++) {
            sumRow += arr[row][col];
        }
        if (sumRow != sumRow1) {
            return false;
        }
    }

    // Kiểm tra tổng của các cột
    for (int col = 0; col < SIZE; col++) {
        int sumCol = 0;
        for (int row = 0; row < SIZE; row++) {
            sumCol += arr[row][col];
        }
        if (sumCol != sumRow1) {
            return false;
        }
    }

    // Kiểm tra tổng của đường chéo chính
    int sumDiagonal1 = 0;
    for (int i = 0; i < SIZE; i++) {
        sumDiagonal1 += arr[i][i];
    }
    if (sumDiagonal1 != sumRow1) {
        return false;
    }

    // Kiểm tra tổng của đường chéo phụ
    int sumDiagonal2 = 0;
    for (int i = 0; i < SIZE; i++) {
        sumDiagonal2 += arr[i][SIZE - i - 1];
    }
    if (sumDiagonal2 != sumRow1) {
        return false;
    }

    // Kiểm tra xem mảng có chứa tất cả các số từ 1 đến 9 không
    bool used[9] = {false};
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (arr[row][col] < 1 || arr[row][col] > 9 || used[arr[row][col] - 1]) {
                return false;
            }
            used[arr[row][col] - 1] = true;
        }
    }

    return true;
}

int main() {
    int arr[SIZE][SIZE] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
    
    if (isMagicSquare(arr)) {
        cout << "Mảng này là một Lo Shu Magic Square." << endl;
    } else {
        cout << "Mảng này không phải là một Lo Shu Magic Square." << endl;
    }

    return 0;
}
