/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ageels <ageels@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 16:58:47 by ageels        #+#    #+#                 */
/*   Updated: 2023/07/11 12:28:34 by ageels        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
void	Array<T>::message(std::string str) const {
	(void)str;
	std::cout << "\033[1;33m" << "Array - " << str << "\033[0m" << std::endl;
}

template <typename T>
Array<T>::Array() {
	_size = 0;
	_array = NULL;
	message("default constructor");
}

template <typename T>
Array<T>::Array(unsigned int n) {
	if (n == 0)
		throw (outOfBoundException());
	_array = new T[n]();
	_size = n;
	message("constructor(n)");
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
	message("default destructor");
}

template <typename T>
Array<T>::Array(const Array &src) {
	message("copy constructor");
	_array = NULL;
	*this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &src) {
	_size = src.size();
	delete[] _array;
	_array = new T[_size]();
	for (unsigned int i(0); i < _size; i++) {
		_array[i] = src[i];
	}
	message("'=' sign operator");
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const {
	//message("'[]' sign operator");
	if (i >= _size)
		throw (outOfBoundException());
	return (_array[i]);
}

template <typename T>
unsigned int Array<T>::size(void) const {
	//message("size");
	unsigned int n = this->_size;
	return (n);
}


template <typename T>
const char * Array<T>::outOfBoundException::what() const throw() {
	return ("\033[1;31mArray index out of bound\033[0m");
}

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &src) {
	if (src.size() == 0) {
		o << "array : []";
		return (o);
	}
	o << "array : [";
	for (unsigned int i(0); i < src.size() - 1; i++) {
		o << src[i] << ", ";
	}
	o << src[src.size() - 1] << "]";
	return (o);
}

#endif