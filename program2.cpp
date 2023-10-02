// Chương trình này yêu cầu người dùng nhập số giờ làm việc
// của sáu nhân viên và lưu giá trị vào một mảng.
#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6; // Số lượng nhân viên
    int hours[NUM_EMPLOYEES];    // Số giờ làm việc của từng nhân viên
    int count;                   // Biến đếm vòng lặp

    // Nhập số giờ làm việc.
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Nhập số giờ làm việc của nhân viên thứ "
             << (count + 1) << ": ";
        cin >> hours[count];
    }

    // Hiển thị nội dung của mảng.
    cout << "Các giờ bạn đã nhập là:";
    for (count = 0; count < NUM_EMPLOYEES; count++)
        cout << " " << hours[count];
    cout << endl;
    return 0;
}
