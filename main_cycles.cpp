// cpp_cycles_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a;
    int product = 1;

    cout << "Enter the value of a (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "Invalid input for a. Exiting program." << endl;
        return 1;
    }

    for (int i = a; i <= 20; i++) {
        product *= i;
    }

    cout << "Product: " << product << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu