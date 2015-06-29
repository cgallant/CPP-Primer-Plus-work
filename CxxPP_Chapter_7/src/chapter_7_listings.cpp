/*
 * chapter_7_listings.cpp
 *
 *  Created on: Jun 26, 2015
 *      Author: chad
 */

#include <iostream>
#include <cmath>
#include <string>

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

//Listing 7.10;  strgback.cpp -- a function that returns a pointer to char
//
void listing_7_10() {
	using namespace std;
	char * buildstr(char, int); //function prototype
	char ch;
	int num;

	cin.get();
	cout << "Listing 7.10.\n\n";
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> num;
	char * ps;
	ps = buildstr(ch, num);
	cout << ps << endl;
	delete[] ps;
	cout << buildstr('+', 20) << "-Done-" << buildstr('+', 20);
}

char * buildstr(char c, int n) {
	char * pt = new char[n + 1];
	pt[n] = '\0';
	while (n-- > 0) {
		pt[n] = c;
	}
	return pt;
}

/// LISTING 7.11;  Travel.cpp - using structures with functions
struct travel_time {
	int hours;
	int mins;
};

travel_time sum(travel_time, travel_time);  //prototype
void show_travel_time(travel_time); //prototype

void listing_7_11() {
	using namespace std;
	cout << "Listing 7.11\n\n";
	travel_time t1 = { 5, 45 };
	travel_time t2 = { 4, 55 };
	travel_time t3 = { 4, 32 };
	cout << "Two-day total: ";
	show_travel_time(sum(t1, t2));
	cout << "Three-day total: ";
	show_travel_time(sum(sum(t1, t2), t3));
}

travel_time sum(travel_time t1, travel_time t2) {
	travel_time sum;
	sum.mins = (t1.mins + t2.mins) % 60;
	sum.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / 60;
	return sum;
}

void show_travel_time(travel_time temp) {
	std::cout << temp.hours << " hours, " << temp.mins << " minutes"
			<< std::endl;
}

//LISTING 7.12; Structfun.cpp -- functions with a structure argument
// structure declarations
struct polar {
	double distance;      // distance from origin
	double angle;         // direction from origin
};
struct rect {
	double x;             // horizontal distance from origin
	double y;             // vertical distance from origin
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

void listing_7_12() {
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)  // slick use of cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos) {
	using namespace std;
	polar answer;

	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;      // returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}
//LISTING 7.13; Structptr.cpp -- functions with a structure argument
// structure declarations

// prototypes
polar rect_to_polar_ptr(const rect *);
void show_polar_ptr(const polar *);

void listing_7_13() {
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)  // slick use of cin
	{
		pplace = rect_to_polar_ptr(&rplace);
		show_polar_ptr(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
}

// convert rectangular to polar coordinates
polar rect_to_polar_ptr(const rect *xypos) {
	using namespace std;
	polar answer;

	answer.distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
	answer.angle = atan2(xypos->y, xypos->x);
	return answer;      // returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar_ptr(const polar *dapos) {
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos->distance;
	cout << ", angle = " << dapos->angle * Rad_to_deg;
	cout << " degrees\n";
}

//Listing 7.14 - toppfive.cpp - handling an array of string objects
using namespace std;
void display_string(const string[], int);

void listing_7_14() {
	using namespace std;
	cin.get();
	const int SIZE = 5;
	string list[SIZE];
	cout << "Listing 7.14.\n\n";
	cout << "Enter your five favorite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "Your list:\n";
	display_string(list, SIZE);
}

void display_string(const string sa[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << i + 1 << ": " << sa[i] << endl;
	}
}
//LISTING 7.16 - recur.cpp - using recursion
void countdown(int);

void listing_7_16() {
	using namespace std;
	cin.get();
	cout << "Listing 7.16.\n\n";
	cout << "Enter an integer: ";
	int num;
	cin >> num;
	countdown(num);
}
void countdown(int n) {
	std::cout << "Counting down... " << n << std::endl;
	if (--n > 0) {
		countdown(n);
	}
	std::cout << n << ": Kaboom!\n";
}

//LISTING 7.17 - fun_ptr.cpp - pointers to functions
double pam(int);
double betsy(int);
void estimate(int, double (*)(int));

void listing_7_17() {
	using namespace std;
	cout << "Listing 7.17\n\n";
	cin.get();
	int lines;
	cout << "How many lines of code do you need: ";
	cin >> lines;
	cout << "Here's Betsy's estimate: " << endl;
	estimate(lines, betsy);
	cout << "Here's Pam's's estimate: " << endl;
	estimate(lines, pam);
}
void estimate(int lines, double (*pf)(int)) {
	using namespace std;
	cout << lines << " lines will take " << (*pf)(lines) << " hour(s)\n";
}
double betsy(int lns) {
	return 0.05 * lns;
}
double pam(int lns) {
	return 0.03 * lns + .0004 * lns * lns;
}
//Chapter review 4 - function to alter an array using the beginning and end addresses
void cr_4(int *, int*, int);

void chapter_review_4() {
	int ar[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		cout << ar[i] << endl;
	}
}

void cr_4(int *begin, int *end, int n) {
	for (int *pt = begin; pt != end; pt++) {
		*pt=n;
		cout<<*pt<<endl;
	}
}
