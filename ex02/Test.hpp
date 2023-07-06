/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 16:51:10 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/06 20:56:02 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include <string>
#include <iostream>

class Test {
	public :
		std::string _name;
		Test();
		~Test();
		Test(const Test &src);
		Test &operator=(const Test &src);
		bool operator>=(const Test &src) const;
		bool operator<=(const Test &src) const; 
		Test(std::string name);
};

std::ostream	&operator<<(std::ostream &o, Test const &i);

#endif