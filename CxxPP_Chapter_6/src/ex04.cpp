/*
 * ex04.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: chad
 *
 When you join the Benevolent Order of Programmers, you can be known at BOP meetings
 by your real name, your job title, or your secret BOP name. Write a program that
 can list members by real name, by job title, by secret name, or by a member¡¯s preference.
 Base the program on the following structure:
 // Benevolent Order of Programmers name structure
 struct bop {
 char fullname[strsize]; // real name
 char title[strsize]; // job title
 char bopname[strsize]; // secret BOP name
 int preference; // 0 = fullname, 1 = title, 2 = bopname
 };
 In the program, create a small array of such structures and initialize it to suitable values.
 Have the program run a loop that lets the user select from different alternatives:
 a. display by name b. display by title
 c. display by bopname d. display by preference
 q. quit
 Note that "display by preference" does not mean display the preference member; it
 means display the member corresponding to the preference number. For instance, if
 preference is 1, choice d would display the programmer¡¯s job title. A sample run may
 look something like the following:
 Benevolent Order of Programmers Report
 a. display by name b. display by title
 c. display by bopname d. display by preference
 q. quit
 Enter your choice: a
 Wimp Macho
 Raki Rhodes
 Celia Laiter
 Hoppy Hipman
 Pat Hand
 Next choice: d
 Wimp Macho
 Junior Programmer
 MIPS
 Analyst Trainee
 LOOPY
 Next choice: q
 Bye!
 */
#include <iostream>

const int strsize = 40;
const int arrsize = 6;

struct bop {
	char fullname[strsize];  //real name
	char title[strsize];  //job title
	char bopname[strsize];  //secret BOP name
	int preference;  //0 = fullname, 1 = title, 2 = bopname
};

void display(char, bop[], int);//function prototype

void ex04() {
	using namespace std;
	cin.get(); //clear carriage return from cache

	cout << "Programming exercise 4.\n\n";

	bop bp[arrsize] =
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
		display(ch, bp, arrsize);
		cout << "Next choice: ";
	}
	cout << "\nProgram end.\n";
}

void display(char ch, bop array[], int arrsize) {
	using namespace std;
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
}

