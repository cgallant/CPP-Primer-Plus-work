/*
 * ex04.cpp
 *
 *  Created on: Jun 30, 2015
 *      Author: chad
 Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. In
 these variations you choose several numbers from one set and call them the field numbers.
 For example, you might select 5 numbers from the field of 1-47). You also pick a
 single number (called a mega number or a power ball, etc.) from a second range, such as
 1-27. To win the grand prize, you have to guess all the picks correctly. The chance of
 winning is the product of the probability of picking all the field numbers times the probability
 of picking the mega number. For instance, the probability of winning the example
 described here is the product of the probability of picking 5 out of 47 correctly times the
 probability of picking 1 out of 27 correctly. Modify Listing 7.4 to calculate the probability
 of winning this kind of lottery.*/

#include <iostream>
long double prob(int, int, int);

void ex04() {
	using namespace std;
	cout << "Programming exercise 4.\n\n";
	int total, choices, mega;
	cout << "Enter the total number of choices on the game\n"
			<< "card and the total number of picks allowed and the number of mega balls: ";
	while (cin >> total >> choices >> mega) {
		cout << "You have one chance in " << prob(total, choices, mega)
				<< " of winning.\nNext two numbers (q to quit): ";
	}
	cout << "Bye.";
}

long double prob(int numbers, int picks, int m) {
	long double result = 1.0;
	for (int n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	result *= m;
	return result;
}
