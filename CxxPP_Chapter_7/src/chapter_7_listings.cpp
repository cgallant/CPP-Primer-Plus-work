/*
 * chapter_7_listings.cpp
 *
 *  Created on: Jun 26, 2015
 *      Author: chad
 */

#include <iostream>
long double probability(int numbers, int picks);

void listing_7_4() {
	using namespace std;
	int total, choices;
	cout << "Listing 7.4; Lotto.cpp\n\n"
			<< "Enter the total number of choices on the game card and the total number of picks allowed: ";
	while (cin >> total >> choices) {
		cout << "You have one chance in " << probability(total, choices)
				<< "of winning.\nNext two numbers (q to quit): ";
	}
	cout << "Bye.";
}

long double probability(int numbers, int picks) {
	long double result = 1.0;
	for (int n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;
}

void listing_7_5() {
	using namespace std;
	cout << "Listing 7.5; arrfun1.cpp";

}
