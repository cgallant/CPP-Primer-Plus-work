/*
 * ex01.cpp
 *
 *  Created on: Jun 23, 2015
 *      Author: Chad
 *
 Write a program that reads keyboard input to the @ symbol and that echoes the input
 except for digits, converting each uppercase character to lowercase, and vice versa.
 (Don't forget the cctype family.)
 */
#include <iostream>
#include <cctype>

void ex01() {
	using namespace std;
	cin.get();
	cout << "Programming exercise 1\n\n";
	char ch;
	while (cin.get(ch) && ch != '@') {
		if (isdigit(ch))
			continue;
		cout << char((isupper(ch) == 0 ? toupper(ch) : tolower(ch)));
	}
}

