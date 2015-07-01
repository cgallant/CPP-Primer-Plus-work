/*
 * ex10.cpp
 *
 *  Created on: Jul 1, 2015
 *      Author: chad
 Design a function calculate() that takes two type double values and a pointer to a
 function that takes two double arguments and returns a double. The calculate() function
 should also be type double, and it should return the value that the pointed-to function
 calculates, using the double arguments to calculate(). For example, suppose you
 have this definition for the add() function:
 double add(double x, double y)
 {
 return x + y;
 }
 Then, the function call in
 double q = calculate(2.5, 10.4, add);
 would cause calculate() to pass the values 2.5 and 10.4 to the add() function and
 then return the add() return value (12.9).
 Use these functions and at least one additional function in the add() mold in a program.
 The program should use a loop that allows the user to enter pairs of numbers. For each
 pair, use calculate() to invoke add() and at least one other function. If you are feeling
 adventurous, try creating an array of pointers to add()-style functions and use a loop to
 successively apply calculate() to a series of functions by using these pointers. Hint:
 Here¡¯s how to declare such an array of three pointers:
 double (*pf[3])(double, double);
 You can initialize such an array by using the usual array initialization syntax and function
 names as addresses.
 */
#include <iostream>
double calculate(double, double, double (*)(double, double));
double add(double, double);
double multiply(double, double);

void ex10() {
	using namespace std;
	cout << "Programming exercise 10.\n\n";
	double n1, n2;
	cout << "Enter a pair of numbers (non-number to quit): ";
	while (cin >> n1 >> n2) {
		cout << "Sum: " << calculate(n1, n2, add) << endl;
		cout << "Factor: " << calculate(n1, n2, multiply) << endl;
		cout << "Enter another pair: ";
	}
	cout << "Done\n";
}
double calculate(double a, double b, double (*pf)(double, double)) {
	return (*pf)(a, b);
}
double add(double x, double y) {
	return x + y;
}
double multiply(double x, double y) {
	return x * y;
}
