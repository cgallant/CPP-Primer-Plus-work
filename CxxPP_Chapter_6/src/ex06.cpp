/*
 * ex06.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: chad
 Put together a program that keeps track of monetary contributions to the
 Society for the Preservation of Rightful Influence.  It should ask the user
 to enter the number of contributions and then solicit the user to enter the
 name and contribution of each contributor. The information should be stored in
 a dynamically allocated array of structures. Each structure should have two
 members: a character array (or else a string object) to store the name and a
 double member to hold the amount of the contribution. After reading all the data,
 the program should display the names and amounts donated for all donors who
 contributed $10,000 or more.  This list should be headed by the label Grand
 Patrons.  After that, the program should list the remaining donors.
 That list should headed Patrons. If there are no donors in one of the categories,
 the program should print the word "none". Aside from displaying two categories,
 the program need do no sorting.
 */

#include <iostream>
const int l = 40;
struct contributors {
	char contributors[l];
	double contribution;
};
void ex06() {
	using namespace std;
	cin.get(); //clear carriage return cache
	cout << "Programming exercise 6.\n\n";
	cout << "Enter the number of contributions: ";
	int num;
	cin >> num;
	cin.get(); //clear carriage return cache
	contributors *ps = new contributors[num];

	for (int i = 0; i < num; ++i) {
		cout << "Name: ";
		cin.getline(ps[i].contributors, l);
		cout << "Contribution: ";
		cin >> ps[i].contribution;
		cin.get();
	}
	cout << "\nGrand Patrons\n";
	int c = 0;
	for (int i = 0; i < num; ++i) {
		if (ps[i].contribution >= 10000) {
			cout << ps[i].contributors << ",  $" << ps[i].contribution << endl;
			c++;
		}
	}
	if (0 == c)
		cout << "none.\n";
	cout << "\nPatrons\n";
	c = 0;
	for (int i = 0; i < num; ++i) {
		if (ps[i].contribution < 10000) {
			cout << ps[i].contributors << ",  $" << ps[i].contribution << endl;
			c++;
		}
	}
	if (0 == c)
		cout << "none.\n";
}
