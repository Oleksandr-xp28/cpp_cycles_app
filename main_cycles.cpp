// cpp_cycles_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int option;

	cout << "Enter an option: ";
	cin >> option;

	cout << "Multiplication table for " << option << ":" << endl;

	for (int i = 2; i <= 10; i++) {
		int result = option * i;
		cout << option << " x " << i << " = " << result << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu