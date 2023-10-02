#include <iostream>
#include <fstream> // Thêm thư viện fstream

using namespace std;

int main() {
    // Tạo và mở tệp văn bản để ghi dữ liệu
    ofstream outputFile("RainOrShine.txt");

    if (!outputFile) {
        cerr << "Không thể mở tệp để ghi dữ liệu." << endl;
        return 1;
    }

    // Ghi dữ liệu thời tiết vào tệp
    outputFile << "R C S C S R S S C S S S S R S S R C S R S" << endl;
    outputFile << "S S C R R S S R S S R C S S C S S S S R C" << endl;
    outputFile << "S S C S S S S R S S R C S S R S S R S S S" << endl;

    // Đóng tệp sau khi ghi dữ liệu
    outputFile.close();

    cout << "Đã ghi dữ liệu vào tệp RainOrShine.txt." << endl;

    return 0;
}
