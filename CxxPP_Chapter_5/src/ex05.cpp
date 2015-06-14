/*
 * ex05.cpp
 *
 *  Created on: Jun 13, 2015
 *      Author: Chad
 *
 You sell the book C++ for Fools. Write a program that has you
 enter a year’s worth of monthly sales (in terms of number
 of books, not of money). The program should use a loop to
 prompt you by month,using an array of char *(or an array
 of string objects,if you prefer) initialized to the month
 strings and storing the input data in an array of int.
 Then, the program should find the sum of the array
 contents and report the total sales for the year.
 */

#include <iostream>

void ex05() {
	using namespace std;
	cout << "Programming exercise 5.\n\n";
	const char * months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
			"Aug", "Sep", "Oct", "Nov", "Dec" };
	cout << "Enter the number of books sold for each month.\n";
	int number = 0, total = 0;
	for (int i = 0; i < 12; ++i) {
		cout << months[i]<<": ";
		cin >> number;
		total += number;
	}
	cout << "The total number of books sold for the year: " << total << endl;
}
