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

const int arr_size = 8;
int sum_array(int[], int);

void listing_7_5() {
	using namespace std;
	int cookies[arr_size] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	cout << "Listing 7.5; arrfun1.cpp\n\n";
	int sum = sum_array(cookies, arr_size);
	cout << "Total cookies eaten: " << sum << endl;
}

int sum_array(int a[], int n)  //parameters are array name and size
		{
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += a[i];
	}
	return total;
}
