/*
 * ex05.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: chad
 The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following
 income tax code:
 first 5,000 tvarps: 0% tax
 next 10,000 tvarps: 10% tax
 next 20,000 tvarps: 15% tax
 tvarps after 35,000: 20% tax
 For example, someone earning 38,000 tvarps would owe 5,000 x 0.00 + 10,000 x 0.10
 + 20,000 x 0.15 + 3,000 x 0.20, or 4,600 tvarps. Write a program that uses a loop to
 solicit incomes and to report tax owed. The loop should terminate when the user enters
 a negative number or nonnumeric input.*/

#include <iostream>

void ex05() {
	using namespace std;

	double rates[4][2] = { { 5000, 0 }, { 10000, .1 }, { 20000, .15 }, { 35000,
			.2 } };
	cout << "Programming exercise 5\n\n";
	cin.get();  // clear carriage return from cache
	void display_income(double);
	double income = 0, tax = 0;
	cout << "Income level: ";
	while ((cin >> income) && income > 0) {
		for (int i = 0; i < 4 && income > 0; ++i) {
			if (income - rates[i][0] < 0) {
				tax = tax + (income * rates[i][1]);
				income = income - rates[i][0];

			} else {
				tax = tax + rates[i][0] * rates[i][1];
				income -= rates[i][0];
			}
		}
		cout << "Tax: " << tax << endl;
		tax = 0;
	}

	cout << "\nExit";
}
