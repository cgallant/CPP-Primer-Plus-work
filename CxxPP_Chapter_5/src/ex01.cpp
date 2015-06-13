/*
 * ex01.cpp
 *
 *  Created on: Jun 13, 2015
 *      Author: Chad
 Write a program that requests the user to enter two integers. The program should then
 calculate and report the sum of all the integers between and including the two integers.
 At this point, assume that the smaller integer is entered first. For example, if the user
 enters 2 and 9, the program should report that the sum of all the integers from 2 through
 9 is 44.
 */
#include <iostream>
#include "chapter_5.h"

void ex01() {
	using namespace std;
	int first, last, sum = 0;
	cout << "Programming exercise 1.\n\n";
	cout << "Enter two integers (with the lowest number first): ";
	cin >> first;
	cin >> last;
	for (int i = first; i <= last; i++) {
		sum += i;
	}
	cout << "The sum of all integers from " << first << " through " << last
			<< " is " << sum << ".\n";
}

