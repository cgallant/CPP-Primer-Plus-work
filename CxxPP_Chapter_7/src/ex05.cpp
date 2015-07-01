/*
 * ex05.cpp
 *
 *  Created on: Jul 1, 2015
 *      Author: chad
 Define a recursive function that takes an integer argument and returns the factorial of
 that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
 defined as 1. In general, if n is greater than zero, n! = n * (n – 1)!. Test your function in a
 program that uses a loop to allow the user to enter various values for which the program
 reports the factorial. */

#include <iostream>
unsigned long factorial(int);

void ex05() {
	using namespace std;
	cout << "\nProgramming exercise 5.\n\n";
	cout << "Enter a number: ";
	int num;
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;
}

unsigned long factorial(int n) {
	using namespace std;
	unsigned long f = 1;
	if (n > 0) {
		f = n * factorial(n - 1);
	}
	return f;
}

