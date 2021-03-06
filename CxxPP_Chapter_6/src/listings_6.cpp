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
#include <fstream>
#include <cstdlib>  //support for exit()

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
	cout << sum / double(i) << " = average weight of " << i << " fish\nDone";
}
void listing_6_14() {
	using namespace std;
	const int Max = 5;
	int scores[Max], sum = 0;
	cout << "Please enter your golf scores.\n" << "You must enter " << Max
			<< " rounds." << endl;
	for (int i = 0; i < Max; ++i) {
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> scores[i])) {
			cin.clear(); //reset
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a number.\n";
		}
		sum += scores[i];
	}
	cout << sum;
}
//outfile.cpp
void listing_6_15() {
	ofstream outFile;

	const int Max = 50;
	using namespace std;
	cin.get(); // clear buffer
	cout << "Listing 6.15.\n\n";

	cout << "Enter the make and model of automobile: ";
	char make_and_model[Max];
	cin.getline(make_and_model, Max);

	cout << "Enter the model year: ";
	int year;
	cin >> year;
	cin.get(); //clear buffer

	cout << "Enter the original asking price: ";
	double a_price;
	cin >> a_price;
	double d_price;
	d_price = .913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout << "Make and model: " << make_and_model << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking: $" << a_price << endl;
	cout << "Now asking: $" << d_price << endl;

	outFile.open("CarFile.txt");
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << make_and_model << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking: $" << a_price << endl;
	outFile << "Now asking: $" << d_price << endl;
	outFile.close();
}

void listing_6_16() {
	cin.get();
	ifstream inFile;
	char filename[40];
	cout << "Enter name of data file: ";
	cin.getline(filename, 40);
	cout << filename;
	inFile.open(filename);

	if (!inFile.is_open()) {
		cout << "Could not open file" << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE);
	}

	double value = 0, sum = 0;
	int count = 0;
	while (inFile >> value) {  //while input good and not EOF
		cout << value << "  ";
		++count;
		cout << count << endl;
		sum += value;
	}
	if (inFile.eof())
		cout << "\nEnd of file reached.\n";
	else if (inFile.fail())
		cout << "Data mismatch.\n";
	else
		cout << "Input terminated for unknown reasons.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else {
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
}
