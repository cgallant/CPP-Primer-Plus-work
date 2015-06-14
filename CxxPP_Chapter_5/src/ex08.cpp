/*
 * ex08.cpp
 *
 *  Created on: Jun 14, 2015
 *      Author: Chad
 Write a program that uses an array of char and a loop to read one word at a time until
 the word done is entered. The program should then report the number of words entered
 (not counting done). A sample run could look like this:

 Enter words (to stop, type the word done):
 anteater birthday category dumpster
 envy finagle geometry done for sure
 You entered a total of 7 words.
 You should include the cstring header file and use the strcmp() function to make the
 comparison test.
 */

#include <iostream>
#include <cstring>

void ex08() {
	using namespace std;
	const int elem = 30;
	cout << "Programming exercise 8.\n\n";

	char word[elem];
	int sum = 0;

	cout << "Enter words (to stop, type the word done): ";
	cin >> word;

	while (strcmp(word, "done")) {
		cout << word << endl;
		cin >> word;
		sum += 1;
	}
	cout << "You entered a total of " << sum << " words.";
}

