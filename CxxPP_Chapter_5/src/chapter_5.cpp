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
	case 20:
		listing_5_20();
		break;
	default:
		std::cout << "default";
	}
	int exercise;
	std::cout << "\n\nWhich programming exercise: ";
	std::cin >> exercise;
	switch (exercise) {
	case 1:
		ex01();
		break;
	case 2:
		ex02();
		break;
	case 3:
		ex03();
		break;
	case 4:
		ex04();
		break;
	case 5:
		ex05();
		break;
	case 6:
		ex06();
		break;
	case 7:
		ex07();
		break;
	case 8:
		ex08();
		break;
	case 9:
		ex09();
		break;
	case 10:
		ex10();
		break;
	default:
		std::cout << "default";
	}
	return 0;
}

