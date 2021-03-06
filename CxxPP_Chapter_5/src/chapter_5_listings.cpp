/*
 * chapter_5_listings.cpp
 *
 *  Created on: Jun 8, 2015
 *      Author: Chad
 */

#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;

void listing_5_4() {
	long long factorial = 1;
	cout << "0! = 1" << endl;
	for (int i = 1; i <= 15; i++) {
		factorial *= i;
		cout << i << "! = " << factorial << endl;
	}
}

void listing_5_11() {
	cout << "Listing 5.11\n";
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
}

void listing_5_14() {
	int sec;
	cout << "Enter the delay in seconds: ";
	cin >> sec;
	clock_t start = clock();
	clock_t delay = sec * CLOCKS_PER_SEC;
	while (clock() - start < delay)
		;
	cout << "done\a\n";
}

void listing_5_15() {
	int fav = 7;
	cout << "Enter numbers in the range of 1-10 to find my favorite number: "
			<< endl;
	int num;
	do {
		cin >> num;
	} while (num != fav);
	cout << "Yes. " << fav << " is my favorite number.";
}

void listing_5_17() {
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:";
	cin.get(ch);
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read" << endl;
}

void listing_5_18() {
	char ch;
	int count = 0;
	while (cin.fail() == false) {
		cout << ch;
		count++;
		cin.get(ch);
	}
	cin.clear();
	cout << count << " characters read";
}

void listing_5_20() {
	const int Cities = 5;
	const int Years = 4;

	const char * cities[Cities] = {  //array of pointers to 5 strings
			"Gribble City", "Gribbletown", "New Gribble", "San Gribble",
					"Gribble Vista" };
	int maxtemps[Years][Cities] = { { 96, 100, 87, 101, 105 }, { 96, 98, 91,
			107, 104 }, { 97, 101, 93, 108, 107 }, { 98, 103, 95, 109, 108 } };

	cout << "Listing 5.20\n\n";
	cout << "Maximum temperatures for 2008-2011\n";

	for (int city = 0; city < Cities; ++city) {
		cout << cities[city];
		for (int year = 0; year < Years; ++year) {
			cout << "\t" << maxtemps[year][city];
		}
		cout << endl;
	}
}
