#include <iostream>
using namespace std;

const int NUM_EMPLOYEES = 7;

int main() {
    long empId[NUM_EMPLOYEES] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];
    double wages[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter hours worked for employee #" << empId[i] << ": ";
        cin >> hours[i];
        
        while (hours[i] < 0) {
            cout << "Hours worked cannot be negative. Enter hours worked for employee #" << empId[i] << ": ";
            cin >> hours[i];
        }

        cout << "Enter pay rate for employee #" << empId[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 15.0) {
            cout << "Pay rate cannot be less than 15.00. Enter pay rate for employee #" << empId[i] << ": ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }

    cout << "Employee ID\tGross Wages" << endl;
    cout << "---------------------------" << endl;

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << empId[i] << "\t\t" << wages[i] << endl;
    }

    return 0;
}
