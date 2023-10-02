#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    const int NUM_MONKEYS = 3;
    const int NUM_DAYS = 5;

    double food[NUM_MONKEYS][NUM_DAYS];
    double totalFood = 0;
    double minFood = numeric_limits<double>::max(); // Giá trị lớn nhất cho minFood
    double maxFood = numeric_limits<double>::min(); // Giá trị nhỏ nhất cho maxFood

    // Nhập dữ liệu về thức ăn cho từng con khỉ và từng ngày
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            cout << "Nhập số lượng thức ăn cho con khỉ #" << (monkey + 1);
            cout << ", ngày " << (day + 1) << ": ";
            cin >> food[monkey][day];

            // Kiểm tra và cập nhật minFood và maxFood
            if (food[monkey][day] < 0) {
                cout << "Số lượng thức ăn không thể âm. Vui lòng nhập lại: ";
                cin >> food[monkey][day];
            }

            totalFood += food[monkey][day];
            if (food[monkey][day] < minFood) {
                minFood = food[monkey][day];
            }
            if (food[monkey][day] > maxFood) {
                maxFood = food[monkey][day];
            }
        }
    }

    // Tính và hiển thị thông tin
    double averageFood = totalFood / (NUM_MONKEYS * NUM_DAYS);
    cout << fixed << showpoint << setprecision(2);
    cout << "Số lượng thức ăn trung bình mỗi ngày của cả gia đình khỉ: " << averageFood << " pounds." << endl;
    cout << "Số lượng thức ăn ít nhất trong tuần của một con khỉ: " << minFood << " pounds." << endl;
    cout << "Số lượng thức ăn nhiều nhất trong tuần của một con khỉ: " << maxFood << " pounds." << endl;

    return 0;
}
