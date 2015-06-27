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

//LISTING 7.7
int fill_array(double *, int);
void show_array(const double *, int);
void revalue(double, double*, int);

void listing_7_7() {
	using namespace std;
	cin.get(); //clear return key
	const int Max = 5;
	cout << "Listing 7.7; arrfun.cpp\n\n";
	double properties[Max];
	int size = fill_array(properties, Max);
	cout << "size: " << size << endl;
	show_array(properties, size);
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
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.";
}

int fill_array(double a[], int n) {
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
	return i;
}

void show_array(const double a[], int n) {
	using namespace std;
	for (int i = 0; i < n; i++) {
		cout << "Property #" << i + 1 << ": $" << a[i] << endl;
	}
}
void revalue(double f, double a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] = a[i] * f;
	}
}

// Listing 7.8
int sum_array_4(const int *, const int *);
void listing_7_8() {
	using namespace std;
	cout << "Listing 7.8.\n\n";
	int cookies[arr_size] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	cout << "Listing 7.6; arrfun4.cpp\n\n";
	cout << cookies << " = array address, " << sizeof(cookies)
			<< " = sizeof cookies.\n";
	int sum = sum_array_4(cookies, cookies + arr_size);
	cout << "Total cookies eaten: " << sum << endl;
	sum = sum_array_4(cookies, cookies + arr_size);
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_array_4(cookies + 4, cookies + arr_size);
	cout << "Last four eaters ate " << sum << " cookies.\n";
}

int sum_array_4(const int * begin, const int *end) { //parameters are array name and size
	int total = 0;
	std::cout << begin << " = a address, " << sizeof(begin) << " = sizeof a.\n";
	const int *pt;
	for (pt = begin; pt != end; pt++) {
		total += *pt;
	}
	return total;
}
// LISTING 7.9; strfun.cpp

unsigned int c_in_string(const char *, char);
void listing_7_9() {
	using namespace std;
	cin.get();
	cout << "Listing 7.9.\n\n";
	char mmm[15] = "minimum";
	char * wail = "ululate";
	unsigned int a = c_in_string(mmm, 'm');
	unsigned int b = c_in_string(wail, 'u');
	cout << a << " m characters in minimum\n";
	cout << b << " u characters in ululate";
}

unsigned int c_in_string(const char *a, char c) {
	int count = 0;
	while (*a) {
		if (*a == c) {
			count++;
		}
		a++;
	}
	return count;
}
