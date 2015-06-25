/*
 * ex03.cpp
 *
 *  Created on: Jun 23, 2015
 *      Author: Chad
 Write a precursor to a menu-driven program. The program should display a menu offering
 four choices, each labeled with a letter. If the user responds with a letter other than
 one of the four valid choices, the program should prompt the user to enter a valid
 response until the user complies. Then the program should use a switch to select a simple
 action based on the user's selection. A program run could look something like this:
 Please enter one of the following choices:
 c) carnivore p) pianist
 t) tree g) game
 f
 Please enter a c, p, t, or g: q
 Please enter a c, p, t, or g: t
 A maple is a tree.*/

#include <iostream>

void ex03() {
	using namespace std;
	cout << "Programming exercise 3.\n\n";
	cin.get();

	cout
			<< "Please enter one of the following choices:\nc) carnivore\tp) pianist\nt) tree\t\tg) game\n"
			<< "Please enter a c, p, t, or g:";
	char ch;
	cin >> ch;
	int i = 0;
	while (i != 1)
		switch (ch) {
		case 'c':
			i = 1;
			cout << "A car is an olds.\n";
			break;
		case 'p':
			cout << "A person is a Mary.\n";
			i = 1;
			break;
		case 't':
			cout << "A maple is a tree.\n";
			i = 1;
			break;
		case 'g':
			cout << "A girls is a house.\n";
			i = 1;
			break;
		default:
			i = 0;
			cout << "Please enter a c, p, t, or g:";
			cin >> ch;
		}
	cout << "End program.\n";
}

