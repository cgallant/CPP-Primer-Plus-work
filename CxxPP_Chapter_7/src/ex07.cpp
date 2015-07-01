/*
 * ex07.cpp
 *
 *  Created on: Jul 1, 2015
 *      Author: chad
 Redo Listing 7.7, modifying the three array-handling functions to each use two pointer
 parameters to represent a range. The fill_array() function, instead of returning the
 actual number of items read, should return a pointer to the location after the last location
 filled; the other functions can use this pointer as the second argument to identify
 the end of the data.
 */

#include <iostream>

double * fill_array_07(double *, int);
void show_array_07(const double *, double *);
void revalue_07(double, double*, double *);

void ex07() {
	using namespace std;
	cin.get(); //clear return key
	const int Max = 5;
	cout << "Programming exercise 7.\n\n";
	double properties[Max];
	double *end = fill_array_07(properties, Max);
	int size = end - properties;
	show_array_07(properties, end);
	if (size > 0) {
	 cout << "Enter revaluation factor: ";
	 double factor;
	 if (!(cin >> factor)) {
	 cin.clear();
	 while (cin.get() != '\n') {
	 continue;
	 }
	 cout << "Invalid input.\n";
	 }
	 revalue_07(factor, properties, end);
	 show_array_07(properties, end);
	 }
	 cout << "Done.";
}

double * fill_array_07(double a[], int n) {
	using namespace std;
	double temp;
	cout << "Enter values (negative number to terminate).\n";
	int i;
	for (i = 0; i < n; i++) {
		cout << "Enter value #" << i + 1 << ": ";
		cin >> temp;
		if (!cin) {
			cout << "Input failed.\n";
			break;
		} else if (temp < 0) {
			break;
		}
		a[i] = temp;
	}
	return a + i;
}

void show_array_07(const double a[], double * end) {
	using namespace std;
	int i = 1;
	while (a != end) {
		cout << "Property #" << i << ": $" << *a++ << endl;
		i++;
	}
}
void revalue_07(double f, double a[], double * end) {
	while(a != end){
		*a *= f;
		a++;
	}
}

