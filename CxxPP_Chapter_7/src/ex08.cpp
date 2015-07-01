/*
 * ex08.cpp
 *
 *  Created on: Jul 1, 2015
 *      Author: chad
 Redo Listing 7.15 without using the array class. Do two versions:

 a.  Use an ordinary array of const char * for the strings representing the season names, and use an ordinary
 array of double for the expenses.

 b.  Use an ordinary array of const char * for the strings representing the season names, and
 use a structure whose sole member is an ordinary array of double for the expenses. (This design is
 similar to the basic design of the array class.)
 */

#include <iostream>

void fill_expenses(double *);
void show_expenses(double *);
const int Seasons = 4;
const char * snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" }; //array of pointers to four strings

void ex08() {
	std::cout << "Programming exercise 8.\n\n";
	double expenses[Seasons];
	fill_expenses(expenses);
	show_expenses(expenses);
}
void fill_expenses(double *a) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << snames[i] << " expenses: ";
		cin >> a[i];
	}
}
void show_expenses(double *a) {
	using namespace std;
	cout << "EXPENSES\n";
	int total = 0;
	for (int i = 0; i < Seasons; i++) {
		cout << snames[i] << ": $" << a[i] << endl;
		total += a[i];
	}
	cout << "Total: " << total;
}
