/*
 * ex02.cpp
 *
 *  Created on: Jun 23, 2015
 *      Author: Chad
 Write a program that reads up to 10 donation values into an array of double. The program
 should terminate input on non-numeric input. It should report the average of the
 numbers and also report how many numbers in the array are larger than the average.
 */

#include <iostream>
#include <cctype>

void ex02() {
	using namespace std;
	cin.get();
	cout << "Programming exercise 2.\n\n";
	cout << "Input up to 10 numbers (hit enter when done.\n";
	const int Max = 10;
	double d_val[Max] = { }, sum = 0.0;
	int entries = 0;
	for (int i = 0; i < 10; ++i) {
		if ((cin >> d_val[i]) == 0)
			break;
		++entries;
		sum += d_val[i];
	}
	int n = 0;
	double av = sum / double(entries);
	for (int i = 0; i < 10; ++i) {
		if (d_val[i] > av)
			++n;
	}
	cout << endl << "Average: " << av << endl
			<< "Number of entries greater than average: " << n << endl;
}

