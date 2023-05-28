// cpp_cycles_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
// feature/hm_2/ex_1

#include <iostream>
using namespace std;

bool TwoIdenDig(int num) {
    int digit1 = num % 10;
    int digit2 = (num / 10) % 10;
    int digit3 = num / 100;

    if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
        return true;
    }

    return false;
}

int main()
{
     int count = 0;

    for (int num = 100; num <= 999; num++) {
        if (TwoIdenDig(num)) {
                count++;
        }
    }

    cout << "Number of integers with two identical digits: " << count << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu