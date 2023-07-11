/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/07 16:48:07 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/11 12:08:38 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "iter.hpp"

static void toupper(std::string &s) {
	int len = s.length();
	for (int i(0); i < len; i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
}

void tolower(std::string &s) {
	int len = s.length();
	for (int i(0); i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
}

void negative(int &num) {
	num *= -1;
}

template<typename T>
void display(const T anything) {
	std::cout << "Displaying : " << anything << std::endl;
}

int main(void) {
	int len = 3;
	int count[] = {1, 2, 3};
	const int constcount[] = {4, 5, 6};
	std::string names[] = {"Astrid", "Riek", "Jeroen"};
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
	}
	iter(names, len, toupper);
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
	}
	iter(names, len, tolower);
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
	}
	for (int i(0); i < len; i++) {
		std::cout << count[i] << std::endl;
	}
	iter(count, len, negative);
	for (int i(0); i < len; i++) {
		std::cout << count[i] << std::endl;
	}
	const std::string cats[] = {"Foppe", "Loena"};
	display(cats[1]);
	toupper(names[1]);
	display(count[2]);
	display(constcount[1]);
	iter(names, 2, display);
	iter(cats, 2, display);
	iter(constcount, 3, display);
	int *nullie = NULL;
	iter(nullie, 0, display);
}
