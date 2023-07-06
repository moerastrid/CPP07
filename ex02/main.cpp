/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 15:45:59 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/06 21:20:44 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Test.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>


void	other(void) {
	Array<int> testint(5);
	std::cout << testint << std::endl;

	Array<Test> testclass(4);
	testclass[0] = Test("Foppe");
	testclass[1] = Test("Loena");
	testclass[2] = Test("Dani");
	testclass[3] = Test("Niks");
	std::cout << "testclass " << testclass << std::endl;

	Array<Test> classtwo(2);
	classtwo[0] = Test("hoi");
	
	classtwo = testclass;
	
	Array<char> testchar(2);
	try {
		testchar[0] = 'a';
		testchar[1] = 'b';
		testchar[14] = 'c';
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "testchar : " << testchar[0] << testchar[1] << std::endl;

	Array<char> copy(testchar);
	std::cout << "copy : " << copy[0] << copy[1] << std::endl;
	copy[0] = 'd';
	copy[1] = 'e';
	std::cout << "testchar : " << testchar[0] << testchar[1] << std::endl;
	std::cout << "copy : " << copy[0] << copy[1] << std::endl;

	unsigned int n = 10;
	Array<char> fill(n);
	for (unsigned int i(0); i < n; i++) {
		fill[i] = i + 'f';
	}
	std::cout << "testchar " << testchar << std::endl;
	std::cout << "copy " << copy << std::endl;
	std::cout << "fill " << fill << std::endl;
	
	fill = copy;
	std::cout << "copy 2 " << copy << std::endl;
	std::cout << "fill 2 " << fill << std::endl;
	
	Array<char> anothertest = copy;
	
	try {
		unsigned int * a = new unsigned int();
		Array<int> subject_example(*a);
		std::cout << "size subject example : " << subject_example.size() << std::endl;
		delete a;
		subject_example[0] = 0;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

int main() {
	other();
	return (0);
}
