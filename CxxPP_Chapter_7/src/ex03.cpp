/*
 * ex03.cpp
 *
 *  Created on: Jun 30, 2015
 *      Author: chad
 Here is the structure declaration below.
 a. Write a function that passes a box structure by value and that displays the value of
 each member.
 b. Write a function that passes the address of a box structure and that sets the volume
 member to the product of the other three dimensions.
 c. Write a simple program that uses these two functions.*/

#include <iostream>

struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display_box1(box);
void display_box2(box *);

void ex03() {
	using namespace std;
	cout << "Programming exercise 3.\n\n";
	box box1 = { "Chad Gallant", 32.7, 16.3, 12.5, 6144 };
	display_box1(box1);
	display_box2(&box1);
	display_box1(box1);
}

void display_box1(box s) {
	std::cout << "Maker: " << s.maker << "\nHeight: " << s.height << "\nWidth: "
			<< s.width << "\nLength: " << s.length << "\nVolume: " << s.volume
			<< std::endl;
}

void display_box2(box * ps) {
	ps->volume = (ps->height * ps->length * ps->width);
}
