/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 15:45:59 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/06 19:31:11 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
	Array<char> test(2);
	try {
		test[0] = 'a';
		test[1] = 'b';
		test[14] = 'c';
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "test : " << test[0] << test[1] << std::endl;

	Array<char> copy(test);
	std::cout << "copy : " << copy[0] << copy[1] << std::endl;
	copy[0] = 'd';
	copy[1] = 'e';
	std::cout << "test : " << test[0] << test[1] << std::endl;
	std::cout << "copy : " << copy[0] << copy[1] << std::endl;

	unsigned int n = 10;
	Array<char> fill(n);
	for (unsigned int i(0); i < n; i++) {
		fill[i] = i + 'f';
	}
	std::cout << "test " << test << std::endl;
	std::cout << "copy " << copy << std::endl;
	std::cout << "fill " << fill << std::endl;
	
	try {
		unsigned int * a = new unsigned int();
		Array<int> subject_example(*a);
		std::cout << "size subject example : " << subject_example.size() << std::endl;
		subject_example[0] = 0;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
