/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 16:51:10 by ageels        #+#    #+#                 */
/*   Updated: 2023/06/07 16:35:09 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP

#include <string>
#include <iostream>

class test {
	public :
		std::string _name;
		test();
		~test();
		test(const test &src);
		test &operator=(const test &src);
		bool operator>=(const test &src) const;
		bool operator<=(const test &src) const; 
		test(std::string name);
};

std::ostream	&operator<<(std::ostream &o, test const &i);

#endif