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

struct s_expenses {
	double exp_array[4];
};
void fill_expenses(double *);
void show_expenses(double *);
void fill_s_expenses(s_expenses *);
void show_sexpenses(s_expenses *);

const int Seasons = 4;
const char * snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" }; //array of pointers to four strings

void ex08() {
	std::cout << "Programming exercise 8.\n\n";
	double expenses[Seasons];
	fill_expenses(expenses);
	show_expenses(expenses);
	s_expenses st;
	fill_s_expenses(&st);
	show_sexpenses(&st);

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
	cout << "Total: " << total << endl;
}
void fill_s_expenses(s_expenses * st) {
	using namespace std;
	for (int i = 0; i < 4; i++) {
		cout << snames[i] << " expenses: ";
		cin >> st->exp_array[i];
	}

}
void show_sexpenses(s_expenses *st) {
	using namespace std;
	cout << "EXPENSES\n";
	int total = 0;
	for (int i = 0; i < Seasons; i++) {
		cout << snames[i] << ": $" << st->exp_array[i] << endl;
		total += st->exp_array[i];
	}
	cout << "Total: " << total;
}
