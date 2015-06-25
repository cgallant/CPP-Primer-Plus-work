/*
 * ex09.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: chad
 Do Programming Exercise 6, but modify it to get information from a file. The first item
 in the file should be the number of contributors, and the rest of the file should consist of
 pairs of lines, with the first line of each pair being a contributor¡¯s name and the second
 line being a contribution. That is, the file should look like this:
 4
 Sam Stone
 2000
 Freida Flass
 100500
 Tammy Tubbs
 5000
 Rich Raptor
 55000*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

struct contribs {
	string donor_name;
	double amount;
};

void ex09() {
	using namespace std;
	cin.get();
	ifstream inFile;
	inFile.open("ex09.txt");
	if (!inFile.is_open()) {
		cout << "Could not open file " << "ex09.txt" << endl;
		cout << "Program terminating.\n" << endl;
		exit(EXIT_FAILURE);
	}
	int num;
	inFile >> num;
	cout << num << endl;
	contribs *ps = new contribs[num];
	for (int i = 0; i < num; ++i) {
		inFile.get(); //drop CR
		getline(inFile, ps[i].donor_name);
		inFile >> ps[i].amount;
	}
	inFile.close();

	cout << "\nGrand Patrons\n";
	int c = 0;
	for (int i = 0; i < num; ++i) {
		if (ps[i].amount >= 10000) {
			cout << ps[i].donor_name << ",  $" << ps[i].amount << endl;
			c++;
		}
	}
	if (0 == c)
		cout << "none.\n";
	cout << "\nPatrons\n";
	c = 0;
	for (int i = 0; i < num; ++i) {
		if (ps[i].amount < 10000) {
			cout << ps[i].donor_name << ",  $" << ps[i].amount << endl;
			c++;
		}
	}
	if (0 == c)
		cout << "none.\n";
}
