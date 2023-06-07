/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/06 15:42:40 by ageels        #+#    #+#                 */
/*   Updated: 2023/06/07 16:41:38 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "test.hpp"

int main(void) {
	int a = 4;
	int b = -2;

	std::cout << "Max : " << max(b, a) << std::endl;
	std::cout << "Min : " << min(b, a) << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	swap(a, b);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	test	one("the number one");
	test	two("the number two");
	
	std::cout << "Max : " << max(two, one) << std::endl;
	std::cout << "Min : " << min(two, one) << std::endl;
	std::cout << "one : " << one << std::endl;
	std::cout << "two : " << two << std::endl;
	swap(one, two);
	std::cout << "one : " << one << std::endl;
	std::cout << "two : " << two << std::endl;

	int & m = min(a, b);
	std::cout << "m : " << m << std::endl;
	std::cout << "a : " << a << std::endl;
	a = 3;
	std::cout << "m : " << m << std::endl;
	std::cout << "a : " << a << std::endl;
	//m = 3;
}
