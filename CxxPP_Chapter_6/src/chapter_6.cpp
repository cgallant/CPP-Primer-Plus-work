/*
 * chapter_6.cpp
 *
 *  Created on: Jun 16, 2015
 *      Author: Chad
 */
#include <iostream>
#include "chapter_6.h"

int main() {
	using namespace std;
	int listing = 0;
	cout << "Chapter 6." << endl;
	cout << "Listing: ";
	cin >> listing;
	switch (listing) {
	case 2:
		listing_6_2();
		break;
	case 11:
		listing_6_11();
		break;
	case 12:
		listing_6_12();
		break;
	case 13:
		listing_6_13();
		break;
	case 14:
		listing_6_14();
		break;
	case 15:
		listing_6_15();
		break;
	case 16:
		listing_6_16();
		break;
	default:
		cout << "Default." << endl;
	}
	cin.get();
	cout << "Which programming exercise: " << endl;
	int exercise = 0;
	cin >> exercise;
	switch (exercise) {
	case 1:
		ex01();
		break;
	default:
		cout << "No programming exercise to run.\n";
	}

	return 0;
}
