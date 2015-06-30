/*
 * ex02.cpp
 *
 *  Created on: Jun 30, 2015
 *      Author: chad

 Write a program that asks the user to enter up to 10 golf scores, which are to be stored
 in an array. You should provide a means for the user to terminate input prior to entering
 10 scores. The program should display all the scores on one line and report the average
 score. Handle input, display, and the average calculation with three separate array processing
 functions.*/

#include <iostream>
int input_scores(int *, int);
void display_scores(int *, int);
double average_scores(int *, int);

void ex02() {
	using namespace std;
	int entries = 10;
	int scores[10] = { };
	entries = input_scores(scores, entries);
	display_scores(scores, entries);
	cout << "Average: " << average_scores(scores, entries);
}

int input_scores(int* pa, int n) {
	int count = 0;
	std::cout << "Enter up to 10 scores (0 to stop entering): ";
	for (int i = 0; i < n; i++, pa++) {
		std::cin >> *pa;
		if (0 == *pa)
			break;
		++count;
	}
	return count;
}
void display_scores(int* pa, int n) {
	std::cout << "Scores: ";
	for (int i = 0; i < n; i++, pa++) {
		std::cout << *pa << " ";
	}
	std::cout << std::endl;
}
double average_scores(int* pa, int n) {
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum += pa[i];
	}
	return sum / (double(n));
}
