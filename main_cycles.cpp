// cpp_cycles_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; i++) {
        sum += i;
        count++;
    }

    double mean = (sum) / count;

    std::cout << "Arithmetic Mean: " << mean << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu