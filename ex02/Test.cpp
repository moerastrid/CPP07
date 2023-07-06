/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 16:50:57 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/06 20:55:41 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Test::Test() : _name("default") {
	//std::cout << "\033[1;34m" << "Test" << "\033[0m" << std::endl;
}

Test::~Test() {
	//std::cout << "\033[1;34m" << "~Test" << "\033[0m" << std::endl;
}

Test::Test(std::string name) : _name(name) {
	//std::cout << "\033[1;34m" << "Test(name)" << "\033[0m" << std::endl;
}

Test &Test::operator=(const Test &src) {
	//std::cout << "\033[1;34m" << "Test = Test" << "\033[0m" << std::endl;
	this->_name = src._name;
	return (*this);
}

bool Test::operator>=(const Test &src) const {
	//std::cout << "\033[1;34m" << "Test >= Test" << "\033[0m" << std::endl;
	if (src._name >= this->_name)
		return (false);
	return (true);
}

bool Test::operator<=(const Test &src) const {
	//std::cout << "\033[1;34m" << "Test <= Test" << "\033[0m" << std::endl;
	if (src._name <= this->_name)
		return (false);
	return (true);
}

Test::Test(const Test &src) {
	//std::cout << "\033[1;34m" << "Test(Test)" << "\033[0m" << std::endl;
	*this = src;
}

std::ostream	&operator<<(std::ostream &o, Test const &t) {
	o << t._name;
	return (o);
}
