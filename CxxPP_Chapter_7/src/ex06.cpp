/*
 * ex06.cpp
 *
 *  Created on: Jul 1, 2015
 *      Author: chad
 Write a program that uses the following functions:

 Fill_array() takes as arguments the name of an array of double values and an array
 size. It prompts the user to enter double values to be entered in the array. It ceases taking
 input when the array is full or when the user enters non-numeric input, and it
 returns the actual number of entries.

 Show_array() takes as arguments the name of an array of double values and an array
 size and displays the contents of the array.

 Reverse_array() takes as arguments the name of an array of double values and an
 array size and reverses the order of the values stored in the array.

 The program should use these functions to fill an array, show the array, reverse the array,
 show the array, reverse all but the first and last elements of the array, and then show the
 array.*/
#include <iostream>

int fill_array_ex_06(double *, int);
void show_array_ex06(double *, int);
void reverse_array(double *, int);

void ex06() {
	using namespace std;
	cin.get(); //clear cache
	int size = 5;
	double array[size];
	cout << "Programming exercise 6.\n\n";
	cout << "Array values: ";
	size = fill_array_ex_06(array, size);
	cout << "Array: ";
	show_array_ex06(array, size);
	reverse_array(array, size);
	cout << "Reversed array: ";
	show_array_ex06(array, size);
	reverse_array(array, size);
	reverse_array(array + 1, size - 2);
	cout << "Modified reversed array: ";
	show_array_ex06(array, size);
}

int fill_array_ex_06(double * ar, int n) {
	using namespace std;
	int i = 0;
	while (std::cin >> ar[i]) {
		if (i == n)
			return n;
		i++;
	}
	return i;
}
void show_array_ex06(double * ar, int n) {
	for (int k = 0; k < n; k++) {
		std::cout << ar[k] << "  ";
	}
	std::cout << std::endl;
}

void reverse_array(double *ar, int n) {
	double temp[n];
	for (int i = 0; i < n; i++) {
		temp[i] = *(ar + n - 1 - i);
	}
	for (int i = 0; i < n; i++) {
		ar[i] = temp[i];
	}
}
