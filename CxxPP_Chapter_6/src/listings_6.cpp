/*
 * listings_6.cpp
 *
 *  Created on: Jun 18, 2015
 *      Author: Chad
 */

/*
 * listings_6.cpp
 *
 *  Created on: Jun 16, 2015
 *      Author: Chad
 */

#include <iostream>
//#include "chapter_6.h"

using namespace std;

void listing_6_2() {
	char ch;
	cout << "Listing 6.2" << endl;
	cout << "Type a sentence ending in a '.'";
	cin.get(ch);
	while (ch != '.') {
		if (ch == '\n') {
			cout << ch;
		} else {
			cout << ++ch;
		}
		cin.get(ch);
	}
	cout << endl << "Please excuse the slight confusion.\n";
}

void listing_6_11() {
	using namespace std;
	enum {
		red, orange, yellow, green, blue, violet, indigo
	};

	cout << "Listing 6.11\n\n";
	cout << "Enter color code: (0-6): ";
	int code;
	cin >> code;
	while (red <= code && code <= indigo) {
		switch (code) {
		case red:
			cout << "Her lips were red.\n";
			break;
		case orange:
			cout << "Her hair was orange.\n";
			break;
		case yellow:
			cout << "Her shoes were yellow.\n";
			break;
		case green:
			cout << "Her nails were green.\n";
			break;
		case blue:
			cout << "Her sweatshirt was blue.\n";
			break;
		case violet:
			cout << "Her eyes were violet.\n";
			break;
		case indigo:
			cout << "Her mood was indigo.\n";
			break;
		}
		cout << "Enter color code: (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";
}

void listing_6_12() {
	using namespace std;
	cin.get();  //clear buffer
	const int arrSize = 80;
	char line[arrSize];

	cout << "Listing 6.12.\n\n";

	cout << "Enter a line of text: \n";
	cin.get(line, arrSize);
	cout << "Complete line: \n" << line;
	cout << "\nLine through first period:\n";
	int spaces = 0;
	for (int i = 0; i < arrSize; ++i) {
		cout << line[i];
		if ('.' == line[i]) {
			break;
		}
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << endl << spaces << " spaces\nDone";
}

void listing_6_13() {
	using namespace std;
	cin.get();
	cout << "Listing 6.13.\n\n";
	cout << "Please enter the weights of your fish.\n"
			<< "You may enter up to 5 fish <Q to terminate>.";
	const int Max = 5;
	double fish[Max];
	int i = 0, sum = 0;
	cout << "\nfish #1: ";
	while (i < Max && cin >> fish[i]) {
		sum += fish[i];
		if (++i < Max) {
			cout << "fish #" << i + 1 << ": ";
		}
	}
	cout << sum/double(i) << " = average weight of "<< i <<" fish\nDone";
}
