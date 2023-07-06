/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 15:47:43 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/06 19:18:35 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <string>
#include <new>
#include <iostream>

template <class T>
class Array {
	private :
		T				*_array;
		unsigned int	_size;
		
		void	message(std::string str) const;

	public :
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &src);

		Array &operator=(const Array &src);
		T &operator[](unsigned int i) const;

		unsigned int	size() const;

		class outOfBoundException : public std::exception {
			public :
				virtual const char * what() const throw();
		};
};

#include "Array.tpp"

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &src);

#endif