/*
 * ex03.cpp
 *
 *  Created on: Jun 13, 2015
 *      Author: Chad
 Write a program that asks the user to type in numbers. After each entry, the program
 should report the cumulative sum of the entries to date. The program should terminate
 when the user enters 0.*/
#include <iostream>

void ex03() {
	using namespace std;
	cout << "Programming exercise 3.\n\n";
	int i, sum = 0;
	cout << "Type in numbers to sum. (Type '0' to exit.)\n\n";
	do {
		cin >> i;
		sum += i;
		cout << sum << endl;
	} while (i != 0);
}

