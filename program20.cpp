#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4; // Kích thước mảng
    double testScores[SIZE], // Mảng chứa điểm kiểm tra
        total, // Tổng của các điểm
        lowestScore, // Điểm thấp nhất
        average; // Điểm trung bình

    // Cài đặt định dạng đầu ra số học.
    cout << fixed << showpoint << setprecision(1);

    // Nhập điểm kiểm tra từ người dùng.
    getTestScores(testScores, SIZE);

    // Tính tổng của các điểm kiểm tra.
    total = getTotal(testScores, SIZE);

    // Tìm điểm kiểm tra thấp nhất.
    lowestScore = getLowest(testScores, SIZE);

    // Trừ điểm thấp nhất khỏi tổng.
    total -= lowestScore;

    // Tính điểm trung bình. Chia cho (SIZE - 1) vì điểm thấp nhất đã bị loại bỏ.
    average = total / (SIZE - 1);

    // Hiển thị điểm trung bình.
    cout << "The average with the lowest score dropped is " << average << ".\n";

    return 0;
}

// Hàm lấy điểm kiểm tra từ người dùng.
void getTestScores(double scores[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << "Enter test score number " << (index + 1) << ": ";
        cin >> scores[index];
    }
}

// Hàm tính tổng của mảng.
double getTotal(const double numbers[], int size)
{
    double total = 0;
    for (int count = 0; count < size; count++)
    {
        total += numbers[count];
    }
    return total;
}

// Hàm tìm điểm thấp nhất trong mảng.
double getLowest(const double numbers[], int size)
{
    double lowest = numbers[0];
    for (int count = 1; count < size; count++)
    {
        if (numbers[count] < lowest)
        {
            lowest = numbers[count];
        }
    }
    return lowest;
}
