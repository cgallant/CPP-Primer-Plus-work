/*
 * ex10.cpp
 *
 *  Created on: Jun 14, 2015
 *      Author: Chad

 Write a program using nested loops that asks the user to enter a value for the number of
 rows to display. It should then display that many rows of asterisks, with one asterisk in
 the first row, two in the second row, and so on. For each row, the asterisks are preceded
 by the number of periods needed to make all the rows display a total number of characters
 equal to the number of rows. A sample run would look like this:
 Enter number of rows: 5
 ....*
 ...**
 ..***
 .****
 *****
 */

#include <iostream>

void ex10() {
	using namespace std;
	int rows = 0;

	cout << "Programming exercise 10.\n\n";

	cout << "Enter a value for the number of rows to display: ";
	cin >> rows;

	for (int i = 1; i <= rows; ++i) {
		for (int j = 0; j < rows - i; ++j) {
			cout << ".";
		}
		for (int k = rows - i; k <  rows; ++k) {
			cout << "*";
		}
		cout << endl;
	}
}

