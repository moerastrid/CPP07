/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 16:50:57 by ageels        #+#    #+#                 */
/*   Updated: 2023/06/07 16:42:28 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

test::test() : _name("default") {
	std::cout << "\033[1;34m" << "test" << "\033[0m" << std::endl;
}

test::~test() {
	std::cout << "\033[1;34m" << "~test" << "\033[0m" << std::endl;
}

test::test(std::string name) : _name(name) {
	std::cout << "\033[1;34m" << "test(name)" << "\033[0m" << std::endl;
}

test &test::operator=(const test &src) {
	std::cout << "\033[1;34m" << "test = test" << "\033[0m" << std::endl;
	this->_name = src._name;
	return (*this);
}

bool test::operator>=(const test &src) const {
	std::cout << "\033[1;34m" << "test >= test" << "\033[0m" << std::endl;
	if (src._name >= this->_name)
		return (false);
	return (true);
}

bool test::operator<=(const test &src) const {
	std::cout << "\033[1;34m" << "test <= test" << "\033[0m" << std::endl;
	if (src._name <= this->_name)
		return (false);
	return (true);
}

test::test(const test &src) {
	std::cout << "\033[1;34m" << "test(test)" << "\033[0m" << std::endl;
	*this = src;
}

std::ostream	&operator<<(std::ostream &o, test const &t) {
	o << t._name;
	return (o);
}
