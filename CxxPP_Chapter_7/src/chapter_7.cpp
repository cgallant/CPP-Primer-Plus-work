/*
 * chpater_7.cpp
 *
 *  Created on: Jun 26, 2015
 *      Author: chad
 */

#include <iostream>
#include "chapter_7.h"

int main(void){
	using namespace std;
	int listing, exercise;
	cout<<"Which listing: ";
	cin>>listing;
	switch (listing){
	case 4:
		listing_7_4();
		break;
	case 5:
		listing_7_5();
		break;
	default:
		cout<<"No such listing.\n\n";
	}


}

