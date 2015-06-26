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
int sum_array_1(int[], int);

void listing_7_5() {
	using namespace std;
	int cookies[arr_size] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	cout << "Listing 7.5; arrfun1.cpp\n\n";
	int sum = sum_array_1(cookies, arr_size);
	cout << "Total cookies eaten: " << sum << endl;
}

int sum_array_1(int a[], int n)  //parameters are array name and size
		{
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += a[i];
	}
	return total;
}
//  Listing 7.6
int sum_array_2(int[], int);
void listing_7_6() {
	using namespace std;
	int cookies[arr_size] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	cout << "Listing 7.6; arrfun2.cpp\n\n";
	cout << cookies << " = array address, " << sizeof(cookies)
			<< " = sizeof cookies.\n";
	int sum = sum_array_2(cookies, arr_size);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_array_2(cookies, 3);
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_array_2(cookies + 4, 4);
	cout << "Last four eaters ate " << sum << " cookies.\n";
}

int sum_array_2(int * a, int n) { //parameters are array name and size
	int total = 0;
	std::cout << a << " = a address, " << sizeof(a) << " = sizeof a.\n";
	for (int i = 0; i < n; i++) {
		total += a[i];
	}
	return total;
}
