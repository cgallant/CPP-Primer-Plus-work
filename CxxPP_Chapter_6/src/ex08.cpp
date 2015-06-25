/*
 * ex08.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: chad
 *
 Write a program that opens a text file, reads it character-by-character to the end of the
 file, and reports the number of characters in the file.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>

void ex08() {
	using namespace std;
	cin.get();
	ifstream inFile;
	cout << "Programming exercise 8.\n\n";
	const int len = 40;
	char file[len];
	cout << "Name of file: ";
	cin.getline(file, len);
	inFile.open(file);
	int count = 0;
	char ch;
	if (!inFile.is_open()) {
		cout << "Could not open file " << file << endl;
		cout << "Program terminating.\n" << endl;
		exit(EXIT_FAILURE);
	}
	inFile >> ch;
	while (inFile.good()) {
		inFile >> ch;
		count++;
	}
	cout << "Total characters read: " << count;
	inFile.close();
}

