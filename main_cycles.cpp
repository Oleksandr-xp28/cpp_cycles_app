// cpp_cycles_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a;
	int sum = 0;

	std::cout << "Enter a number (a): ";
	std::cin >> a;

	for (int i = a; i <= 500; i++) {
		sum += i;
	}

	cout << "Sum of numbers from " << a << " to 500: " << sum << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu