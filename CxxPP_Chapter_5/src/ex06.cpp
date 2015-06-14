/*
 * ex06.cpp
 *
 *  Created on: Jun 13, 2015
 *      Author: Chad
 Do Programming Exercise 5,but use a two-dimensional
 array to store input for 3 years of monthly sales.
 Report the total sales for each individual year and
 for the combined years.
 */
#include <iostream>
#include "chapter_5.h"

void ex06() {
	using namespace std;
	cout << "Programming exercise 6.\n\n";
	const char * months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
			"Aug", "Sep", "Oct", "Nov", "Dec" };
	const int Years = 3;
	int year_sum = 0;
	int sum = 0;
	int sales[Years][12];
	for (int i = 0; i < Years; ++i) {
		cout << "Year " << i + 1 << endl;
		year_sum = 0;
		for (int j = 0; j < 12; ++j) {
			cout << months[j] << ": ";
			cin >> sales[i][j];
			year_sum += sales[i][j];
		}
		cout << "Total for year " << i + 1 << ": " << year_sum << endl;
		sum += year_sum;
	}
	cout << "Total: " << sum << endl;
}

