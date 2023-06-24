/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/07 16:48:07 by ageels        #+#    #+#                 */
/*   Updated: 2023/06/24 14:24:13 by astrid        ########   odam.nl         */
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

int main(void) {
	int len = 3;
	
	// int count[] = {1, 2, 3};
	std::string names[] = {"Astrid", "Riek", "Jeroen"};
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
		toupper(names[i]);
		std::cout << names[i] << std::endl;
	}
	my_iter(names, len, &tolower);
	for (int i(0); i < len; i++) {
		std::cout << names[i] << std::endl;
	}
}
