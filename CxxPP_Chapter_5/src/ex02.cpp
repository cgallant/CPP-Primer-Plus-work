/*
 * ex02.cpp
 *
 *  Created on: Jun 13, 2015
 *      Author: Chad
 Redo Listing 5.4 using a type array object instead of the built in array and
 type long double instead of long long.  Find the value of 100!

 */

#include <iostream>
#include <array>

void ex02() {
	using namespace std;
	const int array_size = 100;
	array<long double, array_size> factorials;
	factorials[0] = 1;
	for (int i = 1; i <= array_size; ++i) {
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i <= array_size; ++i) {
		cout << i << "! = " << factorials[i] << endl;
	}
}
