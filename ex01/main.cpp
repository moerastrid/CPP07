/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/07 16:48:07 by ageels        #+#    #+#                 */
/*   Updated: 2023/06/24 14:40:10 by astrid        ########   odam.nl         */
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
void display(T anything) {
	std::cout << "Displaying : " << anything << std::endl;
}

int main(void) {
	int len = 3;
	int count[] = {1, 2, 3};
	std::string names[] = {"Astrid", "Riek", "Jeroen"};
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
	}
	my_iter(names, len, &toupper);
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
	}
	my_iter(names, len, &tolower);
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
	}
	for (int i(0); i < len; i++) {
		std::cout << count[i] << std::endl;
	}
	my_iter(count, len, &negative);
	for (int i(0); i < len; i++) {
		std::cout << count[i] << std::endl;
	}
	const std::string cats[] = {"Foppe", "Loena"};
	display(cats[1]);
	toupper(names[1]);
	display(count[2]);
	my_iter(names, 2, &display);
}
