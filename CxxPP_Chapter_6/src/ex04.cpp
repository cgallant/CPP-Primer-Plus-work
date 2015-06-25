/*
 * ex04.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: chad
 */
#include <iostream>

void ex04() {
	using namespace std;
	cin.get(); //clear carriage return from cache

	cout << "Programming exercise 4.\n\n";
	const int strsize = 40;
	const int arrsize = 6;

	struct bop {
		char fullname[strsize];  //real name
		char title[strsize];  //job title
		char bopname[strsize];  //secret BOP name
		int preference;  //0 = fullname, 1 = title, 2 = bopname
	};

	bop array[arrsize] =
			{ { "Chad Gallant", "Father", "Sneezy", 1 }, { "Barbara Becker",
					"Mother", "Grumpy", 2 }, { "Georgia Gallant", "Daughter",
					"Sleepy", 0 }, { "Spencer Gallant", "Son 1", "Happy", 0 }, {
					"Jesse Gallant", "Son 2", "Doc", 2 }, { "Q Gallant",
					"Son 3", "Bashful", 1 } };
	cout << "Benevolent Order of Programmers Report\n"
			<< "a. display by name\tb. display by title\nc. display by bopname\td. display by preference\nq. quit\n";
	char ch;
	cout << "Enter your choice: ";
	while (cin >> ch && ch != 'q') {
		switch (ch) {
		case 'a':
			for (int i = 0; i < arrsize; ++i) {
				cout << array[i].fullname << endl;
			}
			break;
		case 'b':
			for (int i = 0; i < arrsize; ++i) {
				cout << array[i].title << endl;
			}
			break;
		case 'c':
			for (int i = 0; i < arrsize; ++i) {
				cout << array[i].bopname << endl;
			}
			break;
		case 'd':
			for (int i = 0; i < arrsize; ++i) {
				switch (array[i].preference) {
				case 0:
					cout << array[i].fullname << endl;
					break;
				case 1:
					cout << array[i].title << endl;
					break;
				case 2:
					cout << array[i].bopname << endl;
					break;
				}
			}
			break;
		default:
			cout << "Not an option.\n";
		}
		cout << "Next choice: ";
	}
	cout << "\nProgram end.\n";
}
