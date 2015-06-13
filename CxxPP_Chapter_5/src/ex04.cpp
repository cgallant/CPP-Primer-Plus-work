/*
 * ex04.cpp
 *
 *  Created on: Jun 13, 2015
 *      Author: Chad
 *
 Daphne invests $100 at 10% simple interest. That is, every year, the investment
 earns 10% of the original investment, or $10 each and every year:

 interest = 0.10 × original balance

 At the same time, Cleo invests $100 at 5% compound interest.  That is, interest is
 5% of the current balance, including previous additions of interest:

 interest = 0.05 × current balance

 Cleo earns 5% of $100 the first year, giving her $105. The next year she earns
 5% of $105, or $5.25, and so on. Write a program that finds how many years it takes
 for the value of Cleo’s investment to exceed the value of Daphne’s investment and
 then displays the value of both investments at that time.*/
#include <iostream>
#include "chapter_5.h"

void ex04() {
	using namespace std;
	cout << "Program exercise 4.\n\n";
	const int investment = 100;
	const float rate = .05;

	float d_investment = investment;
	float c_investment = investment;
	int year = 0;
	do {
		d_investment += investment * rate;
		c_investment *= (1 + (rate));
		year += 1;
	} while (c_investment < d_investment);
	cout << "Daphne investment: " << d_investment << endl;
	cout << "Cleo investment: " << c_investment << endl;
	cout << "Years: " << year << endl;
}

