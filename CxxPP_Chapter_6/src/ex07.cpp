/*
 * ex07.cpp
 *
 *  Created on: Jun 25, 2015
 *      Author: chad
 Write a program that reads input a word at a time until a lone q is entered. The program
 should then report the number of words that began with vowels, the number that began
 with consonants, and the number that fit neither of those categories. One approach is to
 use isalpha() to discriminate between words beginning with letters and those that
 don't and then use an if or switch statement to further identify those passing the
 isalpha() test that begin with vowels. A sample run might look like this:
 Enter words (q to quit):
 The 12 awesome oxen ambled
 quietly across 15 meters of lawn. q
 5 words beginning with vowels
 4 words beginning with consonants
 2 others
 */

#include <iostream>
#include <cctype>
#include <string.h>

void ex07() {
	using namespace std;
	cin.get();
	cout << "Programming exercise 7.\n";
	cout << "Enter words (q to quit):";
	int l = 40;
	int v_count = 0;
	int c_count = 0;
	int o_count = 0;
	char ch[l];
	char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
	while (cin >> ch) {
		if (ch[0] == 'q' && strlen(ch) == 1) {
			break;
		}
		if (isalpha(ch[0])) {
			c_count++; //assume it's a consonant until proven otherwise
			for (int i = 0; i < 5; ++i) {
				if (ch[0] == vowels[i]) {
					v_count++;  //add one to vowel count
					c_count--;  //take one away from constant count
				}
			}
		} else {
			o_count++;
		}
	}
	cout << v_count << " words beginning with vowels\n" << c_count
			<< " words beginning with consonants\n" << o_count << " others\n";
}

