/*
 * chapter_5.cpp
 *
 *  Created on: Jun 8, 2015
 *      Author: Chad
 */

#include<iostream>
#include "chapter_5.h"

int main() {
	int listing;
	std::cout << "Which listing: ";
	std::cin >> listing;
	switch (listing) {
	case 4:
		listing_5_4();
		break;
	case 11:
		listing_5_11();
		break;
	case 14:
		listing_5_14();
		break;
	case 15:
		listing_5_15();
		break;
	case 17:
		listing_5_17();
		break;
	case 18:
		listing_5_18();
		break;
	default:
		std::cout << "default";
	}
	return 0;
}

