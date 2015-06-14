/*
 * ex09.cpp
 *
 *  Created on: Jun 14, 2015
 *      Author: Chad
 Write a program that matches the description of the program in Programming Exercise
 8, but use a string class object instead of an array. Include the string header file and
 use a relational operator to make the comparison test.
 */

#include <iostream>
#include <string>

void ex09() {
	using namespace std;

	cout << "Programming exercise 9.\n\n";
	string word;
	int sum = 0;

	cout << "Enter words (to stop, type the word done): ";
	cin >> word;

	while (word != "done") {
		cout << word << endl;
		cin >> word;
		sum += 1;
	}
	cout << "You entered a total of " << sum << " words.";
}

