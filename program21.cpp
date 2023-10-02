#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_DIVS = 3;             // Số lượng phòng ban
    const int NUM_QTRS = 4;             // Số lượng quý
    double sales[NUM_DIVS][NUM_QTRS];   // Mảng 3 hàng và 4 cột để lưu trữ doanh số
    double totalSales = 0;              // Biến để lưu trữ tổng doanh số
    int div, qtr;                       // Biến đếm vòng lặp

    cout << "Chương trình này sẽ tính tổng doanh số bán hàng của\n";
    cout << "tất cả các phòng ban trong công ty.\n";
    cout << "Hãy nhập thông tin doanh số bán hàng như sau:\n\n";

    // Vòng lặp lồng nhau để điền mảng với các con số doanh số hàng quý
    for (div = 0; div < NUM_DIVS; div++)
    {
        for (qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            cout << "Phòng ban " << (div + 1);
            cout << ", Quý " << (qtr + 1) << ": $";
            cin >> sales[div][qtr];
        }
        cout << endl; // In dòng trống.
    }

    // Vòng lặp lồng nhau để tính tổng của tất cả các phần tử.
    for (div = 0; div < NUM_DIVS; div++)
    {
        for (qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            totalSales += sales[div][qtr];
        }
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng doanh số bán hàng của công ty là: $";
    cout << totalSales << endl;

    return 0;
}
