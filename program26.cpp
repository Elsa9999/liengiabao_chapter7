// This program demonstrates the range-based for loop with a vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Define a vector with space for 5 integers.
    vector<int> numbers(5);

    // Get values for the vector elements from the user.
    for (int &val : numbers)
    {
        cout << "Enter an integer value: ";
        cin >> val;
    }

    // Display the vector elements.
    cout << "Here are the values you entered:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}