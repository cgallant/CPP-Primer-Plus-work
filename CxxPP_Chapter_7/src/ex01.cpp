/*
 * ex01.cpp
 *
 *  Created on: Jun 30, 2015
 *      Author: chad
 Write a program that repeatedly asks the user to enter pairs of numbers until a
 least one of the pair is 0. For each pair, the program should use a function to
 calculate the harmonic mean of the numbers. The function should return the
 answer to main(), which should report the result. The harmonic mean of the
 numbers is the inverse of the aver- age of the inverses and can be calculated
 as follows:
 harmonic mean = 2.0 × x × y / (x + y)
 */

#include <iostream>

void ex01() {
	using namespace std;
	cout << "Programming exercise 1.\n\n";

	double x, y;
	cout << "Enter a pair of numbers (0 to exit): ";
	cin >> x >> y;
	while (x != 0 && y != 0) {
		cout << "Harmonic mean of " << x << " and " << y << " is: "
				<< 2.0 * x * y / (x + y) << endl;
		cout << "Next pair: ";
		cin >> x >> y;
	}
	cout << "End.";
}

