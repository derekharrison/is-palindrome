/*
 * main.cpp
 *
 *  Created on: Jul 5, 2021
 *      Author: d-w-h
 */

#include <iostream>
#include <stdio.h>
#include <string>

std::string reverse_string(std::string s) {
    int size = s.length();
    std::string result = s;

    for(int i = 0; i < size; ++i) {
        result[i] = s[size-1-i];
    }

    return result;
}

bool is_palindrome(std::string s) {
    std::string result = s;
    int size = s.length();
    int cut = size / 2;
    bool is_palindrome = false;
    int l = 0;
    int r = size - 1;

    //Check if current string is palindrome
    bool is_even = !(size % 2);
    if(is_even) {
        cut = size / 2 - 1 + l;
        std::string left_cut = s.substr(l, cut + 1);
        std::string right_cut = s.substr(cut + 1, r - cut);
        std::string right_cut_reverse = reverse_string(right_cut);

        if(left_cut == right_cut_reverse) {
            return is_palindrome = true;
        }
        else {

        }
    }
    else {
        cut = size / 2 + l;
        std::string left_cut = s.substr(l, cut);
        std::string right_cut = s.substr(cut + 1, r - cut);
        std::string right_cut_reverse = reverse_string(right_cut);

        if(left_cut == right_cut_reverse) {
            return is_palindrome = true;
        }
    }

    return is_palindrome;
}

bool is_int_palindrome(int number) {

	std::string s = std::to_string(number);
	bool is_pdome = is_palindrome(s);

	return is_pdome;
}

int main(int argc, char* argv[]) {

	int number = 75311357;

	bool is_pdome = is_int_palindrome(number);

	std::cout << "number is palindrome: " << is_pdome << std::endl;
	std::cout << "done" << std::endl;

	return 0;
}
