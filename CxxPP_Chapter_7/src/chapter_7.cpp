/*
 * chpater_7.cpp
 *
 *  Created on: Jun 26, 2015
 *      Author: chad
 */

#include <iostream>
#include "chapter_7.h"

int main(void) {
	using namespace std;
	int listing, exercise;
	cout << "Which listing: ";
	cin >> listing;
	switch (listing) {
	case 4:
		listing_7_4();
		break;
	case 5:
		listing_7_5();
		break;
	case 6:
		listing_7_6();
		break;
	case 7:
		listing_7_7();
		break;
	case 8:
		listing_7_8();
		break;
	case 9:
		listing_7_9();
		break;
	case 10:
		listing_7_10();
		break;
	case 11:
		listing_7_11();
		break;
	case 12:
		listing_7_12();
		break;
	case 13:
		listing_7_13();
		break;
	case 14:
		listing_7_14();
		break;
	case 16:
		listing_7_16();
		break;
	case 17:
		listing_7_17();
		break;
	case 24:
		chapter_review_4();
		break;
	case 28:
		chapter_review_8();
		break;
	default:
		cout << "No such listing.\n\n";
	}

}

