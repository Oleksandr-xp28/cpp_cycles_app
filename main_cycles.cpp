// cpp_cycles_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	long long result = 1; 

	cout << "Enter the base number (x): ";
	cin >> x;

	cout << "Enter the exponent (y): ";
	cin >> y;

	for (int i = 0; i < y; ++i) {
		result *= x;
	}

	cout << x << " raised to the power of " << y << " is: " << result << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu